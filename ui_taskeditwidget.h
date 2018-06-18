/********************************************************************************
** Form generated from reading UI file 'taskeditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKEDITWIDGET_H
#define UI_TASKEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_TaskEditWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *problemTitleLabel;
    QLineEdit *problemTitle;
    QLabel *taskTypeLabel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *traditionalButton;
    QRadioButton *answersOnlyButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *sourceFileNameLabel;
    QLineEdit *sourceFileName;
    QLabel *inputFileNameLabel;
    QLineEdit *inputFileName;
    QCheckBox *standardInputCheck;
    QLabel *outputFileNameLabel;
    QLineEdit *outputFileName;
    QCheckBox *standardOutputCheck;
    QLabel *comparisonModeLabel;
    QComboBox *comparisonMode;
    QStackedWidget *comparisonSetting;
    QWidget *lineByLineMode;
    QWidget *ignoreSpacesMode;
    QWidget *externalToolMode;
    QHBoxLayout *horizontalLayout_3;
    QLabel *argumentsLabel;
    QLineEdit *diffArguments;
    QWidget *realNumberMode;
    QHBoxLayout *horizontalLayout_9;
    QLabel *precisionLabel;
    QSpinBox *realPrecision;
    QLabel *digitsLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *specialJudgeMode;
    QHBoxLayout *horizontalLayout_10;
    FileLineEdit *specialJudge;
    QVBoxLayout *verticalLayout_3;
    QLabel *compilerSettingsLabel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QListWidget *compilersList;
    QHBoxLayout *horizontalLayout_16;
    QLabel *configurationLabel;
    QComboBox *configurationSelect;
    QHBoxLayout *horizontalLayout;
    QLabel *answerFileExtensionLabel;
    QLineEdit *answerFileExtension;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *TaskEditWidget)
    {
        if (TaskEditWidget->objectName().isEmpty())
            TaskEditWidget->setObjectName(QStringLiteral("TaskEditWidget"));
        TaskEditWidget->resize(515, 438);
        gridLayout = new QGridLayout(TaskEditWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        problemTitleLabel = new QLabel(TaskEditWidget);
        problemTitleLabel->setObjectName(QStringLiteral("problemTitleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(problemTitleLabel->sizePolicy().hasHeightForWidth());
        problemTitleLabel->setSizePolicy(sizePolicy);
        problemTitleLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(problemTitleLabel, 0, 0, 1, 1);

        problemTitle = new QLineEdit(TaskEditWidget);
        problemTitle->setObjectName(QStringLiteral("problemTitle"));

        gridLayout->addWidget(problemTitle, 0, 1, 1, 2);

        taskTypeLabel = new QLabel(TaskEditWidget);
        taskTypeLabel->setObjectName(QStringLiteral("taskTypeLabel"));
        sizePolicy.setHeightForWidth(taskTypeLabel->sizePolicy().hasHeightForWidth());
        taskTypeLabel->setSizePolicy(sizePolicy);
        taskTypeLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(taskTypeLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        traditionalButton = new QRadioButton(TaskEditWidget);
        traditionalButton->setObjectName(QStringLiteral("traditionalButton"));
        traditionalButton->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        horizontalLayout_2->addWidget(traditionalButton);

        answersOnlyButton = new QRadioButton(TaskEditWidget);
        answersOnlyButton->setObjectName(QStringLiteral("answersOnlyButton"));
        answersOnlyButton->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        horizontalLayout_2->addWidget(answersOnlyButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 2);

        sourceFileNameLabel = new QLabel(TaskEditWidget);
        sourceFileNameLabel->setObjectName(QStringLiteral("sourceFileNameLabel"));
        sizePolicy.setHeightForWidth(sourceFileNameLabel->sizePolicy().hasHeightForWidth());
        sourceFileNameLabel->setSizePolicy(sizePolicy);
        sourceFileNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(sourceFileNameLabel, 2, 0, 1, 1);

        sourceFileName = new QLineEdit(TaskEditWidget);
        sourceFileName->setObjectName(QStringLiteral("sourceFileName"));

        gridLayout->addWidget(sourceFileName, 2, 1, 1, 2);

        inputFileNameLabel = new QLabel(TaskEditWidget);
        inputFileNameLabel->setObjectName(QStringLiteral("inputFileNameLabel"));
        sizePolicy.setHeightForWidth(inputFileNameLabel->sizePolicy().hasHeightForWidth());
        inputFileNameLabel->setSizePolicy(sizePolicy);
        inputFileNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(inputFileNameLabel, 3, 0, 1, 1);

        inputFileName = new QLineEdit(TaskEditWidget);
        inputFileName->setObjectName(QStringLiteral("inputFileName"));

        gridLayout->addWidget(inputFileName, 3, 1, 1, 1);

        standardInputCheck = new QCheckBox(TaskEditWidget);
        standardInputCheck->setObjectName(QStringLiteral("standardInputCheck"));
        standardInputCheck->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        gridLayout->addWidget(standardInputCheck, 3, 2, 1, 1);

        outputFileNameLabel = new QLabel(TaskEditWidget);
        outputFileNameLabel->setObjectName(QStringLiteral("outputFileNameLabel"));
        sizePolicy.setHeightForWidth(outputFileNameLabel->sizePolicy().hasHeightForWidth());
        outputFileNameLabel->setSizePolicy(sizePolicy);
        outputFileNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(outputFileNameLabel, 4, 0, 1, 1);

        outputFileName = new QLineEdit(TaskEditWidget);
        outputFileName->setObjectName(QStringLiteral("outputFileName"));

        gridLayout->addWidget(outputFileName, 4, 1, 1, 1);

        standardOutputCheck = new QCheckBox(TaskEditWidget);
        standardOutputCheck->setObjectName(QStringLiteral("standardOutputCheck"));
        standardOutputCheck->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        gridLayout->addWidget(standardOutputCheck, 4, 2, 1, 1);

        comparisonModeLabel = new QLabel(TaskEditWidget);
        comparisonModeLabel->setObjectName(QStringLiteral("comparisonModeLabel"));
        sizePolicy.setHeightForWidth(comparisonModeLabel->sizePolicy().hasHeightForWidth());
        comparisonModeLabel->setSizePolicy(sizePolicy);
        comparisonModeLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(comparisonModeLabel, 5, 0, 1, 1);

        comparisonMode = new QComboBox(TaskEditWidget);
        comparisonMode->addItem(QString());
        comparisonMode->addItem(QString());
        comparisonMode->addItem(QString());
        comparisonMode->addItem(QString());
        comparisonMode->addItem(QString());
        comparisonMode->setObjectName(QStringLiteral("comparisonMode"));
        comparisonMode->setStyleSheet(QStringLiteral("font-size: 11pt;"));

        gridLayout->addWidget(comparisonMode, 5, 1, 1, 2);

        comparisonSetting = new QStackedWidget(TaskEditWidget);
        comparisonSetting->setObjectName(QStringLiteral("comparisonSetting"));
        sizePolicy.setHeightForWidth(comparisonSetting->sizePolicy().hasHeightForWidth());
        comparisonSetting->setSizePolicy(sizePolicy);
        lineByLineMode = new QWidget();
        lineByLineMode->setObjectName(QStringLiteral("lineByLineMode"));
        comparisonSetting->addWidget(lineByLineMode);
        ignoreSpacesMode = new QWidget();
        ignoreSpacesMode->setObjectName(QStringLiteral("ignoreSpacesMode"));
        comparisonSetting->addWidget(ignoreSpacesMode);
        externalToolMode = new QWidget();
        externalToolMode->setObjectName(QStringLiteral("externalToolMode"));
        horizontalLayout_3 = new QHBoxLayout(externalToolMode);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        argumentsLabel = new QLabel(externalToolMode);
        argumentsLabel->setObjectName(QStringLiteral("argumentsLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(argumentsLabel->sizePolicy().hasHeightForWidth());
        argumentsLabel->setSizePolicy(sizePolicy1);
        argumentsLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_3->addWidget(argumentsLabel);

        diffArguments = new QLineEdit(externalToolMode);
        diffArguments->setObjectName(QStringLiteral("diffArguments"));

        horizontalLayout_3->addWidget(diffArguments);

        comparisonSetting->addWidget(externalToolMode);
        realNumberMode = new QWidget();
        realNumberMode->setObjectName(QStringLiteral("realNumberMode"));
        horizontalLayout_9 = new QHBoxLayout(realNumberMode);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        precisionLabel = new QLabel(realNumberMode);
        precisionLabel->setObjectName(QStringLiteral("precisionLabel"));
        sizePolicy1.setHeightForWidth(precisionLabel->sizePolicy().hasHeightForWidth());
        precisionLabel->setSizePolicy(sizePolicy1);
        precisionLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_9->addWidget(precisionLabel);

        realPrecision = new QSpinBox(realNumberMode);
        realPrecision->setObjectName(QStringLiteral("realPrecision"));
        realPrecision->setMaximum(18);
        realPrecision->setValue(3);

        horizontalLayout_9->addWidget(realPrecision);

        digitsLabel = new QLabel(realNumberMode);
        digitsLabel->setObjectName(QStringLiteral("digitsLabel"));
        sizePolicy1.setHeightForWidth(digitsLabel->sizePolicy().hasHeightForWidth());
        digitsLabel->setSizePolicy(sizePolicy1);
        digitsLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_9->addWidget(digitsLabel);

        horizontalSpacer_2 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        comparisonSetting->addWidget(realNumberMode);
        specialJudgeMode = new QWidget();
        specialJudgeMode->setObjectName(QStringLiteral("specialJudgeMode"));
        horizontalLayout_10 = new QHBoxLayout(specialJudgeMode);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        specialJudge = new FileLineEdit(specialJudgeMode);
        specialJudge->setObjectName(QStringLiteral("specialJudge"));

        horizontalLayout_10->addWidget(specialJudge);

        comparisonSetting->addWidget(specialJudgeMode);

        gridLayout->addWidget(comparisonSetting, 6, 1, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        compilerSettingsLabel = new QLabel(TaskEditWidget);
        compilerSettingsLabel->setObjectName(QStringLiteral("compilerSettingsLabel"));
        sizePolicy.setHeightForWidth(compilerSettingsLabel->sizePolicy().hasHeightForWidth());
        compilerSettingsLabel->setSizePolicy(sizePolicy);
        compilerSettingsLabel->setMinimumSize(QSize(143, 18));
        compilerSettingsLabel->setMaximumSize(QSize(143, 18));
        compilerSettingsLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        verticalLayout_3->addWidget(compilerSettingsLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 7, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        compilersList = new QListWidget(TaskEditWidget);
        compilersList->setObjectName(QStringLiteral("compilersList"));

        verticalLayout_4->addWidget(compilersList);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(15);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        configurationLabel = new QLabel(TaskEditWidget);
        configurationLabel->setObjectName(QStringLiteral("configurationLabel"));
        configurationLabel->setEnabled(false);
        sizePolicy1.setHeightForWidth(configurationLabel->sizePolicy().hasHeightForWidth());
        configurationLabel->setSizePolicy(sizePolicy1);
        configurationLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_16->addWidget(configurationLabel);

        configurationSelect = new QComboBox(TaskEditWidget);
        configurationSelect->setObjectName(QStringLiteral("configurationSelect"));
        configurationSelect->setEnabled(false);
        configurationSelect->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_16->addWidget(configurationSelect);


        verticalLayout_4->addLayout(horizontalLayout_16);


        gridLayout->addLayout(verticalLayout_4, 7, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        answerFileExtensionLabel = new QLabel(TaskEditWidget);
        answerFileExtensionLabel->setObjectName(QStringLiteral("answerFileExtensionLabel"));
        sizePolicy.setHeightForWidth(answerFileExtensionLabel->sizePolicy().hasHeightForWidth());
        answerFileExtensionLabel->setSizePolicy(sizePolicy);
        answerFileExtensionLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        horizontalLayout->addWidget(answerFileExtensionLabel);

        answerFileExtension = new QLineEdit(TaskEditWidget);
        answerFileExtension->setObjectName(QStringLiteral("answerFileExtension"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(answerFileExtension->sizePolicy().hasHeightForWidth());
        answerFileExtension->setSizePolicy(sizePolicy2);
        answerFileExtension->setMinimumSize(QSize(61, 22));
        answerFileExtension->setMaximumSize(QSize(61, 22));

        horizontalLayout->addWidget(answerFileExtension);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 3);

        QWidget::setTabOrder(problemTitle, sourceFileName);
        QWidget::setTabOrder(sourceFileName, inputFileName);
        QWidget::setTabOrder(inputFileName, standardInputCheck);
        QWidget::setTabOrder(standardInputCheck, outputFileName);
        QWidget::setTabOrder(outputFileName, standardOutputCheck);
        QWidget::setTabOrder(standardOutputCheck, comparisonMode);
        QWidget::setTabOrder(comparisonMode, compilersList);
        QWidget::setTabOrder(compilersList, configurationSelect);
        QWidget::setTabOrder(configurationSelect, specialJudge);
        QWidget::setTabOrder(specialJudge, realPrecision);

        retranslateUi(TaskEditWidget);
        QObject::connect(comparisonMode, SIGNAL(currentIndexChanged(int)), comparisonSetting, SLOT(setCurrentIndex(int)));

        comparisonSetting->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskEditWidget);
    } // setupUi

    void retranslateUi(QWidget *TaskEditWidget)
    {
        TaskEditWidget->setWindowTitle(QApplication::translate("TaskEditWidget", "Form", nullptr));
        problemTitleLabel->setText(QApplication::translate("TaskEditWidget", "Problem Title", nullptr));
        taskTypeLabel->setText(QApplication::translate("TaskEditWidget", "Task Type", nullptr));
        traditionalButton->setText(QApplication::translate("TaskEditWidget", "Traditional", nullptr));
        answersOnlyButton->setText(QApplication::translate("TaskEditWidget", "Answers Only", nullptr));
        sourceFileNameLabel->setText(QApplication::translate("TaskEditWidget", "Source File Name", nullptr));
        inputFileNameLabel->setText(QApplication::translate("TaskEditWidget", "Input File Name", nullptr));
        standardInputCheck->setText(QApplication::translate("TaskEditWidget", "Standard input", nullptr));
        outputFileNameLabel->setText(QApplication::translate("TaskEditWidget", "Output File Name", nullptr));
        standardOutputCheck->setText(QApplication::translate("TaskEditWidget", "Standard output", nullptr));
        comparisonModeLabel->setText(QApplication::translate("TaskEditWidget", "Comparison Mode", nullptr));
        comparisonMode->setItemText(0, QApplication::translate("TaskEditWidget", "Line-by-line mode", nullptr));
        comparisonMode->setItemText(1, QApplication::translate("TaskEditWidget", "Line-by-line mode (ignore extra spaces and tabs)", nullptr));
        comparisonMode->setItemText(2, QApplication::translate("TaskEditWidget", "External tool mode (diff)", nullptr));
        comparisonMode->setItemText(3, QApplication::translate("TaskEditWidget", "Real number mode", nullptr));
        comparisonMode->setItemText(4, QApplication::translate("TaskEditWidget", "Special judge mode", nullptr));

        argumentsLabel->setText(QApplication::translate("TaskEditWidget", "Arguments:", nullptr));
        precisionLabel->setText(QApplication::translate("TaskEditWidget", "Real Number Precision:", nullptr));
        digitsLabel->setText(QApplication::translate("TaskEditWidget", "digits", nullptr));
        compilerSettingsLabel->setText(QApplication::translate("TaskEditWidget", "Compiler Settings", nullptr));
        configurationLabel->setText(QApplication::translate("TaskEditWidget", "Configuration:", nullptr));
        answerFileExtensionLabel->setText(QApplication::translate("TaskEditWidget", "Extension of Contestant's Answer File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskEditWidget: public Ui_TaskEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKEDITWIDGET_H
