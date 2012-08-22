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

#include "taskeditwidget.h"
#include "ui_taskeditwidget.h"
#include "settings.h"
#include "compiler.h"
#include "task.h"

TaskEditWidget::TaskEditWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskEditWidget)
{
    ui->setupUi(this);
    
    editTask = 0;
    
    ui->specialJudge->setFilters(QDir::Files | QDir::Executable);
    connect(this, SIGNAL(dataPathChanged()),
            ui->specialJudge, SLOT(refreshFileList()));
    
    ui->sourceFileName->setValidator(new QRegExpValidator(QRegExp("\\w+"), this));
    ui->inputFileName->setValidator(new QRegExpValidator(QRegExp("(\\w+)(\\.\\w+)?"), this));
    ui->outputFileName->setValidator(new QRegExpValidator(QRegExp("(\\w+)(\\.\\w+)?"), this));
    ui->answerFileExtension->setValidator(new QRegExpValidator(QRegExp("\\w+"), this));
    
    connect(ui->problemTitle, SIGNAL(textChanged(QString)),
            this, SLOT(problemTitleChanged(QString)));
    connect(ui->traditionalButton, SIGNAL(toggled(bool)),
            this, SLOT(setToTraditional(bool)));
    connect(ui->answersOnlyButton, SIGNAL(toggled(bool)),
            this, SLOT(setToAnswersOnly(bool)));
    connect(ui->sourceFileName, SIGNAL(textChanged(QString)),
            this, SLOT(sourceFileNameChanged(QString)));
    connect(ui->inputFileName, SIGNAL(textChanged(QString)),
            this, SLOT(inputFileNameChanged(QString)));
    connect(ui->outputFileName, SIGNAL(textChanged(QString)),
            this, SLOT(outputFileNameChanged(QString)));
    connect(ui->standardInputCheck, SIGNAL(stateChanged(int)),
            this, SLOT(standardInputCheckChanged()));
    connect(ui->standardOutputCheck, SIGNAL(stateChanged(int)),
            this, SLOT(standardOutputCheckChanged()));
    connect(ui->comparisonMode, SIGNAL(currentIndexChanged(int)),
            this, SLOT(comparisonModeChanged()));
    connect(ui->diffArguments, SIGNAL(textChanged(QString)),
            this, SLOT(diffArgumentsChanged(QString)));
    connect(ui->realPrecision, SIGNAL(valueChanged(int)),
            this, SLOT(realPrecisionChanged(int)));
    connect(ui->specialJudge, SIGNAL(textChanged(QString)),
            this, SLOT(specialJudgeChanged(QString)));
    connect(ui->compilersList, SIGNAL(currentRowChanged(int)),
            this, SLOT(compilerSelectionChanged()));
    connect(ui->configurationSelect, SIGNAL(currentIndexChanged(int)),
            this, SLOT(configurationSelectionChanged()));
    connect(ui->answerFileExtension, SIGNAL(textChanged(QString)),
            this, SLOT(answerFileExtensionChanged(QString)));
}

TaskEditWidget::~TaskEditWidget()
{
    delete ui;
}

void TaskEditWidget::changeEvent(QEvent *event)
{
    if (event->type() == QEvent::LanguageChange) {
        Task *bak = editTask;
        setEditTask(0);
        ui->retranslateUi(this);
        setEditTask(bak);
    }
}

void TaskEditWidget::setEditTask(Task *task)
{
    if (editTask) {
        disconnect(editTask, SIGNAL(problemTitleChanged(QString)),
                   this, SLOT(refreshProblemTitle(QString)));
        disconnect(editTask, SIGNAL(compilerConfigurationRefreshed()),
                   this, SLOT(refreshCompilerConfiguration()));
    }
    editTask = task;
    if (! task) return;
    connect(editTask, SIGNAL(problemTitleChanged(QString)),
            this, SLOT(refreshProblemTitle(QString)));
    connect(editTask, SIGNAL(compilerConfigurationRefreshed()),
            this, SLOT(refreshCompilerConfiguration()));
    ui->problemTitle->setText(editTask->getProblemTile());
    ui->sourceFileName->setEnabled(false);
    ui->sourceFileName->setText(editTask->getSourceFileName());
    ui->sourceFileName->setEnabled(true);
    ui->inputFileName->setText(editTask->getInputFileName());
    ui->outputFileName->setText(editTask->getOutputFileName());
    ui->comparisonMode->setCurrentIndex(int(editTask->getComparisonMode()));
    ui->diffArguments->setText(editTask->getDiffArguments());
    ui->realPrecision->setValue(editTask->getRealPrecision());
    ui->specialJudge->setText(editTask->getSpecialJudge());
    ui->standardInputCheck->setChecked(editTask->getStandardInputCheck());
    ui->standardOutputCheck->setChecked(editTask->getStandardOutputCheck());
    ui->answerFileExtension->setText(editTask->getAnswerFileExtension());
    refreshCompilerConfiguration();
    if (editTask->getTaskType() == Task::Traditional) {
        ui->traditionalButton->setChecked(true);
    }
    if (editTask->getTaskType() == Task::AnswersOnly) {
        ui->answersOnlyButton->setChecked(true);
    }
    refreshWidgetState();
}

void TaskEditWidget::setSettings(Settings *_settings)
{
    settings = _settings;
}

void TaskEditWidget::refreshWidgetState()
{
    if (! editTask) return;
    bool check = editTask->getTaskType() == Task::Traditional;
    ui->sourceFileName->setEnabled(check);
    ui->sourceFileNameLabel->setEnabled(check);
    ui->inputFileName->setEnabled(check && ! editTask->getStandardInputCheck());
    ui->inputFileNameLabel->setEnabled(check);
    ui->standardInputCheck->setEnabled(check);
    ui->outputFileName->setEnabled(check && ! editTask->getStandardOutputCheck());
    ui->outputFileNameLabel->setEnabled(check);
    ui->standardOutputCheck->setEnabled(check);
    ui->compilerSettingsLabel->setEnabled(check);
    ui->compilersList->setEnabled(check);
    ui->configurationLabel->setEnabled(check);
    ui->configurationSelect->setEditable(check);
    ui->answerFileExtension->setEnabled(! check);
    ui->answerFileExtensionLabel->setEnabled(! check);
}

void TaskEditWidget::problemTitleChanged(const QString &text)
{
    if (! editTask) return;
    editTask->setProblemTitle(text);
}

void TaskEditWidget::setToTraditional(bool check)
{
    if (! check || ! editTask) return;
    editTask->setTaskType(Task::Traditional);
    refreshWidgetState();
}

void TaskEditWidget::setToAnswersOnly(bool check)
{
    if (! check || ! editTask) return;
    editTask->setTaskType(Task::AnswersOnly);
    refreshWidgetState();
}

void TaskEditWidget::sourceFileNameChanged(const QString &text)
{
    if (! editTask) return;
    if (! ui->sourceFileName->isEnabled()) return;
    editTask->setSourceFileName(text);
    if (ui->inputFileName->isEnabled()) {
        ui->inputFileName->setText(text + "." + settings->getDefaultInputFileExtension());
    }
    if (ui->outputFileName->isEnabled()) {
        ui->outputFileName->setText(text + "." + settings->getDefaultOutputFileExtension());
    }
}

void TaskEditWidget::inputFileNameChanged(const QString &text)
{
    if (! editTask) return;
    editTask->setInputFileName(text);
}

void TaskEditWidget::outputFileNameChanged(const QString &text)
{
    if (! editTask) return;
    editTask->setOutputFileName(text);
}

void TaskEditWidget::standardInputCheckChanged()
{
    if (! editTask) return;
    bool check = ui->standardInputCheck->isChecked();
    editTask->setStandardInputCheck(check);
    ui->inputFileName->setEnabled(! check);
}

void TaskEditWidget::standardOutputCheckChanged()
{
    if (! editTask) return;
    bool check = ui->standardOutputCheck->isChecked();
    editTask->setStandardOutputCheck(check);
    ui->outputFileName->setEnabled(! check);
}

void TaskEditWidget::comparisonModeChanged()
{
    if (! editTask) return;
    editTask->setComparisonMode(Task::ComparisonMode(ui->comparisonMode->currentIndex()));
}

void TaskEditWidget::diffArgumentsChanged(const QString &argumentsList)
{
    if (! editTask) return;
    editTask->setDiffArguments(argumentsList);
}

void TaskEditWidget::realPrecisionChanged(int precision)
{
    if (! editTask) return;
    editTask->setRealPrecision(precision);
}

void TaskEditWidget::specialJudgeChanged(const QString &text)
{
    if (! editTask) return;
    editTask->setSpecialJudge(text);
}

void TaskEditWidget::refreshProblemTitle(const QString &title)
{
    if (! editTask) return;
    ui->problemTitle->setText(title);
}

void TaskEditWidget::refreshCompilerConfiguration()
{
    if (! editTask) return;
    ui->compilersList->setEnabled(false);
    ui->configurationSelect->setEnabled(false);
    ui->configurationLabel->setEnabled(false);
    ui->compilersList->clear();
    ui->configurationSelect->clear();
    const QList<Compiler*> &compilerList = settings->getCompilerList();
    if (compilerList.isEmpty()) return;
    for (int i = 0; i < compilerList.size(); i ++) {
        ui->compilersList->addItem(compilerList[i]->getCompilerName());
    }
    ui->compilersList->setEnabled(true);
    ui->configurationSelect->setEnabled(true);
    ui->configurationLabel->setEnabled(true);
    ui->compilersList->setCurrentRow(0);
    compilerSelectionChanged();
}

void TaskEditWidget::compilerSelectionChanged()
{
    if (! editTask) return;
    if (! ui->compilersList->isEnabled()) return;
    ui->configurationSelect->setEnabled(false);
    ui->configurationSelect->clear();
    ui->configurationSelect->addItem("disable");
    const QList<Compiler*> &compilerList = settings->getCompilerList();
    for (int i = 0; i < compilerList.size(); i ++) {
        if (compilerList[i]->getCompilerName() == ui->compilersList->currentItem()->text()) {
            ui->configurationSelect->addItems(compilerList[i]->getConfigurationNames());
        }
    }
    QString config = editTask->getCompilerConfiguration(ui->compilersList->currentItem()->text());
    ui->configurationSelect->setCurrentIndex(ui->configurationSelect->findText(config));
    ui->configurationSelect->setEnabled(true);
}

void TaskEditWidget::configurationSelectionChanged()
{
    if (! editTask) return;
    if (! ui->configurationSelect->isEnabled()) return;
    editTask->setCompilerConfiguration(ui->compilersList->currentItem()->text(),
                                       ui->configurationSelect->currentText());
}

void TaskEditWidget::answerFileExtensionChanged(const QString &extension)
{
    if (! editTask) return;
    editTask->setAnswerFileExtension(extension);
}
