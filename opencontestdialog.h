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

#ifndef OPENCONTESTDIALOG_H
#define OPENCONTESTDIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>
#include <QPushButton>

namespace Ui {
    class OpenContestDialog;
}

class OpenContestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenContestDialog(QWidget *parent = 0);
    ~OpenContestDialog();
    void setRecentContest(const QStringList&);
    const QStringList& getRecentContest() const;
    QString getSelectedContest();

private:
    Ui::OpenContestDialog *ui;

private slots:
    void selectionChanged();
};

#endif // OPENCONTESTDIALOG_H
