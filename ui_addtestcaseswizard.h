/********************************************************************************
** Form generated from reading UI file 'addtestcaseswizard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTESTCASESWIZARD_H
#define UI_ADDTESTCASESWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AddTestCasesWizard
{
public:
    QWizardPage *wizardPage1;
    QVBoxLayout *verticalLayout;
    QLabel *stepOneLabel;
    QGridLayout *gridLayout;
    QLabel *fullScoreLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *fullScore;
    QSpacerItem *horizontalSpacer;
    QLabel *timeLimitLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *timeLimit;
    QLabel *msLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *memoryLimitLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *memoryLimit;
    QLabel *mbLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWizardPage *wizardPage2;
    QVBoxLayout *verticalLayout_3;
    QLabel *stepTwoLabel;
    QGridLayout *gridLayout_2;
    QLabel *inputFilesPatternLabel;
    QLineEdit *inputFilesPattern;
    QLabel *outputFilesPatternLabel;
    QLineEdit *outputFilesPattern;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *argumentList;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QToolButton *addArgumentButton;
    QToolButton *deleteArgumentButton;
    QSpacerItem *verticalSpacer_3;
    QWizardPage *wizardPage3;
    QVBoxLayout *verticalLayout_4;
    QLabel *stepThreeLabel;
    QTreeWidget *testCasesViewer;

    void setupUi(QWizard *AddTestCasesWizard)
    {
        if (AddTestCasesWizard->objectName().isEmpty())
            AddTestCasesWizard->setObjectName(QStringLiteral("AddTestCasesWizard"));
        AddTestCasesWizard->resize(459, 372);
        AddTestCasesWizard->setMinimumSize(QSize(459, 372));
        AddTestCasesWizard->setStyleSheet(QStringLiteral("font-size:10pt;"));
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        verticalLayout = new QVBoxLayout(wizardPage1);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stepOneLabel = new QLabel(wizardPage1);
        stepOneLabel->setObjectName(QStringLiteral("stepOneLabel"));
        stepOneLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepOneLabel->setWordWrap(true);

        verticalLayout->addWidget(stepOneLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(10);
        fullScoreLabel = new QLabel(wizardPage1);
        fullScoreLabel->setObjectName(QStringLiteral("fullScoreLabel"));
        fullScoreLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(fullScoreLabel, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        fullScore = new QLineEdit(wizardPage1);
        fullScore->setObjectName(QStringLiteral("fullScore"));
        fullScore->setMinimumSize(QSize(73, 22));
        fullScore->setMaximumSize(QSize(73, 22));
        fullScore->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_3->addWidget(fullScore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        timeLimitLabel = new QLabel(wizardPage1);
        timeLimitLabel->setObjectName(QStringLiteral("timeLimitLabel"));
        timeLimitLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(timeLimitLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        timeLimit = new QLineEdit(wizardPage1);
        timeLimit->setObjectName(QStringLiteral("timeLimit"));
        timeLimit->setMinimumSize(QSize(58, 22));
        timeLimit->setMaximumSize(QSize(58, 22));
        timeLimit->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_2->addWidget(timeLimit);

        msLabel = new QLabel(wizardPage1);
        msLabel->setObjectName(QStringLiteral("msLabel"));
        msLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_2->addWidget(msLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        memoryLimitLabel = new QLabel(wizardPage1);
        memoryLimitLabel->setObjectName(QStringLiteral("memoryLimitLabel"));
        memoryLimitLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(memoryLimitLabel, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        memoryLimit = new QLineEdit(wizardPage1);
        memoryLimit->setObjectName(QStringLiteral("memoryLimit"));
        memoryLimit->setMinimumSize(QSize(58, 22));
        memoryLimit->setMaximumSize(QSize(58, 22));
        memoryLimit->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout->addWidget(memoryLimit);

        mbLabel = new QLabel(wizardPage1);
        mbLabel->setObjectName(QStringLiteral("mbLabel"));
        mbLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout->addWidget(mbLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        AddTestCasesWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        verticalLayout_3 = new QVBoxLayout(wizardPage2);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stepTwoLabel = new QLabel(wizardPage2);
        stepTwoLabel->setObjectName(QStringLiteral("stepTwoLabel"));
        stepTwoLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepTwoLabel->setWordWrap(true);

        verticalLayout_3->addWidget(stepTwoLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(9);
        inputFilesPatternLabel = new QLabel(wizardPage2);
        inputFilesPatternLabel->setObjectName(QStringLiteral("inputFilesPatternLabel"));
        inputFilesPatternLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_2->addWidget(inputFilesPatternLabel, 0, 0, 1, 1);

        inputFilesPattern = new QLineEdit(wizardPage2);
        inputFilesPattern->setObjectName(QStringLiteral("inputFilesPattern"));
        inputFilesPattern->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_2->addWidget(inputFilesPattern, 0, 1, 1, 1);

        outputFilesPatternLabel = new QLabel(wizardPage2);
        outputFilesPatternLabel->setObjectName(QStringLiteral("outputFilesPatternLabel"));
        outputFilesPatternLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_2->addWidget(outputFilesPatternLabel, 1, 0, 1, 1);

        outputFilesPattern = new QLineEdit(wizardPage2);
        outputFilesPattern->setObjectName(QStringLiteral("outputFilesPattern"));
        outputFilesPattern->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_2->addWidget(outputFilesPattern, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        argumentList = new QTableWidget(wizardPage2);
        if (argumentList->columnCount() < 2)
            argumentList->setColumnCount(2);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        argumentList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        argumentList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        argumentList->setObjectName(QStringLiteral("argumentList"));
        argumentList->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        argumentList->setSelectionMode(QAbstractItemView::SingleSelection);
        argumentList->horizontalHeader()->setHighlightSections(false);
        argumentList->horizontalHeader()->setMinimumSectionSize(70);
        argumentList->horizontalHeader()->setStretchLastSection(true);
        argumentList->verticalHeader()->setVisible(false);
        argumentList->verticalHeader()->setDefaultSectionSize(25);
        argumentList->verticalHeader()->setMinimumSectionSize(25);

        horizontalLayout_4->addWidget(argumentList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        addArgumentButton = new QToolButton(wizardPage2);
        addArgumentButton->setObjectName(QStringLiteral("addArgumentButton"));
        addArgumentButton->setMinimumSize(QSize(27, 27));
        addArgumentButton->setMaximumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addArgumentButton->setIcon(icon);

        verticalLayout_2->addWidget(addArgumentButton);

        deleteArgumentButton = new QToolButton(wizardPage2);
        deleteArgumentButton->setObjectName(QStringLiteral("deleteArgumentButton"));
        deleteArgumentButton->setMinimumSize(QSize(27, 27));
        deleteArgumentButton->setMaximumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/rod.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteArgumentButton->setIcon(icon1);

        verticalLayout_2->addWidget(deleteArgumentButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        AddTestCasesWizard->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QStringLiteral("wizardPage3"));
        verticalLayout_4 = new QVBoxLayout(wizardPage3);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stepThreeLabel = new QLabel(wizardPage3);
        stepThreeLabel->setObjectName(QStringLiteral("stepThreeLabel"));
        stepThreeLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepThreeLabel->setWordWrap(true);

        verticalLayout_4->addWidget(stepThreeLabel);

        testCasesViewer = new QTreeWidget(wizardPage3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        testCasesViewer->setHeaderItem(__qtreewidgetitem);
        testCasesViewer->setObjectName(QStringLiteral("testCasesViewer"));
        testCasesViewer->setColumnCount(2);
        testCasesViewer->header()->setVisible(false);

        verticalLayout_4->addWidget(testCasesViewer);

        AddTestCasesWizard->addPage(wizardPage3);

        retranslateUi(AddTestCasesWizard);

        QMetaObject::connectSlotsByName(AddTestCasesWizard);
    } // setupUi

    void retranslateUi(QWizard *AddTestCasesWizard)
    {
        AddTestCasesWizard->setWindowTitle(QApplication::translate("AddTestCasesWizard", "Add Test Cases", nullptr));
        stepOneLabel->setText(QApplication::translate("AddTestCasesWizard", "Step I: Input the full score, time limit and memory limit for each new test case.", nullptr));
        fullScoreLabel->setText(QApplication::translate("AddTestCasesWizard", "Full Score", nullptr));
        timeLimitLabel->setText(QApplication::translate("AddTestCasesWizard", "Time Limit", nullptr));
        msLabel->setText(QApplication::translate("AddTestCasesWizard", "ms", nullptr));
        memoryLimitLabel->setText(QApplication::translate("AddTestCasesWizard", "Memory Limit", nullptr));
        mbLabel->setText(QApplication::translate("AddTestCasesWizard", "MB", nullptr));
        stepTwoLabel->setText(QApplication::translate("AddTestCasesWizard", "Step II: Input patterns for input files and output files. You can use argument <1>, <2>, etc. to represent a regular expression. Input and output files will in the same test case when their matched parts of checked expressions are identical.", nullptr));
        inputFilesPatternLabel->setText(QApplication::translate("AddTestCasesWizard", "Input Files Pattern", nullptr));
        outputFilesPatternLabel->setText(QApplication::translate("AddTestCasesWizard", "Output Files Pattern", nullptr));
        QTableWidgetItem *___qtablewidgetitem = argumentList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddTestCasesWizard", "Argument", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = argumentList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddTestCasesWizard", "Regular Expression", nullptr));
        addArgumentButton->setText(QString());
        deleteArgumentButton->setText(QString());
        stepThreeLabel->setText(QApplication::translate("AddTestCasesWizard", "Step III: Preview the result and finish the wizard.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTestCasesWizard: public Ui_AddTestCasesWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTESTCASESWIZARD_H
