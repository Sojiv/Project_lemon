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

#include "judgingdialog.h"
#include "ui_judgingdialog.h"
#include "contest.h"
#include "task.h"

JudgingDialog::JudgingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JudgingDialog)
{
    ui->setupUi(this);
    cursor = new QTextCursor(ui->logViewer->document());
    connect(ui->cancelButton, SIGNAL(clicked()),
            this, SLOT(stopJudgingSlot()));
}

JudgingDialog::~JudgingDialog()
{
    delete ui;
    delete cursor;
}

void JudgingDialog::setContest(Contest *contest)
{
    curContest = contest;
    connect(curContest, SIGNAL(singleCaseFinished(int, int, int, int)),
            this, SLOT(singleCaseFinished(int, int, int, int)));
    connect(curContest, SIGNAL(taskJudgingStarted(QString)),
            this, SLOT(taskJudgingStarted(QString)));
    connect(curContest, SIGNAL(contestantJudgingStart(QString)),
            this, SLOT(contestantJudgingStart(QString)));
    connect(curContest, SIGNAL(contestantJudgingFinished()),
            this, SLOT(contestantJudgingFinished()));
    connect(curContest, SIGNAL(compileError(int, int)),
            this, SLOT(compileError(int, int)));
    connect(this, SIGNAL(stopJudgingSignal()),
            curContest, SLOT(stopJudgingSlot()));
}

void JudgingDialog::judge(const QStringList &nameList)
{
    stopJudging = false;
    ui->progressBar->setMaximum(curContest->getTotalTimeLimit() * nameList.size());
    for (int i = 0; i < nameList.size(); i ++) {
        curContest->judge(nameList[i]);
        if (stopJudging) break;
    }
    accept();
}

void JudgingDialog::judge(const QString &name, int index)
{
    stopJudging = false;
    ui->progressBar->setMaximum(curContest->getTask(index)->getTotalTimeLimit());
    curContest->judge(name, index);
    accept();
}

void JudgingDialog::judgeAll()
{
    stopJudging = false;
    ui->progressBar->setMaximum(curContest->getTotalTimeLimit() * curContest->getContestantList().size());
    curContest->judgeAll();
    accept();
}

void JudgingDialog::singleCaseFinished(int progress, int x, int y, int result)
{
    QTextBlockFormat blockFormat;
    blockFormat.setLeftMargin(30);
    cursor->insertBlock(blockFormat);
    QTextCharFormat charFormat;
    charFormat.setFontPointSize(9);
    cursor->insertText(tr("Test case %1.%2: ").arg(x + 1).arg(y + 1), charFormat);
    
    QString text;
    switch (ResultState(result)) {
        case CorrectAnswer:
            text = tr("Correct answer");
            charFormat.setForeground(QBrush(Qt::darkGreen));
            break;
        case WrongAnswer:
            text = tr("Wrong answer");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case PartlyCorrect:
            text = tr("Partly correct");
            charFormat.setForeground(QBrush(Qt::darkYellow));
            break;
        case TimeLimitExceeded:
            text = tr("Time limit exceeded");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case MemoryLimitExceeded:
            text = tr("Memory limit exceeded");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case CannotStartProgram:
            text = tr("Cannot start program");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case FileError:
            text = tr("File error");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case RunTimeError:
            text = tr("Run time error");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case InvalidSpecialJudge:
            text = tr("Invalid special judge");
            charFormat.setForeground(QBrush(Qt::darkBlue));
            break;
        case SpecialJudgeTimeLimitExceeded:
            text = tr("Special judge time limit exceeded");
            charFormat.setForeground(QBrush(Qt::darkBlue));
            break;
        case SpecialJudgeRunTimeError:
            text = tr("Special judge run time error");
            charFormat.setForeground(QBrush(Qt::darkBlue));
            break;
    }
    
    cursor->insertText(text, charFormat);
    ui->progressBar->setValue(ui->progressBar->value() + progress);
    
    QScrollBar *bar = ui->logViewer->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void JudgingDialog::taskJudgingStarted(const QString &taskName)
{
    QTextBlockFormat blockFormat;
    blockFormat.setLeftMargin(15);
    cursor->insertBlock(blockFormat);
    QTextCharFormat charFormat;
    charFormat.setFontPointSize(9);
    cursor->insertText(tr("Start judging task %1").arg(taskName), charFormat);
    QScrollBar *bar = ui->logViewer->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void JudgingDialog::contestantJudgingStart(const QString &contestantName)
{
    QTextCharFormat charFormat;
    charFormat.setFontPointSize(10);
    charFormat.setFontWeight(QFont::Bold);
    cursor->insertText(tr("Start judging contestant %1").arg(contestantName), charFormat);
    QScrollBar *bar = ui->logViewer->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void JudgingDialog::contestantJudgingFinished()
{
    QTextBlockFormat blockFormat;
    cursor->insertBlock(blockFormat);
    cursor->insertBlock(blockFormat);
    QScrollBar *bar = ui->logViewer->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void JudgingDialog::compileError(int progress, int compileState)
{
    QTextBlockFormat blockFormat;
    blockFormat.setLeftMargin(30);
    cursor->insertBlock(blockFormat);
    QTextCharFormat charFormat;
    charFormat.setFontPointSize(9);
    
    QString text;
    switch (CompileState(compileState)) {
        case NoValidSourceFile:
            text = tr("Cannot find valid source file");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case CompileError:
            text = tr("Compile error");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case CompileTimeLimitExceeded:
            text = tr("Compile time limit exceeded");
            charFormat.setForeground(QBrush(Qt::red));
            break;
        case InvalidCompiler:
            text = tr("Invalid compiler");
            charFormat.setForeground(QBrush(Qt::blue));
            break;
    }
    
    cursor->insertText(text, charFormat);
    ui->progressBar->setValue(ui->progressBar->value() + progress);
    
    QScrollBar *bar = ui->logViewer->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void JudgingDialog::stopJudgingSlot()
{
    stopJudging = true;
    emit stopJudgingSignal();
}

void JudgingDialog::reject()
{
    stopJudgingSlot();
}
