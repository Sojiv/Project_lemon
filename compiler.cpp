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

#include "compiler.h"

Compiler::Compiler(QObject *parent) :
    QObject(parent)
{
}

const QString& Compiler::getCompilerName() const
{
    return compilerName;
}

const QStringList& Compiler::getSourceExtensions() const
{
    return sourceExtensions;
}

const QString& Compiler::getLocation() const
{
    return location;
}

const QStringList& Compiler::getConfigurationNames() const
{
    return configurationNames;
}

const QStringList& Compiler::getConfigurationSettings() const
{
    return configurationSettings;
}

void Compiler::setCompilerName(const QString &name)
{
    compilerName = name;
}

void Compiler::setSourceExtensions(const QString &extensions)
{
    sourceExtensions = extensions.split(";", QString::SkipEmptyParts);
}

void Compiler::setLocation(const QString &path)
{
    location = path;
}

void Compiler::addConfiguration(const QString &name, const QString &arguments)
{
    configurationNames.append(name);
    configurationSettings.append(arguments);
}

void Compiler::setConfigName(int index, const QString &name)
{
    if (0 <= index && index < configurationNames.size())
        configurationNames[index] = name;
}

void Compiler::setArguments(int index, const QString &arguments)
{
    if (0 <= index && index < configurationSettings.size())
        configurationSettings[index] = arguments;
}

void Compiler::deleteConfiguration(int index)
{
    if (0 <= index && index < configurationNames.size()) {
        configurationNames.removeAt(index);
        configurationSettings.removeAt(index);
    }
}

void Compiler::copyFrom(Compiler *other)
{
    compilerName = other->getCompilerName();
    sourceExtensions = other->getSourceExtensions();
    location = other->getLocation();
    configurationNames.clear();
    configurationSettings.clear();
    QStringList names = other->getConfigurationNames();
    QStringList settings = other->getConfigurationSettings();
    for (int i = 0; i < names.size(); i ++)
        addConfiguration(names[i], settings[i]);
}
