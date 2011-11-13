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

#include "compilerselectingdialog.h"
#include "ui_compilerselectingdialog.h"

CompilerSelectingDialog::CompilerSelectingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompilerSelectingDialog)
{
    ui->setupUi(this);
    connect(ui->gccSelectButton, SIGNAL(clicked()),
            this, SLOT(gccSelectButtonClicked()));
    connect(ui->gppSelectButton, SIGNAL(clicked()),
            this, SLOT(gppSelectButtonClicked()));
    connect(ui->fpcSelectButton, SIGNAL(clicked()),
            this, SLOT(fpcSelectButtonClicked()));
}

CompilerSelectingDialog::~CompilerSelectingDialog()
{
    delete ui;
}

void CompilerSelectingDialog::setGccPath(const QString &path)
{
    ui->gccPath->setText(path);
}

void CompilerSelectingDialog::setGppPath(const QString &path)
{
    ui->gppPath->setText(path);
}

void CompilerSelectingDialog::setFpcPath(const QString &path)
{
    ui->fpcPath->setText(path);
}

QString CompilerSelectingDialog::getGccPath() const
{
    return ui->gccPath->text();
}

QString CompilerSelectingDialog::getGppPath() const
{
    return ui->gppPath->text();
}

QString CompilerSelectingDialog::getFpcPath() const
{
    return ui->fpcPath->text();
}

void CompilerSelectingDialog::gccSelectButtonClicked()
{
    QString location = QFileDialog::getOpenFileName(this, tr("Select Compiler\'s Location"),
                                                    QDir::rootPath(), "gcc (gcc.exe)");
    if (! location.isEmpty()) {
        location.replace('/', QDir::separator());
        ui->gccPath->setText(location);
    }
}

void CompilerSelectingDialog::gppSelectButtonClicked()
{
    QString location = QFileDialog::getOpenFileName(this, tr("Select Compiler\'s Location"),
                                                    QDir::rootPath(), "g++ (g++.exe)");
    if (! location.isEmpty()) {
        location.replace('/', QDir::separator());
        ui->gppPath->setText(location);
    }
}

void CompilerSelectingDialog::fpcSelectButtonClicked()
{
    QString location = QFileDialog::getOpenFileName(this, tr("Select Compiler\'s Location"),
                                                    QDir::rootPath(), "fpc (fpc.exe)");
    if (! location.isEmpty()) {
        location.replace('/', QDir::separator());
        ui->fpcPath->setText(location);
    }
}
