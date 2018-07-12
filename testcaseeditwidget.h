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

#ifndef TESTCASEEDITWIDGET_H
#define TESTCASEEDITWIDGET_H

#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QTableWidgetItem>
#include <QAction>
#include <QHeaderView>
#include <QMessageBox>

namespace Ui {
    class TestCaseEditWidget;
}

class Settings;
class TestCase;

class TestCaseEditWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TestCaseEditWidget(QWidget *parent = 0);
    ~TestCaseEditWidget();
    void changeEvent(QEvent*);
    void setEditTestCase(TestCase*, bool);
    void setSettings(Settings*);

private:
    Ui::TestCaseEditWidget *ui;
    TestCase *editTestCase;
    Settings *settings;
    QAction *deleteAction;
    void refreshFileList();

private slots:
    void addSingleCase();
    void deleteSingleCase();
    void fullScoreChanged(const QString&);
    void timeLimitChanged(const QString&);
    void memoryLimitChanged(const QString&);
    void fileListSelectionChanged();
    void fileListItemChanged(QTableWidgetItem*);

signals:
    void dataPathChanged();
};

#endif // TESTCASEEDITWIDGET_H
