/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *defaultFullScore;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *defaultTimeLimit;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *defaultMemoryLimit;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *compileTimeLimit;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *specialJudgeTimeLimit;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *fileSizeLimit;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *numberOfThreads;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *inputFileExtensions;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QLineEdit *outputFileExtensions;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GeneralSettings)
    {
        if (GeneralSettings->objectName().isEmpty())
            GeneralSettings->setObjectName(QStringLiteral("GeneralSettings"));
        GeneralSettings->resize(325, 352);
        GeneralSettings->setMinimumSize(QSize(325, 352));
        gridLayout = new QGridLayout(GeneralSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(10);
        label = new QLabel(GeneralSettings);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        defaultFullScore = new QLineEdit(GeneralSettings);
        defaultFullScore->setObjectName(QStringLiteral("defaultFullScore"));
        sizePolicy.setHeightForWidth(defaultFullScore->sizePolicy().hasHeightForWidth());
        defaultFullScore->setSizePolicy(sizePolicy);
        defaultFullScore->setMinimumSize(QSize(58, 22));
        defaultFullScore->setMaximumSize(QSize(58, 22));

        horizontalLayout_2->addWidget(defaultFullScore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(GeneralSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        defaultTimeLimit = new QLineEdit(GeneralSettings);
        defaultTimeLimit->setObjectName(QStringLiteral("defaultTimeLimit"));
        sizePolicy.setHeightForWidth(defaultTimeLimit->sizePolicy().hasHeightForWidth());
        defaultTimeLimit->setSizePolicy(sizePolicy);
        defaultTimeLimit->setMinimumSize(QSize(58, 22));
        defaultTimeLimit->setMaximumSize(QSize(58, 22));

        horizontalLayout_3->addWidget(defaultTimeLimit);

        label_6 = new QLabel(GeneralSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_3 = new QLabel(GeneralSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        defaultMemoryLimit = new QLineEdit(GeneralSettings);
        defaultMemoryLimit->setObjectName(QStringLiteral("defaultMemoryLimit"));
        sizePolicy.setHeightForWidth(defaultMemoryLimit->sizePolicy().hasHeightForWidth());
        defaultMemoryLimit->setSizePolicy(sizePolicy);
        defaultMemoryLimit->setMinimumSize(QSize(58, 22));
        defaultMemoryLimit->setMaximumSize(QSize(58, 22));

        horizontalLayout_4->addWidget(defaultMemoryLimit);

        label_7 = new QLabel(GeneralSettings);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        label_4 = new QLabel(GeneralSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        compileTimeLimit = new QLineEdit(GeneralSettings);
        compileTimeLimit->setObjectName(QStringLiteral("compileTimeLimit"));
        sizePolicy.setHeightForWidth(compileTimeLimit->sizePolicy().hasHeightForWidth());
        compileTimeLimit->setSizePolicy(sizePolicy);
        compileTimeLimit->setMinimumSize(QSize(58, 22));
        compileTimeLimit->setMaximumSize(QSize(58, 22));

        horizontalLayout_5->addWidget(compileTimeLimit);

        label_8 = new QLabel(GeneralSettings);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        label_17 = new QLabel(GeneralSettings);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);
        label_17->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(12);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        specialJudgeTimeLimit = new QLineEdit(GeneralSettings);
        specialJudgeTimeLimit->setObjectName(QStringLiteral("specialJudgeTimeLimit"));
        sizePolicy.setHeightForWidth(specialJudgeTimeLimit->sizePolicy().hasHeightForWidth());
        specialJudgeTimeLimit->setSizePolicy(sizePolicy);
        specialJudgeTimeLimit->setMinimumSize(QSize(58, 22));
        specialJudgeTimeLimit->setMaximumSize(QSize(58, 22));

        horizontalLayout_9->addWidget(specialJudgeTimeLimit);

        label_18 = new QLabel(GeneralSettings);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);
        label_18->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_9->addWidget(label_18);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_9, 4, 1, 1, 1);

        label_5 = new QLabel(GeneralSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        fileSizeLimit = new QLineEdit(GeneralSettings);
        fileSizeLimit->setObjectName(QStringLiteral("fileSizeLimit"));
        sizePolicy.setHeightForWidth(fileSizeLimit->sizePolicy().hasHeightForWidth());
        fileSizeLimit->setSizePolicy(sizePolicy);
        fileSizeLimit->setMinimumSize(QSize(58, 22));
        fileSizeLimit->setMaximumSize(QSize(58, 22));

        horizontalLayout_6->addWidget(fileSizeLimit);

        label_9 = new QLabel(GeneralSettings);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);

        label_19 = new QLabel(GeneralSettings);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_19, 6, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(12);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        numberOfThreads = new QLineEdit(GeneralSettings);
        numberOfThreads->setObjectName(QStringLiteral("numberOfThreads"));
        numberOfThreads->setMinimumSize(QSize(58, 22));
        numberOfThreads->setMaximumSize(QSize(58, 22));

        horizontalLayout_10->addWidget(numberOfThreads);

        horizontalSpacer_8 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_10, 6, 1, 1, 1);

        label_10 = new QLabel(GeneralSettings);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        inputFileExtensions = new QLineEdit(GeneralSettings);
        inputFileExtensions->setObjectName(QStringLiteral("inputFileExtensions"));

        horizontalLayout_7->addWidget(inputFileExtensions);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_7, 7, 1, 1, 1);

        label_12 = new QLabel(GeneralSettings);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        outputFileExtensions = new QLineEdit(GeneralSettings);
        outputFileExtensions->setObjectName(QStringLiteral("outputFileExtensions"));

        horizontalLayout->addWidget(outputFileExtensions);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);

        label_11 = new QLabel(GeneralSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font-size:10pt;"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 2);


        retranslateUi(GeneralSettings);

        QMetaObject::connectSlotsByName(GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettings)
    {
        GeneralSettings->setWindowTitle(QApplication::translate("GeneralSettings", "Form", nullptr));
        label->setText(QApplication::translate("GeneralSettings", "Default Full Score", nullptr));
        label_2->setText(QApplication::translate("GeneralSettings", "Default Time Limit", nullptr));
        label_6->setText(QApplication::translate("GeneralSettings", "ms", nullptr));
        label_3->setText(QApplication::translate("GeneralSettings", "Default Memory Limit", nullptr));
        label_7->setText(QApplication::translate("GeneralSettings", "MB", nullptr));
        label_4->setText(QApplication::translate("GeneralSettings", "Compile Time Limit", nullptr));
        label_8->setText(QApplication::translate("GeneralSettings", "ms", nullptr));
        label_17->setText(QApplication::translate("GeneralSettings", "Special Judge Time Limit", nullptr));
        label_18->setText(QApplication::translate("GeneralSettings", "ms", nullptr));
        label_5->setText(QApplication::translate("GeneralSettings", "Source File Size Limit", nullptr));
        label_9->setText(QApplication::translate("GeneralSettings", "KB", nullptr));
        label_19->setText(QApplication::translate("GeneralSettings", "Number of Threads", nullptr));
        label_10->setText(QApplication::translate("GeneralSettings", "Input File Extensions", nullptr));
        label_12->setText(QApplication::translate("GeneralSettings", "Output File Extensions", nullptr));
        label_11->setText(QApplication::translate("GeneralSettings", "(separated by \";\". Empty means no limitation.)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSETTINGS_H
