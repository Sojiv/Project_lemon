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

#ifndef COMPILERSELECTINGDIALOG_H
#define COMPILERSELECTINGDIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>

namespace Ui {
    class CompilerSelectingDialog;
}

class CompilerSelectingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompilerSelectingDialog(QWidget *parent = 0);
    ~CompilerSelectingDialog();
    void setGccPath(const QString&);
    void setGppPath(const QString&);
    void setFpcPath(const QString&);
    QString getGccPath() const;
    QString getGppPath() const;
    QString getFpcPath() const;

private:
    Ui::CompilerSelectingDialog *ui;

private slots:
    void gccSelectButtonClicked();
    void gppSelectButtonClicked();
    void fpcSelectButtonClicked();
};

#endif // COMPILERSELECTINGDIALOG_H
