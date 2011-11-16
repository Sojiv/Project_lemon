#
#    Project Lemon - A tiny judging environment for OI contest
#    Copyright (C) 2011 Zhipeng Jia
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

QT       += core gui network

TARGET = lemon
TEMPLATE = app

SOURCES += main.cpp \
    lemon.cpp \
    contest.cpp \
    task.cpp \
    testcase.cpp \
    settings.cpp \
    compiler.cpp \
    filelineedit.cpp \
    summarytree.cpp \
    taskeditwidget.cpp \
    testcaseeditwidget.cpp \
    generalsettings.cpp \
    compilersettings.cpp \
    addtestcaseswizard.cpp \
    contestant.cpp \
    judgingdialog.cpp \
    judgingthread.cpp \
    optionsdialog.cpp \
    resultviewer.cpp \
    assignmentthread.cpp \
    detaildialog.cpp \
    newcontestwidget.cpp \
    opencontestwidget.cpp \
    newcontestdialog.cpp \
    opencontestdialog.cpp \
    welcomedialog.cpp \
    addtaskdialog.cpp \
    qtlockedfile/qtlockedfile.cpp \
    qtsingleapplication/qtsinglecoreapplication.cpp \
    qtsingleapplication/qtsingleapplication.cpp \
    qtsingleapplication/qtlocalpeer.cpp \
    advancedcompilersettingsdialog.cpp \
    environmentvariablesdialog.cpp \
    editvariabledialog.cpp \
    addcompilerwizard.cpp

win32:SOURCES += qtlockedfile/qtlockedfile_win.cpp
unix:SOURCES += qtlockedfile/qtlockedfile_unix.cpp

HEADERS  += lemon.h \
    contest.h \
    task.h \
    testcase.h \
    settings.h \
    compiler.h \
    filelineedit.h \
    summarytree.h \
    taskeditwidget.h \
    testcaseeditwidget.h \
    generalsettings.h \
    compilersettings.h \
    addtestcaseswizard.h \
    contestant.h \
    judgingdialog.h \
    judgingthread.h \
    optionsdialog.h \
    resultviewer.h \
    assignmentthread.h \
    globaltype.h \
    detaildialog.h \
    newcontestwidget.h \
    opencontestwidget.h \
    newcontestdialog.h \
    opencontestdialog.h \
    welcomedialog.h \
    linux_proc.h \
    addtaskdialog.h \
    qtlockedfile/qtlockedfile.h \
    qtsingleapplication/qtsinglecoreapplication.h \
    qtsingleapplication/qtsingleapplication.h \
    qtsingleapplication/qtlocalpeer.h \
    advancedcompilersettingsdialog.h \
    environmentvariablesdialog.h \
    editvariabledialog.h \
    addcompilerwizard.h

FORMS    += lemon.ui \
    taskeditwidget.ui \
    testcaseeditwidget.ui \
    generalsettings.ui \
    compilersettings.ui \
    addtestcaseswizard.ui \
    judgingdialog.ui \
    optionsdialog.ui \
    detaildialog.ui \
    newcontestwidget.ui \
    opencontestwidget.ui \
    newcontestdialog.ui \
    opencontestdialog.ui \
    welcomedialog.ui \
    addtaskdialog.ui \
    advancedcompilersettingsdialog.ui \
    environmentvariablesdialog.ui \
    editvariabledialog.ui \
    addcompilerwizard.ui


TRANSLATIONS += lemon_zh_CN.ts

win32:RC_FILE = lemon.rc

win32:LIBS += -lpsapi

win32:CONFIG += qaxcontainer

RESOURCES += resource.qrc



