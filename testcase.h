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

#ifndef TESTCASE_H
#define TESTCASE_H

#include <QtCore>
#include <QObject>

class TestCase : public QObject
{
    Q_OBJECT
public:
    explicit TestCase(QObject *parent = 0);
    int getFullScore() const;
    int getTimeLimit() const;
    int getMemoryLimit() const;
    const QStringList& getInputFiles() const;
    const QStringList& getOutputFiles() const;
    void setFullScore(int);
    void setTimeLimit(int);
    void setMemoryLimit(int);
    void setInputFiles(int, const QString&);
    void setOutputFiles(int, const QString&);
    void addSingleCase(const QString&, const QString&);
    void deleteSingleCase(int);
    void writeToStream(QDataStream&);
    void readFromStream(QDataStream&);    

private:
    QStringList inputFiles;
    QStringList outputFiles;
    int fullScore;
    int timeLimit;
    int memoryLimit;
};

#endif // TESTCASE_H
