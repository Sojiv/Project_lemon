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

#include "lemon.h"
#include "ui_lemon.h"
#include "task.h"
#include "testcase.h"
#include "contest.h"
#include "compiler.h"
#include "contestant.h"
#include "settings.h"
#include "optionsdialog.h"
#include "addcompilerwizard.h"
#include "newcontestdialog.h"
#include "opencontestdialog.h"
#include "welcomedialog.h"
#include "addtaskdialog.h"
#include "detaildialog.h"

Lemon::Lemon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lemon)
{
    ui->setupUi(this);
    
    curContest = 0;
    settings = new Settings(this);
    
    ui->tabWidget->setVisible(false);
    ui->closeAction->setEnabled(false);
    
    dataDirWatcher = 0;
    settings->loadSettings();
    
    ui->summary->setSettings(settings);
    ui->taskEdit->setSettings(settings);
    ui->testCaseEdit->setSettings(settings);
    
    connect(this, SIGNAL(dataPathChanged()),
            ui->taskEdit, SIGNAL(dataPathChanged()));
    connect(this, SIGNAL(dataPathChanged()),
            ui->testCaseEdit, SIGNAL(dataPathChanged()));
    
    connect(ui->summary, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)),
            this, SLOT(summarySelectionChanged()));
    connect(ui->optionsAction, SIGNAL(triggered()),
            this, SLOT(showOptionsDialog()));
    connect(ui->refreshButton, SIGNAL(clicked()),
            this, SLOT(refreshButtonClicked()));
    connect(ui->judgeButton, SIGNAL(clicked()),
            ui->resultViewer, SLOT(judgeSelected()));
    connect(ui->judgeAllButton, SIGNAL(clicked()),
            ui->resultViewer, SLOT(judgeAll()));
    connect(ui->judgeAction, SIGNAL(triggered()),
            ui->resultViewer, SLOT(judgeSelected()));
    connect(ui->judgeAllAction, SIGNAL(triggered()),
            ui->resultViewer, SLOT(judgeAll()));
    connect(ui->tabWidget, SIGNAL(currentChanged(int)),
            this, SLOT(tabIndexChanged(int)));
    connect(ui->resultViewer, SIGNAL(itemSelectionChanged()),
            this, SLOT(viewerSelectionChanged()));
    connect(ui->resultViewer, SIGNAL(contestantDeleted()),
            this, SLOT(contestantDeleted()));
    connect(ui->newAction, SIGNAL(triggered()),
            this, SLOT(newAction()));
    connect(ui->openAction, SIGNAL(triggered()),
            this, SLOT(loadAction()));
    connect(ui->closeAction, SIGNAL(triggered()),
            this, SLOT(closeAction()));
    connect(ui->addTasksAction, SIGNAL(triggered()),
            this, SLOT(addTasksAction()));
    connect(ui->makeSelfTestAction, SIGNAL(triggered()),
            this, SLOT(makeSelfTest()));
    connect(ui->exportAction, SIGNAL(triggered()),
            this, SLOT(exportResult()));
    connect(ui->aboutAction, SIGNAL(triggered()),
            this, SLOT(aboutLemon()));
    connect(ui->exitAction, SIGNAL(triggered()),
            this, SLOT(close()));
    
    appTranslator = new QTranslator(this);
    qtTranslator = new QTranslator(this);
    QApplication::installTranslator(appTranslator);
    QApplication::installTranslator(qtTranslator);
    
    QStringList fileList = QDir(":/translation").entryList(QStringList() << "lemon_*.qm", QDir::Files);
    for (int i = 0; i < fileList.size(); i ++) {
        appTranslator->load(QString(":/translation/%1").arg(fileList[i]));
        QAction *newLanguage = new QAction(appTranslator->translate("Lemon", "English"), this);
        newLanguage->setCheckable(true);
        QString language = QFileInfo(fileList[i]).baseName();
        language.remove(0, language.indexOf('_') + 1);
        newLanguage->setData(language);
        connect(newLanguage, SIGNAL(triggered()),
                this, SLOT(setUiLanguage()));
        languageActions.append(newLanguage);
    }
    ui->languageMenu->addActions(languageActions);
    ui->setEnglishAction->setData("en");
    ui->setEnglishAction->setCheckable(true);
    connect(ui->setEnglishAction, SIGNAL(triggered()),
            this, SLOT(setUiLanguage()));
    loadUiLanguage();
    
    QSettings settings("Crash", "Lemon");
    QSize _size = settings.value("WindowSize", size()).toSize();
    resize(_size);
}

Lemon::~Lemon()
{
    delete ui;
}

void Lemon::changeEvent(QEvent *event)
{
    if (event->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
        ui->resultViewer->refreshViewer();
    }
}

void Lemon::closeEvent(QCloseEvent *event)
{
    if (curContest) saveContest(curFile);
    settings->saveSettings();
    QSettings settings("Crash", "Lemon");
    settings.setValue("WindowSize", size());
}

void Lemon::welcome()
{
    if (settings->getCompilerList().size() == 0) {
        AddCompilerWizard *wizard = new AddCompilerWizard(this);
        if (wizard->exec() == QDialog::Accepted) {
            QList<Compiler*> compilerList = wizard->getCompilerList();
            for (int i = 0; i < compilerList.size(); i ++)
                settings->addCompiler(compilerList[i]);
        }
        delete wizard;
    }
    
    WelcomeDialog *dialog = new WelcomeDialog(this);
    dialog->setRecentContest(settings->getRecentContest());
    if (dialog->exec() == QDialog::Accepted) {
        settings->setRecentContest(dialog->getRecentContest());
        if (dialog->getCurrentTab() == 0)
            loadContest(dialog->getSelectedContest());
        else
            newContest(dialog->getContestTitle(), dialog->getSavingName(), dialog->getContestPath());
    } else
        settings->setRecentContest(dialog->getRecentContest());
    delete dialog;
}

void Lemon::loadUiLanguage()
{
    ui->setEnglishAction->setChecked(false);
    for (int i = 0; i < languageActions.size(); i ++)
        languageActions[i]->setChecked(false);
    for (int i = 0; i < languageActions.size(); i ++)
        if (languageActions[i]->data().toString() == settings->getUiLanguage()) {
            languageActions[i]->setChecked(true);
            appTranslator->load(QString(":/translation/lemon_%1.qm").arg(settings->getUiLanguage()));
            qtTranslator->load(QString(":/translation/qt_%1.qm").arg(settings->getUiLanguage()));
            return;
        }
    settings->setUiLanguage("en");
    appTranslator->load("");
    qtTranslator->load("");
    ui->setEnglishAction->setChecked(true);
}

void Lemon::insertWatchPath(const QString &curDir, QFileSystemWatcher *watcher)
{
    watcher->addPath(curDir);
    QDir dir(curDir);
    QStringList list = dir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
    for (int i = 0; i < list.size(); i ++)
        insertWatchPath(curDir + list[i] + QDir::separator(), watcher);
}

void Lemon::resetDataWatcher()
{
    if (dataDirWatcher) delete dataDirWatcher;
    dataDirWatcher = new QFileSystemWatcher(this);
    insertWatchPath(Settings::dataPath(), dataDirWatcher);
    connect(dataDirWatcher, SIGNAL(directoryChanged(QString)),
            this, SLOT(resetDataWatcher()));
    connect(dataDirWatcher, SIGNAL(fileChanged(QString)),
            this, SIGNAL(dataPathChanged()));
    connect(dataDirWatcher, SIGNAL(directoryChanged(QString)),
            this, SIGNAL(dataPathChanged()));
    emit dataPathChanged();
}

void Lemon::summarySelectionChanged()
{
    if (! ui->summary->isEnabled()) return;
    
    QTreeWidgetItem *curItem = ui->summary->currentItem();
    if (! curItem) {
        ui->taskEdit->setEditTask(0);
        ui->editWidget->setCurrentIndex(0);
        return;
    }
    
    int index = ui->summary->indexOfTopLevelItem(curItem);
    if (index != -1) {
        ui->taskEdit->setEditTask(curContest->getTask(index));
        ui->editWidget->setCurrentIndex(1);
        
    } else {
        QTreeWidgetItem *parentItem = curItem->parent();
        int taskIndex = ui->summary->indexOfTopLevelItem(parentItem);
        int testCaseIndex = parentItem->indexOfChild(curItem);
        Task *curTask = curContest->getTask(taskIndex);
        TestCase *curTestCase = curTask->getTestCase(testCaseIndex);
        
        ui->testCaseEdit->setEditTestCase(curTestCase, curTask->getTaskType() == Task::Traditional);
        ui->editWidget->setCurrentIndex(2);
    }
}

void Lemon::showOptionsDialog()
{
    OptionsDialog *dialog = new OptionsDialog(this);
    dialog->resetEditSettings(settings);
    if (dialog->exec() == QDialog::Accepted) {
        settings->copyFrom(dialog->getEditSettings());
        ui->testCaseEdit->setSettings(settings);
        if (curContest) {
            const QList<Task*> &taskList = curContest->getTaskList();
            for (int i = 0; i < taskList.size(); i ++)
                taskList[i]->refreshCompilerConfiguration(settings);
        }
    }
    delete dialog;
}

void Lemon::refreshButtonClicked()
{
    curContest->refreshContestantList();
    ui->resultViewer->refreshViewer();
    if (ui->resultViewer->rowCount() > 0) {
        ui->judgeAllButton->setEnabled(true);
        ui->judgeAllAction->setEnabled(true);
    } else {
        ui->judgeAllButton->setEnabled(false);
        ui->judgeAllAction->setEnabled(false);
    }
}

void Lemon::tabIndexChanged(int index)
{
    if (index == 0) {
        ui->judgeAction->setEnabled(false);
        ui->judgeButton->setEnabled(false);
        ui->judgeAllAction->setEnabled(false);
        ui->judgeAllButton->setEnabled(false);
    } else {
        QList<QTableWidgetSelectionRange> selectionRange = ui->resultViewer->selectedRanges();
        if (selectionRange.size() > 0) {
            ui->judgeAction->setEnabled(true);
            ui->judgeButton->setEnabled(true);
        } else {
            ui->judgeAction->setEnabled(false);
            ui->judgeButton->setEnabled(false);
        }
        if (ui->resultViewer->rowCount() > 0) {
            ui->judgeAllAction->setEnabled(true);
            ui->judgeAllButton->setEnabled(true);
        } else {
            ui->judgeAllAction->setEnabled(false);
            ui->judgeAllButton->setEnabled(false);
        }
    }
}

void Lemon::viewerSelectionChanged()
{
    QList<QTableWidgetSelectionRange> selectionRange = ui->resultViewer->selectedRanges();
    if (selectionRange.size() > 0) {
        ui->judgeButton->setEnabled(true);
        ui->judgeAction->setEnabled(true);
    } else {
        ui->judgeButton->setEnabled(false);
        ui->judgeAction->setEnabled(false);
    }
}

void Lemon::contestantDeleted()
{
    if (ui->resultViewer->rowCount() > 0) {
        ui->judgeAllButton->setEnabled(true);
        ui->judgeAllAction->setEnabled(true);
    } else {
        ui->judgeAllButton->setEnabled(false);
        ui->judgeAllAction->setEnabled(false);
    }
}

void Lemon::saveContest(const QString &fileName)
{
    QFile file(fileName);
    if (! file.open(QFile::WriteOnly)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot open file %1").arg(fileName),
                             QMessageBox::Close);
        return;
    }
    
    QApplication::setOverrideCursor(Qt::WaitCursor);
    
    QByteArray data;
    QDataStream _out(&data, QIODevice::WriteOnly);
    curContest->writeToStream(_out);
    data = qCompress(data);
    QDataStream out(&file);
    out << unsigned(MagicNumber) << qChecksum(data.data(), data.length()) << data.length();
    out.writeRawData(data.data(), data.length());
    
    QApplication::restoreOverrideCursor();
}

void Lemon::loadContest(const QString &filePath)
{
    if (curContest) closeAction();
    
    QFile file(filePath);
    if (! file.open(QFile::ReadOnly)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot open file %1").arg(QFileInfo(filePath).fileName()),
                             QMessageBox::Close);
        return;
    }
    
    QDataStream _in(&file);
    unsigned checkNumber;
    _in >> checkNumber;
    if (checkNumber != unsigned(MagicNumber)) {
        QMessageBox::warning(this, tr("Error"), tr("File %1 is broken").arg(QFileInfo(filePath).fileName()),
                             QMessageBox::Close);
        return;
    }
    
    quint16 checksum;
    int len;
    _in >> checksum >> len;
    char *raw = new char[len];
    _in.readRawData(raw, len);
    if (qChecksum(raw, len) != checksum) {
        QMessageBox::warning(this, tr("Error"), tr("File %1 is broken").arg(QFileInfo(filePath).fileName()),
                             QMessageBox::Close);
        delete[] raw;
        return;
    }
    
    QByteArray data(raw, len);
    delete[] raw;
    data = qUncompress(data);
    QDataStream in(data);
    
    QApplication::setOverrideCursor(Qt::WaitCursor);
    
    curContest = new Contest(this);
    curContest->setSettings(settings);
    curContest->readFromStream(in);
    
    curFile = QFileInfo(filePath).fileName();
    QDir::setCurrent(QFileInfo(filePath).path());
    QDir().mkdir(Settings::dataPath());
    QDir().mkdir(Settings::sourcePath());
    ui->summary->setContest(curContest);
    ui->resultViewer->setContest(curContest);
    ui->resultViewer->refreshViewer();
    ui->tabWidget->setVisible(true);
    resetDataWatcher();
    ui->closeAction->setEnabled(true);
    ui->addTasksAction->setEnabled(true);
    ui->makeSelfTestAction->setEnabled(true);
    ui->exportAction->setEnabled(true);
    setWindowTitle(tr("Lemon - %1").arg(curContest->getContestTitle()));
    
    QApplication::restoreOverrideCursor();
    ui->tabWidget->setCurrentIndex(0);
}

void Lemon::newContest(const QString &title, const QString &savingName, const QString &path)
{
    if (! QDir(path).exists() && ! QDir().mkpath(path)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot make contest path"),
                             QMessageBox::Close);
        return;
    }
    
    if (curContest) closeAction();
    curContest = new Contest(this);
    curContest->setSettings(settings);
    curContest->setContestTitle(title);
    setWindowTitle(tr("Lemon - %1").arg(title));
    QDir::setCurrent(path);
    QDir().mkdir(Settings::dataPath());
    QDir().mkdir(Settings::sourcePath());
    curFile = savingName + ".cdf";
    saveContest(curFile);
    ui->summary->setContest(curContest);
    ui->resultViewer->setContest(curContest);
    ui->resultViewer->refreshViewer();
    ui->tabWidget->setVisible(true);
    resetDataWatcher();
    ui->closeAction->setEnabled(true);
    ui->addTasksAction->setEnabled(true);
    ui->makeSelfTestAction->setEnabled(true);
    ui->exportAction->setEnabled(true);
    QStringList recentContest = settings->getRecentContest();
    recentContest.append(QDir::toNativeSeparators((QDir().absoluteFilePath(curFile))));
    settings->setRecentContest(recentContest);
    ui->tabWidget->setCurrentIndex(0);
}

void Lemon::newAction()
{
    NewContestDialog *dialog = new NewContestDialog(this);
    if (dialog->exec() == QDialog::Accepted)
        newContest(dialog->getContestTitle(), dialog->getSavingName(), dialog->getContestPath());
    delete dialog;
}

void Lemon::closeAction()
{
    saveContest(curFile);
    ui->summary->setContest(0);
    ui->taskEdit->setEditTask(0);
    ui->resultViewer->setContest(0);
    delete curContest;
    curContest = 0;
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setVisible(false);
    ui->closeAction->setEnabled(false);
    ui->addTasksAction->setEnabled(false);
    ui->makeSelfTestAction->setEnabled(false);
    ui->exportAction->setEnabled(false);
    setWindowTitle(tr("Lemon"));
}

void Lemon::loadAction()
{
    OpenContestDialog *dialog = new OpenContestDialog(this);
    dialog->setRecentContest(settings->getRecentContest());
    if (dialog->exec() == QDialog::Accepted)
        loadContest(dialog->getSelectedContest());
    settings->setRecentContest(dialog->getRecentContest());
    delete dialog;
}

void Lemon::getFiles(const QString &path, const QStringList &filters, QMap<QString, QString> &files)
{
    QDir dir(path);
    if (! filters.isEmpty()) dir.setNameFilters(filters);
    QFileInfoList list = dir.entryInfoList(QDir::Files);
    for (int i = 0; i < list.size(); i ++)
        files.insert(list[i].completeBaseName(), list[i].fileName());
}

void Lemon::addTask(const QString &title, const QList<QPair<QString, QString> > &testCases,
                    int fullScore, int timeLimit, int memoryLimit)
{
    Task *newTask = new Task;
    newTask->setProblemTitle(title);
    newTask->setSourceFileName(title);
    newTask->setInputFileName(title + ".in");
    newTask->setOutputFileName(title + ".out");
    newTask->refreshCompilerConfiguration(settings);
    newTask->setAnswerFileExtension(settings->getDefaultOutputFileExtension());
    curContest->addTask(newTask);
    for (int i = 0; i < testCases.size(); i ++) {
        TestCase *newTestCase = new TestCase;
        newTestCase->setFullScore(fullScore);
        newTestCase->setTimeLimit(timeLimit);
        newTestCase->setMemoryLimit(memoryLimit);
        newTestCase->addSingleCase(title + QDir::separator() + testCases[i].first,
                                   title + QDir::separator() + testCases[i].second);
        newTask->addTestCase(newTestCase);
    }
}

bool Lemon::compareFileName(const QPair<QString, QString> &a, const QPair<QString, QString> &b)
{
    return a.first.length() < b.first.length()
            || a.first.length() == b.first.length() && QString::localeAwareCompare(a.first, b.first) < 0;
}

void Lemon::addTasksAction()
{
    QStringList list = QDir(Settings::dataPath()).entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    QSet<QString> nameSet;
    QList<Task*> taskList = curContest->getTaskList();
    for (int i = 0; i < taskList.size(); i ++)
        nameSet.insert(taskList[i]->getSourceFileName());
    QStringList nameList;
    QList< QList< QPair<QString, QString> > > testCases;
    for (int i = 0; i < list.size(); i ++)
        if (! nameSet.contains(list[i])) {
            QStringList filters;
            filters = settings->getInputFileExtensions();
            if (filters.isEmpty()) filters << "in";
            for (int j = 0; j < filters.size(); j ++)
                filters[j] = QString("*.") + filters[j];
            QMap<QString, QString> inputFiles;
            getFiles(Settings::dataPath() + list[i], filters, inputFiles);
            
            filters = settings->getOutputFileExtensions();
            if (filters.isEmpty()) filters << "out" << "ans";
            for (int j = 0; j < filters.size(); j ++)
                filters[j] = QString("*.") + filters[j];
            QMap<QString, QString> outputFiles;
            getFiles(Settings::dataPath() + list[i], filters, outputFiles);
            
            QList< QPair<QString, QString> > cases;
            QStringList baseNameList = inputFiles.keys();
            for (int j = 0; j < baseNameList.size(); j ++)
                if (outputFiles.contains(baseNameList[j]))
                    cases.append(qMakePair(inputFiles[baseNameList[j]], outputFiles[baseNameList[j]]));
            
            qSort(cases.begin(), cases.end(), compareFileName);
            if (! cases.isEmpty()) {
                nameList.append(list[i]);
                testCases.append(cases);
            }
        }
    
    if (nameList.isEmpty()) {
        QMessageBox::warning(this, tr("Lemon"), tr("No task found"), QMessageBox::Ok);
        return;
    }
    
    AddTaskDialog *dialog = new AddTaskDialog(this);
    dialog->resize(dialog->sizeHint());
    dialog->setMaximumSize(dialog->sizeHint());
    dialog->setMinimumSize(dialog->sizeHint());
    for (int i = 0; i < nameList.size(); i ++)
        dialog->addTask(nameList[i], 100, settings->getDefaultTimeLimit(), settings->getDefaultMemoryLimit());
    if (dialog->exec() == QDialog::Accepted)
        for (int i = 0; i < nameList.size(); i ++)
            addTask(nameList[i], testCases[i], dialog->getFullScore(i) / testCases[i].size(),
                    dialog->getTimeLimit(i), dialog->getMemoryLimit(i));
    
    ui->summary->setContest(curContest);
}

void Lemon::clearPath(const QString &curDir)
{
    QDir dir(curDir);
    QStringList fileList = dir.entryList(QDir::Files);
    for (int i = 0; i < fileList.size(); i ++)
        if (! dir.remove(fileList[i])) {
#ifdef Q_OS_WIN32
            QProcess::execute(QString("attrib -R \"") + curDir + fileList[i] + "\"");
#endif
#ifdef Q_OS_LINUX
            QProcess::execute(QString("chmod +w \"") + curDir + fileList[i] + "\"");
#endif
            dir.remove(fileList[i]);
        }
    QStringList dirList = dir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
    for (int i = 0; i < dirList.size(); i ++) {
        clearPath(curDir + dirList[i] + QDir::separator());
        dir.rmdir(dirList[i]);
    }
}

void Lemon::makeSelfTest()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    if (QDir(Settings::selfTestPath()).exists())
        clearPath(Settings::selfTestPath());
    if (! QDir(Settings::selfTestPath()).exists() && ! QDir().mkdir(Settings::selfTestPath())) {
        QApplication::restoreOverrideCursor();
        QMessageBox::warning(this, tr("Lemon"), tr("Cannot make directory"), QMessageBox::Ok);
        return;
    }
    QList<Task*> taskList = curContest->getTaskList();
    for (int i = 0; i < taskList.size(); i ++) {
        QDir(Settings::selfTestPath()).mkdir(taskList[i]->getProblemTile());
        QList<TestCase*> testCaseList = taskList[i]->getTestCaseList();
#ifdef Q_OS_WIN32
        QFile file(Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator() + "check.bat");
        if (! file.open(QFile::WriteOnly | QFile::Text)) {
            QApplication::restoreOverrideCursor();
            QMessageBox::warning(this, tr("Lemon"), tr("Cannot write check.bat"), QMessageBox::Ok);
            return;
        }
        QFile dummy(Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator() + "enter");
        if (! dummy.open(QFile::WriteOnly | QFile::Text)) {
            QApplication::restoreOverrideCursor();
            QMessageBox::warning(this, tr("Lemon"), tr("Cannot write enter"), QMessageBox::Ok);
            return;
        }
        QTextStream dummyStream(&dummy);
        dummyStream << endl;
        dummy.close();
#endif
#ifdef Q_OS_LINUX
        QFile file(Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator() + "check.sh");
        if (! file.open(QFile::WriteOnly | QFile::Text)) {
            QApplication::restoreOverrideCursor();
            QMessageBox::warning(this, tr("Lemon"), tr("Cannot write check.sh"), QMessageBox::Ok);
            return;
        }
#endif
        QTextStream out(&file);
#ifdef Q_OS_WIN32
        out << "@echo off" << endl;
#endif
#ifdef Q_OS_LINUX
        out << "#!/bin/bash" << endl;
#endif
        if (taskList[i]->getComparisonMode() == Task::RealNumberMode) {
#ifdef Q_OS_WIN32
            QFile::copy(":/judge/realjudge_win32.exe",
                        Settings::selfTestPath() + taskList[i]->getProblemTile()
                        + QDir::separator() + "realjudge.exe");
            QProcess::execute(QString("attrib -R \"") + Settings::selfTestPath() + taskList[i]->getProblemTile()
                              + QDir::separator() + "realjudge.exe" + "\"");
#endif
#ifdef Q_OS_LINUX
            QFile::copy(":/judge/realjudge_linux",
                        Settings::selfTestPath() + taskList[i]->getProblemTile()
                        + QDir::separator() + "realjudge");
            QProcess::execute(QString("chmod +wx \"") + Settings::selfTestPath() + taskList[i]->getProblemTile()
                              + QDir::separator() + "realjudge" + "\"");
#endif
        }
        if (taskList[i]->getComparisonMode() == Task::SpecialJudgeMode) {
            if (! QFile::copy(Settings::dataPath() + taskList[i]->getSpecialJudge(),
                              Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator()
                              + QFileInfo(taskList[i]->getSpecialJudge()).fileName())) {
                QApplication::restoreOverrideCursor();
                QMessageBox::warning(this, tr("Lemon"),
                                     tr("Cannot copy %1").arg(QFileInfo(taskList[i]->getSpecialJudge()).fileName()),
                                     QMessageBox::Ok);
                return;
            }
        }
        int index = 0;
        for (int j = 0; j < testCaseList.size(); j ++) {
            QStringList inputFiles = testCaseList[j]->getInputFiles();
            QStringList outputFiles = testCaseList[j]->getOutputFiles();
            for (int k = 0; k < inputFiles.size(); k ++) {
                index ++;
                QString inputFile, outputFile;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    inputFile = taskList[i]->getSourceFileName();
                    inputFile += QString("%1.in").arg(index);
                    outputFile = taskList[i]->getSourceFileName();
                    outputFile += QString("%1.out").arg(index);
                } else {
                    inputFile = QFileInfo(inputFiles[k]).fileName();
                    outputFile = QFileInfo(outputFiles[k]).fileName();
                }
                if (! QFile::copy(Settings::dataPath() + inputFiles[k],
                                  Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator()
                                  + inputFile)) {
                    QApplication::restoreOverrideCursor();
                    QMessageBox::warning(this, tr("Lemon"),
                                         tr("Cannot copy %1").arg(QFileInfo(inputFiles[k]).fileName()),
                                         QMessageBox::Ok);
                    return;
                }
                if (! QFile::copy(Settings::dataPath() + outputFiles[k],
                                  Settings::selfTestPath() + taskList[i]->getProblemTile() + QDir::separator()
                                  + outputFile)) {
                    QApplication::restoreOverrideCursor();
                    QMessageBox::warning(this, tr("Lemon"),
                                         tr("Cannot copy %1").arg(QFileInfo(outputFiles[k]).fileName()),
                                         QMessageBox::Ok);
                    return;
                }
#ifdef Q_OS_WIN32
                if (! taskList[i]->getStandardInputCheck() && taskList[i]->getTaskType() == Task::Traditional) {
                    out << QString("copy \"%1\" \"%2\" >nul").arg(inputFile,
                                                                  taskList[i]->getInputFileName()) << endl;
                }
                out << QString("echo Test Case: %1").arg(index) << endl;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    out << "time<enter" << endl;
                    QString cmd = QString("\"") + taskList[i]->getSourceFileName() + ".exe" + "\"";
                    if (taskList[i]->getStandardInputCheck())
                        cmd += QString(" <\"%1\"").arg(inputFile);
                    if (taskList[i]->getStandardOutputCheck())
                        cmd += QString(" >\"%1\"").arg("_tmpout");
                    out << cmd << endl;
                    out << "time<enter" << endl;
                }
                QString outputFileName;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    if (taskList[i]->getStandardOutputCheck())
                        outputFileName = "_tmpout";
                    else
                        outputFileName = taskList[i]->getOutputFileName();
                } else {
                    outputFileName = QFileInfo(inputFiles[k]).completeBaseName() + "."
                                     + taskList[i]->getAnswerFileExtension();
                }
                if (taskList[i]->getComparisonMode() == Task::LineByLineMode) {
                    out << QString("fc \"%1\" \"%2\"")
                           .arg(outputFileName, outputFile) << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::IgnoreSpacesMode) {
                    out << QString("fc \"%1\" \"%2\" /W")
                           .arg(outputFileName, outputFile) << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::ExternalToolMode) {
                    out << QString("fc \"%1\" \"%2\"")
                           .arg(outputFileName, outputFile) << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::RealNumberMode) {
                    out << QString("realjudge.exe \"%1\" \"%2\" \"%3\"")
                           .arg(outputFileName).arg(outputFile).arg(taskList[i]->getRealPrecision()) << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::SpecialJudgeMode) {
                    out << QString("\"%1\" \"%2\" \"%3\" \"%4\" \"%5\" \"%6\" \"%7\"")
                           .arg(QFileInfo(taskList[i]->getSpecialJudge()).fileName(),
                                inputFile, outputFileName, outputFile,
                                QString("%1").arg(testCaseList[j]->getFullScore()),
                                "_score", "_message") << endl;
                    out << "echo Your score:" << endl << "type _score" << endl;
                    out << "if exist _message (" << endl;
                    out << "echo Message:" << endl << "type _message" << endl << ")" << endl;
                }
                out << "pause" << endl;
                if (! taskList[i]->getStandardInputCheck() && taskList[i]->getTaskType() == Task::Traditional)
                    out << QString("del \"%1\"").arg(taskList[i]->getInputFileName()) << endl;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    if (! taskList[i]->getStandardOutputCheck())
                        out << QString("del \"%1\"").arg(taskList[i]->getOutputFileName()) << endl;
                    else
                        out << "del _tmpout" << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::SpecialJudgeMode)
                    out << "del _score" << endl << "del _message" << endl;
                out << "echo." << endl << endl;
#endif
#ifdef Q_OS_LINUX
                if (! taskList[i]->getStandardInputCheck() && taskList[i]->getTaskType() == Task::Traditional)
                    out << QString("cp %1 %2").arg(inputFile,
                                                   taskList[i]->getInputFileName()) << endl;
                out << QString("echo \"Test Case: %1\"").arg(index) << endl;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    QString cmd = QString("\"") + taskList[i]->getSourceFileName() + "\"";
                    if (taskList[i]->getStandardInputCheck())
                        cmd += QString(" <\"%1\"").arg(inputFile);
                    if (taskList[i]->getStandardOutputCheck())
                        cmd += QString(" >\"%1\"").arg("_tmpout");
                    out << QString("time ./") << cmd << endl;
                }
                QString outputFileName;
                if (taskList[i]->getTaskType() == Task::Traditional) {
                    if (taskList[i]->getStandardOutputCheck())
                        outputFileName = "_tmpout";
                    else
                        outputFileName = taskList[i]->getOutputFileName();
                } else {
                    outputFileName = QFileInfo(inputFiles[k]).completeBaseName() + "."
                                     + taskList[i]->getAnswerFileExtension();
                }
                if (taskList[i]->getComparisonMode() == Task::LineByLineMode) {
                    QString arg = QString("\"%1\" \"%2\"").arg(outputFileName, outputFile);
                    out << "if ! diff " << arg << " --strip-trailing-cr -q;then" << endl;
                    out << "diff " << arg << " --strip-trailing-cr -y" << endl;
                    out << QString("echo \"Wrong answer\"") << endl;
                    out << "else" << endl;
                    out << QString("echo \"Correct answer\"") << endl;
                    out << "fi" << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::IgnoreSpacesMode) {
                    QString arg = QString(" \"%1\" \"%2\"").arg(outputFileName, outputFile);
                    out << "if ! diff" << " --strip-trailing-cr -q --ignore-space-change" << arg << ";then" << endl;
                    out << "diff" << " --strip-trailing-cr -y --ignore-space-change" << arg << endl;
                    out << QString("echo \"Wrong answer\"") << endl;
                    out << "else" << endl;
                    out << QString("echo \"Correct answer\"") << endl;
                    out << "fi" << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::ExternalToolMode) {
                    QString arg = QString(" \"%1\" \"%2\"").arg(outputFileName, outputFile);
                    out << "if ! diff " << taskList[i]->getDiffArguments() << arg << ";then" << endl;
                    out << "diff " << taskList[i]->getDiffArguments() << arg << endl;
                    out << QString("echo \"Wrong answer\"") << endl;
                    out << "else" << endl;
                    out << QString("echo \"Correct answer\"") << endl;
                    out << "fi" << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::RealNumberMode) {
                    out << QString("./realjudge \"%1\" \"%2\" \"%3\"")
                           .arg(outputFileName).arg(outputFile).arg(taskList[i]->getRealPrecision()) << endl;
                }
                if (taskList[i]->getComparisonMode() == Task::SpecialJudgeMode) {
                    out << QString("./%1 \"%2\" \"%3\" \"%4\" \"%5\" \"%6\" \"%7\"")
                           .arg(QFileInfo(taskList[i]->getSpecialJudge()).fileName(),
                                inputFile, outputFileName, outputFile,
                                QString("%1").arg(testCaseList[j]->getFullScore()),
                                "_score", "_message") << endl;
                    out << "echo \"Your score:\"" << endl << "cat _score" << endl;
                    out << "if [ -e _message ];then" << endl;
                    out << "echo \"Message:\"" << endl << "cat _message" << endl << "fi" << endl;
                }
                out << "read -n1 -p \"Press enter to continue...\"" << endl;
                if (! taskList[i]->getStandardInputCheck() && taskList[i]->getTaskType() == Task::Traditional)
                    out << QString("rm \"%1\"").arg(taskList[i]->getInputFileName()) << endl;
                if (taskList[i]->getTaskType() == Task::Traditional)
                    if (! taskList[i]->getStandardOutputCheck())
                        out << QString("rm \"%1\"").arg(taskList[i]->getOutputFileName()) << endl;
                    else
                        out << "rm _tmpout" << endl;
                if (taskList[i]->getComparisonMode() == Task::SpecialJudgeMode)
                    out << "rm _score" << endl << "rm _message" << endl;
                out << "echo" << endl << endl;
#endif
            }
        }
        file.close();
#ifdef Q_OS_LINUX
        QProcess::execute(QString("chmod +x \"") + Settings::selfTestPath() + taskList[i]->getProblemTile()
                          + QDir::separator() + "check.sh" + "\"");
#endif
    }
    
    QApplication::restoreOverrideCursor();
    QMessageBox::information(this, tr("Lemon"), tr("Self-test folder has been made"), QMessageBox::Ok);
}

void Lemon::exportHtml(const QString &fileName)
{
    QFile file(fileName);
    if (! file.open(QFile::WriteOnly)) {
        QMessageBox::warning(this, tr("Lemon"), tr("Cannot open file %1").arg(QFileInfo(file).fileName()),
                             QMessageBox::Ok);
        return;
    }
    
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QTextStream out(&file);
    
    QList<Contestant*> contestantList = curContest->getContestantList();
    QList<Task*> taskList = curContest->getTaskList();
    
    out.setCodec("UTF-8");
    out << "<html><head>";
    out << "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />";
    out << "<style type=\"text/css\">th, td {padding-left: 1em; padding-right: 1em;}</style>";
    out << "<title>" << tr("Contest Result") << "</title>";
    out << "</head><body>";
    
    QList< QPair<int, QString> > sortList;
    for (int i = 0; i < contestantList.size(); i ++) {
        int totalScore = contestantList[i]->getTotalScore();
        if (totalScore != -1)
            sortList.append(qMakePair(-totalScore, contestantList[i]->getContestantName()));
        else
            sortList.append(qMakePair(1, contestantList[i]->getContestantName()));
    }
    qSort(sortList);
    QMap<QString, int> rankList;
    for (int i = 0; i < sortList.size(); i ++)
        if (i > 0 && sortList[i].first == sortList[i-1].first)
            rankList.insert(sortList[i].second, rankList[sortList[i-1].second]);
        else
            rankList.insert(sortList[i].second, i);
    
    QMap<Contestant*, int> loc;
    for (int i = 0; i < contestantList.size(); i ++)
        loc.insert(contestantList[i], i);
    
    out << "<p><span style=\"font-size:x-large; font-weight:bold;\">";
    out << "<a name=\"top\"></a>" << tr("Rank List") << "</span></p>";
    out << "<p><table border=\"1\" cellpadding=\"1\"><tr>";
    out << QString("<th scope=\"col\" nowrap=\"nowrap\">%1</th>").arg(tr("Rank"));
    out << QString("<th scope=\"col\" nowrap=\"nowrap\">%1</th>").arg(tr("Name"));
    for (int i = 0; i < taskList.size(); i ++)
        out << QString("<th scope=\"col\" nowrap=\"nowrap\">%1</th>").arg(taskList[i]->getProblemTile());
    out << QString("<th scope=\"col\" nowrap=\"nowrap\">%1</th></tr>").arg(tr("Total Score"));
    
    for (int i = 0; i < sortList.size(); i ++) {
        Contestant *contestant = curContest->getContestant(sortList[i].second);
        out << QString("<tr><td nowrap=\"nowrap\" align=\"center\">%1</td>")
               .arg(rankList[contestant->getContestantName()] + 1);
        out << QString("<td nowrap=\"nowrap\" align=\"center\"><a href=\"#c%1\">%2</a></td>")
               .arg(loc[contestant]).arg(sortList[i].second);
        for (int j = 0; j < taskList.size(); j ++) {
            int score = contestant->getTaskScore(j);
            if (score != -1)
                out << QString("<td nowrap=\"nowrap\" align=\"center\">%1</td>").arg(score);
            else
                out << QString("<td nowrap=\"nowrap\" align=\"center\">%1</td>").arg(tr("Invalid"));
        }
        int score = contestant->getTotalScore();
        if (score != -1)
            out << QString("<td nowrap=\"nowrap\" align=\"center\">%1</td>").arg(score);
        else
            out << QString("<td nowrap=\"nowrap\" align=\"center\">%1</td>").arg(tr("Invalid"));
    }
    out << "</table></p>";
    
    for (int i = 0; i < contestantList.size(); i ++) {
        out << QString("<a name=\"c%1\"><hr><a>").arg(i) << "<span style=\"font-size:x-large; font-weight:bold;\">";
        out << tr("Contestant: %1").arg(contestantList[i]->getContestantName()) << "</span>";
        out << DetailDialog::getCode(curContest, contestantList[i]);
    }
    out << "</body></html>";
    
    QApplication::restoreOverrideCursor();
    QMessageBox::information(this, tr("Lemon"), tr("Export is done"), QMessageBox::Ok);
}

void Lemon::exportCsv(const QString &fileName)
{
    QFile file(fileName);
    if (! file.open(QFile::WriteOnly)) {
        QMessageBox::warning(this, tr("Lemon"), tr("Cannot open file %1").arg(QFileInfo(file).fileName()),
                             QMessageBox::Ok);
        return;
    }
    
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QTextStream out(&file);
    
    QList<Contestant*> contestantList = curContest->getContestantList();
    QList<Task*> taskList = curContest->getTaskList();
    QList< QPair<int, QString> > sortList;
    for (int i = 0; i < contestantList.size(); i ++) {
        int totalScore = contestantList[i]->getTotalScore();
        if (totalScore != -1)
            sortList.append(qMakePair(-totalScore, contestantList[i]->getContestantName()));
        else
            sortList.append(qMakePair(1, contestantList[i]->getContestantName()));
    }
    qSort(sortList);
    QMap<QString, int> rankList;
    for (int i = 0; i < sortList.size(); i ++)
        if (i > 0 && sortList[i].first == sortList[i-1].first)
            rankList.insert(sortList[i].second, rankList[sortList[i-1].second]);
        else
            rankList.insert(sortList[i].second, i);
    
    QMap<Contestant*, int> loc;
    for (int i = 0; i < contestantList.size(); i ++)
        loc.insert(contestantList[i], i);
    
    out << "\"" << tr("Rank") << "\"" << "," << "\"" << tr("Name") << "\"" << ",";
    for (int i = 0; i < taskList.size(); i ++)
        out << "\"" << taskList[i]->getProblemTile() << "\"" << ",";
    out << "\"" << tr("Total Score") << "\"" << endl;
    
    for (int i = 0; i < sortList.size(); i ++) {
        Contestant *contestant = curContest->getContestant(sortList[i].second);
        out << "\"" << rankList[contestant->getContestantName()] + 1 << "\"" << ",";
        out << "\"" << sortList[i].second << "\"" << ",";
        for (int j = 0; j < taskList.size(); j ++) {
            int score = contestant->getTaskScore(j);
            if (score != -1)
                out << "\"" << score << "\"" << ",";
            else
                out << "\"" << tr("Invalid") << "\"" << ",";
        }
        int score = contestant->getTotalScore();
        if (score != -1)
            out << "\"" << score << "\"" << endl;
        else
            out << "\"" << tr("Invalid") << "\"" << endl;
    }
    
    QApplication::restoreOverrideCursor();
    QMessageBox::information(this, tr("Lemon"), tr("Export is done"), QMessageBox::Ok);
}

void Lemon::exportXls(const QString &fileName)
{
#ifdef Q_OS_WIN32
    if (QFile(fileName).exists())
        if (! QFile(fileName).remove()) {
            QMessageBox::warning(this, tr("Lemon"), tr("Cannot open file %1").arg(QFileInfo(fileName).fileName()),
                                 QMessageBox::Ok);
            return;
        }
    
    QApplication::setOverrideCursor(Qt::WaitCursor);
    
    QList<Contestant*> contestantList = curContest->getContestantList();
    QList<Task*> taskList = curContest->getTaskList();
    QList< QPair<int, QString> > sortList;
    for (int i = 0; i < contestantList.size(); i ++) {
        int totalScore = contestantList[i]->getTotalScore();
        if (totalScore != -1)
            sortList.append(qMakePair(-totalScore, contestantList[i]->getContestantName()));
        else
            sortList.append(qMakePair(1, contestantList[i]->getContestantName()));
    }
    qSort(sortList);
    QMap<QString, int> rankList;
    for (int i = 0; i < sortList.size(); i ++)
        if (i > 0 && sortList[i].first == sortList[i-1].first)
            rankList.insert(sortList[i].second, rankList[sortList[i-1].second]);
        else
            rankList.insert(sortList[i].second, i);
    
    QMap<Contestant*, int> loc;
    for (int i = 0; i < contestantList.size(); i ++)
        loc.insert(contestantList[i], i);    
    
    QAxObject *excel = new QAxObject("Excel.Application", this);
    QAxObject *workbook = excel->querySubObject("Workbooks")->querySubObject("Add");
    QAxObject *sheet = workbook->querySubObject("ActiveSheet");
    sheet->setProperty("Name", QDate::currentDate().toString("yyyy-MM-dd"));
    
    sheet->querySubObject("Cells(int, int)", 1, 1)->setProperty("Value", tr("Rank"));
    sheet->querySubObject("Cells(int, int)", 1, 2)->setProperty("Value", tr("Name"));
    for (int i = 0; i < taskList.size(); i ++)
        sheet->querySubObject("Cells(int, int)", 1, 3 + i)->setProperty("Value", taskList[i]->getProblemTile());
    sheet->querySubObject("Cells(int, int)", 1, 3 + taskList.size())->setProperty("Value", tr("Total Score"));
    for (int i = 0; i < taskList.size() + 3; i ++)
        sheet->querySubObject("Cells(int, int)", 1, i + 1)->querySubObject("Font")->setProperty("Bold", true);
    
    for (int i = 0; i < sortList.size(); i ++) {
        Contestant *contestant = curContest->getContestant(sortList[i].second);
        sheet->querySubObject("Cells(int, int)", 2 + i, 1)->setProperty("Value",
                                                                        rankList[contestant->getContestantName()] + 1);
        sheet->querySubObject("Cells(int, int)", 2 + i, 2)->setProperty("Value", sortList[i].second);
        for (int j = 0; j < taskList.size(); j ++) {
            int score = contestant->getTaskScore(j);
            if (score != -1)
                sheet->querySubObject("Cells(int, int)", 2 + i, 3 + j)->setProperty("Value", score);
            else
                sheet->querySubObject("Cells(int, int)", 2 + i, 3 + j)->setProperty("Value", tr("Invalid"));
        }
        int score = contestant->getTotalScore();
        if (score != -1)
            sheet->querySubObject("Cells(int, int)", 2 + i, 3 + taskList.size())->setProperty("Value", score);
        else
            sheet->querySubObject("Cells(int, int)", 2 + i, 3 + taskList.size())->setProperty("Value", tr("Invalid"));
    }
    
    workbook->dynamicCall("SaveAs(const QString&, int)", QDir::toNativeSeparators(fileName), -4143);
    excel->dynamicCall("Quit()");
    delete excel;
    
    QApplication::restoreOverrideCursor();
    QMessageBox::information(this, tr("Lemon"), tr("Export is done"), QMessageBox::Ok);
#endif
}

void Lemon::exportResult()
{
    QList<Contestant*> contestantList = curContest->getContestantList();
    QList<Task*> taskList = curContest->getTaskList();
    if (contestantList.isEmpty()) {
        QMessageBox::warning(this, tr("Lemon"), tr("No contestant in current contest"), QMessageBox::Ok);
        return;
    }
    if (taskList.isEmpty()) {
        QMessageBox::warning(this, tr("Lemon"), tr("No task in current contest"), QMessageBox::Ok);
        return;
    }
    
    QString filter = tr("HTML Document (*.html);;CSV (*.csv)");
    
#ifdef Q_OS_WIN32
    QAxObject *excel = new QAxObject("Excel.Application", this);
    if (! excel->isNull())
        filter = filter + tr(";;Excel Workbook (*.xls)");
    delete excel;
#endif
    
    QString fileName = QFileDialog::getSaveFileName(this, tr("Export Result"),
                                                    QDir::currentPath() + QDir::separator() + "result", filter);
    if (fileName.isEmpty()) return;
    
    if (QFileInfo(fileName).suffix() == "html") exportHtml(fileName);
    if (QFileInfo(fileName).suffix() == "csv") exportCsv(fileName);
    if (QFileInfo(fileName).suffix() == "xls") exportXls(fileName);
}

void Lemon::aboutLemon()
{
    QString text;
    text += "<h2>Project Lemon</h2>";
    text += tr("A tiny judging environment for OI contest") + "<br>";
    text += tr("Version 1.1 Beta") + "<br>";
    text += tr("Build Date: %1").arg(__DATE__) + "<br>";
    text += tr("Copyright (c) 2011 Zhipeng Jia") + "<br>";
    text += tr("This program is under the <a href=\"http://www.gnu.org/licenses/gpl-3.0.html\">GPLv3</a> license")
            + "<br>";
    text += QString("<a href=\"http://hi.baidu.com/oimaster\">") + tr("Author\'s blog") + "</a><br>";
    text += QString("<a href=\"http://code.google.com/p/project-lemon\">") + tr("Google Code Page") + "</a>";
    QMessageBox::about(this, tr("About Lemon"), text);
}

void Lemon::setUiLanguage()
{
    QAction *language = dynamic_cast<QAction*>(sender());
    settings->setUiLanguage(language->data().toString());
    loadUiLanguage();
}
