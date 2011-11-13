/***************************************************************************
    This file is part of Project Lemon
    Copyright (C) 2011 Zhipeng Jia

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/

#include "assignmentthread.h"
#include "judgingthread.h"
#include "settings.h"
#include "compiler.h"
#include "task.h"
#include "testcase.h"

AssignmentThread::AssignmentThread(QObject *parent) :
    QThread(parent)
{
    moveToThread(this);
    checkRejudgeMode = false;
    curTestCaseIndex = 0;
    curSingleCaseIndex = 0;
    countFinished = 0;
    totalSingleCase = 0;
    stopJudging = false;
}

void AssignmentThread::setCheckRejudgeMode(bool check)
{
    checkRejudgeMode = check;
}

void AssignmentThread::setNeedRejudge(const QList<QPair<int, int> > &list)
{
    needRejudge = list;
}

void AssignmentThread::setSettings(Settings *_settings)
{
    settings = _settings;
}

void AssignmentThread::setTask(Task *_task)
{
    task = _task;
}

void AssignmentThread::setContestantName(const QString &name)
{
    contestantName = name;
}

CompileState AssignmentThread::getCompileState() const
{
    return compileState;
}

const QString& AssignmentThread::getCompileMessage() const
{
    return compileMessage;
}

const QString& AssignmentThread::getSourceFile() const
{
    return sourceFile;
}

const QList< QList<int> >& AssignmentThread::getScore() const
{
    return score;
}

const QList< QList<int> >& AssignmentThread::getTimeUsed() const
{
    return timeUsed;
}

const QList< QList<int> >& AssignmentThread::getMemoryUsed() const
{
    return memoryUsed;
}

const QList< QList<ResultState> >& AssignmentThread::getResult() const
{
    return result;
}

const QList<QStringList>& AssignmentThread::getMessage() const
{
    return message;
}

const QList<QStringList>& AssignmentThread::getInputFiles() const
{
    return inputFiles;
}

const QList< QPair<int, int> >& AssignmentThread::getNeedRejudge() const
{
    return needRejudge;
}

bool AssignmentThread::traditionalTaskPrepare()
{
    compileState = NoValidSourceFile;
    QDir contestantDir = QDir(Settings::sourcePath() + contestantName);
    QList<Compiler*> compilerList = settings->getCompilerList();
    
    for (int i = 0; i < compilerList.size(); i ++) {
        QStringList filters = compilerList[i]->getSourceExtensions();
        for (int j = 0; j < filters.size(); j ++)
            filters[j] = task->getSourceFileName() + "." + filters[j];
        QStringList files = contestantDir.entryList(filters, QDir::Files);
        sourceFile = "";
        for (int j = 0; j < files.size(); j ++) {
            qint64 fileSize = QFileInfo(Settings::sourcePath() + contestantName + QDir::separator() + files[j]).size();
            if (fileSize <= settings->getFileSizeLimit() * 1024) {
                sourceFile = files[j];
                break;
            }
        }
        if (! sourceFile.isEmpty()) {
            QDir(Settings::temporaryPath()).mkdir(contestantName);
            QFile::copy(Settings::sourcePath() + contestantName + QDir::separator() + sourceFile,
                        Settings::temporaryPath() + contestantName + QDir::separator() + sourceFile);
            QStringList configurationNames = compilerList[i]->getConfigurationNames();
            QStringList configurationSettings = compilerList[i]->getConfigurationSettings();
            QString currentConfiguration = task->getCompilerConfiguration(compilerList[i]->getCompilerName());
            for (int j = 0; j < configurationNames.size(); j ++)
                if (configurationNames[j] == currentConfiguration) {
                    QString arguments = configurationSettings[j];
                    arguments.replace("%s", QString("\"") + QFileInfo(Settings::temporaryPath() + contestantName
                                      + QDir::separator() + sourceFile).absoluteFilePath() + "\"");
                    arguments.replace("%e", QString("\"") + QFileInfo(Settings::temporaryPath() + contestantName
                                      + QDir::separator() + task->getExecutableFileName()).absoluteFilePath() + "\"");
                    QProcess *compiler = new QProcess(this);
                    compiler->setProcessChannelMode(QProcess::MergedChannels);
                    compiler->setWorkingDirectory(Settings::temporaryPath());
                    compilerPath = QFileInfo(compilerList[i]->getLocation()).absolutePath();
#ifdef Q_OS_WIN32
                    QProcessEnvironment environment;
                    environment.insert("path", compilerPath + ";" + environment.value("path"));
                    compiler->setProcessEnvironment(environment);
#endif
                    compiler->start(QString("\"") + compilerList[i]->getLocation() + "\" " + arguments);
                    if (! compiler->waitForStarted(-1)) {
                        compileState = InvalidCompiler;
                        delete compiler;
                        break;
                    }
                    QElapsedTimer timer;
                    timer.start();
                    bool flag = false;
                    while (timer.elapsed() < settings->getCompileTimeLimit()) {
                        if (compiler->state() != QProcess::Running) {
                            flag = true;
                            break;
                        }
                        QCoreApplication::processEvents();
                        if (stopJudging) {
                            compiler->kill();
                            delete compiler;
                            return false;
                        }
                        msleep(10);
                    }
                    if (! flag) {
                        compiler->kill();
                        compileState = CompileTimeLimitExceeded;
                    } else
                        if (compiler->exitCode() != 0) {
                            compileState = CompileError;
                            compileMessage = QString::fromLocal8Bit(compiler->readAllStandardOutput().data());
                        } else
                            if (! QDir(Settings::temporaryPath() + contestantName).exists(task->getExecutableFileName()))
                                compileState = InvalidCompiler;
                            else
                                compileState = CompileSuccessfully;
                    delete compiler;
                    break;
                }
            break;
        }
    }
    
    if (compileState != CompileSuccessfully) {
        emit compileError(task->getTotalTimeLimit(), int(compileState));
        return false;
    }
    
    return true;
}

void AssignmentThread::run()
{
    if (task->getTaskType() == Task::Traditional)
        if (! traditionalTaskPrepare()) return;
    
    if (stopJudging) return;
    
    for (int i = 0; i < task->getTestCaseList().size(); i ++) {
        timeUsed.append(QList<int>());
        memoryUsed.append(QList<int>());
        score.append(QList<int>());
        result.append(QList<ResultState>());
        message.append(QStringList());
        inputFiles.append(QStringList());
        for (int j = 0; j < task->getTestCase(i)->getInputFiles().size(); j ++) {
            timeUsed[i].append(-1);
            memoryUsed[i].append(-1);
            score[i].append(0);
            result[i].append(WrongAnswer);
            message[i].append("");
            inputFiles[i].append("");
        }
    }
    
    if (checkRejudgeMode)
        assign();
    else
        for (int i = 0; i < settings->getNumberOfThreads(); i ++) assign();
    
    exec();
}

void AssignmentThread::assign()
{
    if (! checkRejudgeMode) {
        if (curTestCaseIndex == task->getTestCaseList().size()) {
            if (countFinished == totalSingleCase) quit();
            return;
        }
        
        TestCase *curTestCase = task->getTestCase(curTestCaseIndex);
        if (curSingleCaseIndex == curTestCase->getInputFiles().size()) {
            curTestCaseIndex ++;
            for ( ; curTestCaseIndex < task->getTestCaseList().size(); curTestCaseIndex ++)
                if (task->getTestCase(curTestCaseIndex)->getInputFiles().size() > 0) break;
            curSingleCaseIndex = 0;
            if (curTestCaseIndex == task->getTestCaseList().size()) {
                if (countFinished == totalSingleCase) quit();
                return;
            }
            curTestCase = task->getTestCase(curTestCaseIndex);
        }
    } else {
        if (needRejudge.size() == 0) {
            if (countFinished == totalSingleCase) quit();
            return;
        }
        curTestCaseIndex = needRejudge[0].first;
        curSingleCaseIndex = needRejudge[0].second;
        needRejudge.removeFirst();
    }
    
    totalSingleCase ++;
    TestCase *curTestCase = task->getTestCase(curTestCaseIndex);
    JudgingThread *thread = new JudgingThread();
    thread->setCheckRejudgeMode(checkRejudgeMode);
    if (checkRejudgeMode)
        thread->setExtraTimeRation(0.2);
    else
        thread->setExtraTimeRation(0.2 * settings->getNumberOfThreads());
    thread->setCompilerPath(compilerPath);
    thread->setWorkingDirectory(Settings::temporaryPath()
                                + QString("_%1.%2").arg(curTestCaseIndex).arg(curSingleCaseIndex)
                                + QDir::separator());
    thread->setSpecialJudgeTimeLimit(settings->getSpecialJudgeTimeLimit());
    if (task->getTaskType() == Task::Traditional)
        thread->setExecutableFile(Settings::temporaryPath() + contestantName
                                  + QDir::separator() + task->getExecutableFileName());
    if (task->getTaskType() == Task::AnswersOnly) {
        QString fileName;
        fileName = QFileInfo(curTestCase->getInputFiles().at(curSingleCaseIndex)).completeBaseName();
        fileName += QString(".") + task->getAnswerFileExtension();
        thread->setAnswerFile(Settings::sourcePath() + contestantName + QDir::separator() + fileName);
    }
    thread->setTask(task);
    QDir(Settings::temporaryPath()).mkdir(QString("_%1.%2").arg(curTestCaseIndex).arg(curSingleCaseIndex));
    connect(thread, SIGNAL(finished()), this, SLOT(threadFinished()));
    connect(this, SIGNAL(stopJudgingSignal()), thread, SLOT(stopJudgingSlot()));
    
    inputFiles[curTestCaseIndex][curSingleCaseIndex] = QFileInfo(curTestCase->getInputFiles().at(curSingleCaseIndex)).fileName();
    thread->setInputFile(Settings::dataPath() + curTestCase->getInputFiles().at(curSingleCaseIndex));
    thread->setOutputFile(Settings::dataPath() + curTestCase->getOutputFiles().at(curSingleCaseIndex));
    thread->setFullScore(curTestCase->getFullScore());
    if (task->getTaskType() == Task::Traditional) {
        thread->setTimeLimit(curTestCase->getTimeLimit());
        thread->setMemoryLimit(curTestCase->getMemoryLimit());
    }
    running[thread] = qMakePair(curTestCaseIndex, curSingleCaseIndex ++);
    thread->start();
}

void AssignmentThread::threadFinished()
{
    JudgingThread *thread = dynamic_cast<JudgingThread*>(sender());
    if (stopJudging) {
        running.remove(thread);
        delete thread;
        if (running.size() == 0) quit();
        return;
    }
    QPair<int, int> cur = running[thread];
    timeUsed[cur.first][cur.second] = thread->getTimeUsed();
    memoryUsed[cur.first][cur.second] = thread->getMemoryUsed();
    score[cur.first][cur.second] = thread->getScore();
    result[cur.first][cur.second] = thread->getResult();
    message[cur.first][cur.second] = thread->getMessage();
    if (! checkRejudgeMode && thread->getNeedRejudge())
        needRejudge.append(cur);
    running.remove(thread);
    countFinished ++;
    delete thread;
    emit singleCaseFinished(task->getTestCase(cur.first)->getTimeLimit(),
                            cur.first, cur.second, int(result[cur.first][cur.second]));
    QDir(Settings::temporaryPath()).rmdir(QString("_%1.%2").arg(cur.first).arg(cur.second));
    assign();
}

void AssignmentThread::stopJudgingSlot()
{
    stopJudging = true;
    emit stopJudgingSignal();
}
