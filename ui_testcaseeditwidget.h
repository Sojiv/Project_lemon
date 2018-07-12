/********************************************************************************
** Form generated from reading UI file 'testcaseeditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCASEEDITWIDGET_H
#define UI_TESTCASEEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_TestCaseEditWidget
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *fileList;
    QGridLayout *gridLayout_1;
    QLabel *inputFileLabel;
    FileLineEdit *inputFileEdit;
    QSpacerItem *horizontalSpacer_1;
    QLabel *outputFileLabel;
    FileLineEdit *outputFileEdit;
    QPushButton *addButton;
    QGridLayout *gridLayout_2;
    QLabel *fullScoreLabel;
    QLineEdit *fullScore;
    QSpacerItem *horizontalSpacer_4;
    QLabel *timeLimitLabel;
    QLineEdit *timeLimit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *msLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *memoryLimitLabel;
    QLineEdit *memoryLimit;
    QHBoxLayout *horizontalLayout_1;
    QLabel *mbLabel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TestCaseEditWidget)
    {
        if (TestCaseEditWidget->objectName().isEmpty())
            TestCaseEditWidget->setObjectName(QStringLiteral("TestCaseEditWidget"));
        TestCaseEditWidget->resize(440, 337);
        verticalLayout_1 = new QVBoxLayout(TestCaseEditWidget);
        verticalLayout_1->setSpacing(10);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        fileList = new QTableWidget(TestCaseEditWidget);
        if (fileList->columnCount() < 2)
            fileList->setColumnCount(2);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        fileList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        fileList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        fileList->setObjectName(QStringLiteral("fileList"));
        fileList->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        fileList->setSelectionMode(QAbstractItemView::ContiguousSelection);
        fileList->setColumnCount(2);
        fileList->horizontalHeader()->setHighlightSections(false);
        fileList->verticalHeader()->setDefaultSectionSize(25);
        fileList->verticalHeader()->setHighlightSections(false);
        fileList->verticalHeader()->setMinimumSectionSize(25);

        verticalLayout_2->addWidget(fileList);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        inputFileLabel = new QLabel(TestCaseEditWidget);
        inputFileLabel->setObjectName(QStringLiteral("inputFileLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputFileLabel->sizePolicy().hasHeightForWidth());
        inputFileLabel->setSizePolicy(sizePolicy);
        inputFileLabel->setStyleSheet(QStringLiteral("font-size: 10pt;"));

        gridLayout_1->addWidget(inputFileLabel, 0, 0, 1, 1);

        inputFileEdit = new FileLineEdit(TestCaseEditWidget);
        inputFileEdit->setObjectName(QStringLiteral("inputFileEdit"));

        gridLayout_1->addWidget(inputFileEdit, 0, 1, 1, 1);

        horizontalSpacer_1 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer_1, 0, 2, 1, 1);

        outputFileLabel = new QLabel(TestCaseEditWidget);
        outputFileLabel->setObjectName(QStringLiteral("outputFileLabel"));
        sizePolicy.setHeightForWidth(outputFileLabel->sizePolicy().hasHeightForWidth());
        outputFileLabel->setSizePolicy(sizePolicy);
        outputFileLabel->setStyleSheet(QStringLiteral("font-size: 10pt;"));

        gridLayout_1->addWidget(outputFileLabel, 1, 0, 1, 1);

        outputFileEdit = new FileLineEdit(TestCaseEditWidget);
        outputFileEdit->setObjectName(QStringLiteral("outputFileEdit"));

        gridLayout_1->addWidget(outputFileEdit, 1, 1, 1, 1);

        addButton = new QPushButton(TestCaseEditWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);
        addButton->setMinimumSize(QSize(60, 0));
        addButton->setMaximumSize(QSize(60, 16777215));

        gridLayout_1->addWidget(addButton, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_1);


        verticalLayout_1->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(7);
        fullScoreLabel = new QLabel(TestCaseEditWidget);
        fullScoreLabel->setObjectName(QStringLiteral("fullScoreLabel"));
        sizePolicy.setHeightForWidth(fullScoreLabel->sizePolicy().hasHeightForWidth());
        fullScoreLabel->setSizePolicy(sizePolicy);
        fullScoreLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(fullScoreLabel, 0, 0, 1, 1);

        fullScore = new QLineEdit(TestCaseEditWidget);
        fullScore->setObjectName(QStringLiteral("fullScore"));
        fullScore->setMinimumSize(QSize(51, 22));
        fullScore->setMaximumSize(QSize(81, 22));

        gridLayout_2->addWidget(fullScore, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        timeLimitLabel = new QLabel(TestCaseEditWidget);
        timeLimitLabel->setObjectName(QStringLiteral("timeLimitLabel"));
        sizePolicy.setHeightForWidth(timeLimitLabel->sizePolicy().hasHeightForWidth());
        timeLimitLabel->setSizePolicy(sizePolicy);
        timeLimitLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(timeLimitLabel, 1, 0, 1, 1);

        timeLimit = new QLineEdit(TestCaseEditWidget);
        timeLimit->setObjectName(QStringLiteral("timeLimit"));
        timeLimit->setMinimumSize(QSize(51, 22));
        timeLimit->setMaximumSize(QSize(81, 22));

        gridLayout_2->addWidget(timeLimit, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        msLabel = new QLabel(TestCaseEditWidget);
        msLabel->setObjectName(QStringLiteral("msLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(msLabel->sizePolicy().hasHeightForWidth());
        msLabel->setSizePolicy(sizePolicy2);
        msLabel->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        horizontalLayout_2->addWidget(msLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        memoryLimitLabel = new QLabel(TestCaseEditWidget);
        memoryLimitLabel->setObjectName(QStringLiteral("memoryLimitLabel"));
        sizePolicy.setHeightForWidth(memoryLimitLabel->sizePolicy().hasHeightForWidth());
        memoryLimitLabel->setSizePolicy(sizePolicy);
        memoryLimitLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(memoryLimitLabel, 2, 0, 1, 1);

        memoryLimit = new QLineEdit(TestCaseEditWidget);
        memoryLimit->setObjectName(QStringLiteral("memoryLimit"));
        memoryLimit->setMinimumSize(QSize(51, 22));
        memoryLimit->setMaximumSize(QSize(81, 22));

        gridLayout_2->addWidget(memoryLimit, 2, 1, 1, 1);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        mbLabel = new QLabel(TestCaseEditWidget);
        mbLabel->setObjectName(QStringLiteral("mbLabel"));
        sizePolicy2.setHeightForWidth(mbLabel->sizePolicy().hasHeightForWidth());
        mbLabel->setSizePolicy(sizePolicy2);
        mbLabel->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        horizontalLayout_1->addWidget(mbLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_1, 2, 2, 1, 1);


        verticalLayout_1->addLayout(gridLayout_2);


        retranslateUi(TestCaseEditWidget);

        QMetaObject::connectSlotsByName(TestCaseEditWidget);
    } // setupUi

    void retranslateUi(QWidget *TestCaseEditWidget)
    {
        TestCaseEditWidget->setWindowTitle(QApplication::translate("TestCaseEditWidget", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = fileList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TestCaseEditWidget", "Input Files", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = fileList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TestCaseEditWidget", "Output Files", nullptr));
        inputFileLabel->setText(QApplication::translate("TestCaseEditWidget", "Input File Name", nullptr));
        outputFileLabel->setText(QApplication::translate("TestCaseEditWidget", "Output File Name", nullptr));
        addButton->setText(QApplication::translate("TestCaseEditWidget", "&Add", nullptr));
        fullScoreLabel->setText(QApplication::translate("TestCaseEditWidget", "Full Score", nullptr));
        timeLimitLabel->setText(QApplication::translate("TestCaseEditWidget", "Time Limit", nullptr));
        msLabel->setText(QApplication::translate("TestCaseEditWidget", "ms", nullptr));
        memoryLimitLabel->setText(QApplication::translate("TestCaseEditWidget", "Memory Limit", nullptr));
        mbLabel->setText(QApplication::translate("TestCaseEditWidget", "MB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestCaseEditWidget: public Ui_TestCaseEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCASEEDITWIDGET_H
