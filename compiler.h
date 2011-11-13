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

#ifndef COMPILER_H
#define COMPILER_H

#include <QtCore>
#include <QObject>

class Compiler : public QObject
{
    Q_OBJECT
public:
    explicit Compiler(QObject *parent = 0);
    
    const QString& getCompilerName() const;
    const QStringList& getSourceExtensions() const;
    const QString& getLocation() const;
    const QStringList &getConfigurationNames() const;
    const QStringList &getConfigurationSettings() const;
    
    void setCompilerName(const QString&);
    void setSourceExtensions(const QString&);
    void setLocation(const QString&);
    void addConfiguration(const QString&, const QString&);
    void setConfigName(int, const QString&);
    void setArguments(int, const QString&);
    void deleteConfiguration(int);
    
    void copyFrom(Compiler*);

private:
    QString compilerName;
    QStringList sourceExtensions;
    QString location;
    QStringList configurationNames;
    QStringList configurationSettings;
};

#endif // COMPILER_H
