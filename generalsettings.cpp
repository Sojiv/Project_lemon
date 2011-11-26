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

#include "generalsettings.h"
#include "ui_generalsettings.h"
#include "settings.h"

GeneralSettings::GeneralSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeneralSettings)
{
    ui->setupUi(this);
    
    ui->defaultFullScore->setValidator(new QIntValidator(1, Settings::upperBoundForFullScore(), this));
    ui->defaultTimeLimit->setValidator(new QIntValidator(1, Settings::upperBoundForTimeLimit(), this));
    ui->defaultMemoryLimit->setValidator(new QIntValidator(1, Settings::upperBoundForMemoryLimit(), this));
    ui->compileTimeLimit->setValidator(new QIntValidator(1, Settings::upperBoundForTimeLimit(), this));
    ui->specialJudgeTimeLimit->setValidator(new QIntValidator(1, Settings::upperBoundForTimeLimit(), this));
    ui->fileSizeLimit->setValidator(new QIntValidator(1, Settings::upperBoundForFileSizeLimit(), this));
    ui->numberOfThreads->setValidator(new QIntValidator(1, Settings::upperBoundForNumberOfThreads(), this));
    ui->inputFileExtensions->setValidator(new QRegExpValidator(QRegExp("(\\w+;)*\\w+"), this));
    ui->outputFileExtensions->setValidator(new QRegExpValidator(QRegExp("(\\w+;)*\\w+"), this));
    
    connect(ui->defaultFullScore, SIGNAL(textChanged(QString)),
            this, SLOT(defaultFullScoreChanged(QString)));
    connect(ui->defaultTimeLimit, SIGNAL(textChanged(QString)),
            this, SLOT(defaultTimeLimitChanged(QString)));
    connect(ui->defaultMemoryLimit, SIGNAL(textChanged(QString)),
            this, SLOT(defaultMemoryLimitChanged(QString)));
    connect(ui->compileTimeLimit, SIGNAL(textChanged(QString)),
            this, SLOT(compileTimeLimitChanged(QString)));
    connect(ui->specialJudgeTimeLimit, SIGNAL(textChanged(QString)),
            this, SLOT(specialJudgeTimeLimitChanged(QString)));
    connect(ui->fileSizeLimit, SIGNAL(textChanged(QString)),
            this, SLOT(fileSizeLimitChanged(QString)));
    connect(ui->numberOfThreads, SIGNAL(textChanged(QString)),
            this, SLOT(numberOfThreadsChanged(QString)));
    connect(ui->inputFileExtensions, SIGNAL(textChanged(QString)),
            this, SLOT(inputFileExtensionsChanged(QString)));
    connect(ui->outputFileExtensions, SIGNAL(textChanged(QString)),
            this, SLOT(outputFileExtensionsChanged(QString)));
}

GeneralSettings::~GeneralSettings()
{
    delete ui;
}

void GeneralSettings::resetEditSettings(Settings *settings)
{
    editSettings = settings;
    
    ui->defaultFullScore->setText(QString("%1").arg(editSettings->getDefaultFullScore()));
    ui->defaultTimeLimit->setText(QString("%1").arg(editSettings->getDefaultTimeLimit()));
    ui->defaultMemoryLimit->setText(QString("%1").arg(editSettings->getDefaultMemoryLimit()));
    ui->compileTimeLimit->setText(QString("%1").arg(editSettings->getCompileTimeLimit()));
    ui->specialJudgeTimeLimit->setText(QString("%1").arg(editSettings->getSpecialJudgeTimeLimit()));
    ui->fileSizeLimit->setText(QString("%1").arg(editSettings->getFileSizeLimit()));
    ui->numberOfThreads->setText(QString("%1").arg(editSettings->getNumberOfThreads()));
    ui->inputFileExtensions->setText(editSettings->getInputFileExtensions().join(";"));
    ui->outputFileExtensions->setText(editSettings->getOutputFileExtensions().join(";"));
}

bool GeneralSettings::checkValid()
{
    if (ui->defaultFullScore->text().isEmpty()) {
        ui->defaultFullScore->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty default full score!"), QMessageBox::Close);
        return false;
    }
    if (ui->defaultTimeLimit->text().isEmpty()) {
        ui->defaultTimeLimit->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty default time limit!"), QMessageBox::Close);
        return false;
    }
    if (ui->defaultMemoryLimit->text().isEmpty()) {
        ui->defaultMemoryLimit->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty default memory limit!"), QMessageBox::Close);
        return false;
    }
    if (ui->compileTimeLimit->text().isEmpty()) {
        ui->compileTimeLimit->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty compile time limit!"), QMessageBox::Close);
        return false;
    }
    if (ui->specialJudgeTimeLimit->text().isEmpty()) {
        ui->specialJudgeTimeLimit->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty special judge time limit!"), QMessageBox::Close);
        return false;
    }
    if (ui->fileSizeLimit->text().isEmpty()) {
        ui->fileSizeLimit->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty source file size limit!"), QMessageBox::Close);
        return false;
    }
    if (ui->numberOfThreads->text().isEmpty()) {
        ui->numberOfThreads->setFocus();
        QMessageBox::warning(this, tr("Error"), tr("Empty number of threads!"), QMessageBox::Close);
        return false;
    }
    return true;
}

void GeneralSettings::defaultFullScoreChanged(const QString &text)
{
    editSettings->setDefaultFullScore(text.toInt());
}

void GeneralSettings::defaultTimeLimitChanged(const QString &text)
{
    editSettings->setDefaultTimeLimit(text.toInt());
}

void GeneralSettings::defaultMemoryLimitChanged(const QString &text)
{
    editSettings->setDefaultMemoryLimit(text.toInt());
}

void GeneralSettings::compileTimeLimitChanged(const QString &text)
{
    editSettings->setCompileTimeLimit(text.toInt());
}

void GeneralSettings::specialJudgeTimeLimitChanged(const QString &text)
{
    editSettings->setSpecialJudgeTimeLimit(text.toInt());
}

void GeneralSettings::fileSizeLimitChanged(const QString &text)
{
    editSettings->setFileSizeLimit(text.toInt());
}

void GeneralSettings::numberOfThreadsChanged(const QString &text)
{
    editSettings->setNumberOfThreads(text.toInt());
}

void GeneralSettings::inputFileExtensionsChanged(const QString &text)
{
    editSettings->setInputFileExtensions(text);
}

void GeneralSettings::outputFileExtensionsChanged(const QString &text)
{
    editSettings->setOutputFileExtensions(text);
}
