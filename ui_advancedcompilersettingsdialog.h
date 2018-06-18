/********************************************************************************
** Form generated from reading UI file 'advancedcompilersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDCOMPILERSETTINGSDIALOG_H
#define UI_ADVANCEDCOMPILERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdvancedCompilerSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *typeSelect;
    QSpacerItem *horizontalSpacer;
    QGroupBox *locationGroup;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *compilerLabel;
    QLineEdit *compilerLocation;
    QToolButton *compilerSelectButton;
    QLabel *interpreterLabel;
    QLineEdit *interpreterLocation;
    QToolButton *interpreterSelectButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bytecodeExtensionLabel;
    QLineEdit *bytecodeExtension;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *limitGroup;
    QGridLayout *gridLayout_2;
    QLabel *timeLimitRationLabel;
    QDoubleSpinBox *timeLimitRatio;
    QSpacerItem *horizontalSpacer_2;
    QLabel *memoryLimitRatioLabel;
    QDoubleSpinBox *memoryLimitRatio;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *disableMemoryLimit;
    QGroupBox *argumentsGroup;
    QGridLayout *gridLayout_3;
    QLabel *configurationLabel;
    QComboBox *configurationSelect;
    QToolButton *deleteConfigurationButton;
    QLabel *compilerArgumentsLabel;
    QLineEdit *compilerArguments;
    QLabel *interpreterArgumentsLabel;
    QLineEdit *interpreterArguments;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *environmentVariablesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdvancedCompilerSettingsDialog)
    {
        if (AdvancedCompilerSettingsDialog->objectName().isEmpty())
            AdvancedCompilerSettingsDialog->setObjectName(QStringLiteral("AdvancedCompilerSettingsDialog"));
        AdvancedCompilerSettingsDialog->resize(358, 522);
        AdvancedCompilerSettingsDialog->setMinimumSize(QSize(358, 522));
        verticalLayout = new QVBoxLayout(AdvancedCompilerSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        typeSelect = new QComboBox(AdvancedCompilerSettingsDialog);
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->setObjectName(QStringLiteral("typeSelect"));
        typeSelect->setMinimumSize(QSize(211, 0));
        typeSelect->setStyleSheet(QStringLiteral("font-size:11pt;"));

        horizontalLayout->addWidget(typeSelect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        locationGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        locationGroup->setObjectName(QStringLiteral("locationGroup"));
        locationGroup->setStyleSheet(QStringLiteral("font-size:11pt;"));
        verticalLayout_2 = new QVBoxLayout(locationGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        compilerLabel = new QLabel(locationGroup);
        compilerLabel->setObjectName(QStringLiteral("compilerLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compilerLabel->sizePolicy().hasHeightForWidth());
        compilerLabel->setSizePolicy(sizePolicy);
        compilerLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(compilerLabel, 0, 0, 1, 1);

        compilerLocation = new QLineEdit(locationGroup);
        compilerLocation->setObjectName(QStringLiteral("compilerLocation"));

        gridLayout->addWidget(compilerLocation, 0, 1, 1, 1);

        compilerSelectButton = new QToolButton(locationGroup);
        compilerSelectButton->setObjectName(QStringLiteral("compilerSelectButton"));
        compilerSelectButton->setText(QStringLiteral("..."));

        gridLayout->addWidget(compilerSelectButton, 0, 2, 1, 1);

        interpreterLabel = new QLabel(locationGroup);
        interpreterLabel->setObjectName(QStringLiteral("interpreterLabel"));
        sizePolicy.setHeightForWidth(interpreterLabel->sizePolicy().hasHeightForWidth());
        interpreterLabel->setSizePolicy(sizePolicy);
        interpreterLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(interpreterLabel, 1, 0, 1, 1);

        interpreterLocation = new QLineEdit(locationGroup);
        interpreterLocation->setObjectName(QStringLiteral("interpreterLocation"));

        gridLayout->addWidget(interpreterLocation, 1, 1, 1, 1);

        interpreterSelectButton = new QToolButton(locationGroup);
        interpreterSelectButton->setObjectName(QStringLiteral("interpreterSelectButton"));
        interpreterSelectButton->setText(QStringLiteral("..."));

        gridLayout->addWidget(interpreterSelectButton, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bytecodeExtensionLabel = new QLabel(locationGroup);
        bytecodeExtensionLabel->setObjectName(QStringLiteral("bytecodeExtensionLabel"));
        sizePolicy.setHeightForWidth(bytecodeExtensionLabel->sizePolicy().hasHeightForWidth());
        bytecodeExtensionLabel->setSizePolicy(sizePolicy);
        bytecodeExtensionLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        horizontalLayout_3->addWidget(bytecodeExtensionLabel);

        bytecodeExtension = new QLineEdit(locationGroup);
        bytecodeExtension->setObjectName(QStringLiteral("bytecodeExtension"));
        bytecodeExtension->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(bytecodeExtension);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(locationGroup);

        limitGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        limitGroup->setObjectName(QStringLiteral("limitGroup"));
        limitGroup->setStyleSheet(QStringLiteral("font-size:11pt;"));
        gridLayout_2 = new QGridLayout(limitGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        gridLayout_2->setVerticalSpacing(6);
        timeLimitRationLabel = new QLabel(limitGroup);
        timeLimitRationLabel->setObjectName(QStringLiteral("timeLimitRationLabel"));
        timeLimitRationLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(timeLimitRationLabel, 0, 0, 1, 1);

        timeLimitRatio = new QDoubleSpinBox(limitGroup);
        timeLimitRatio->setObjectName(QStringLiteral("timeLimitRatio"));
        timeLimitRatio->setDecimals(1);
        timeLimitRatio->setMinimum(1);
        timeLimitRatio->setSingleStep(0.1);

        gridLayout_2->addWidget(timeLimitRatio, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        memoryLimitRatioLabel = new QLabel(limitGroup);
        memoryLimitRatioLabel->setObjectName(QStringLiteral("memoryLimitRatioLabel"));
        memoryLimitRatioLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(memoryLimitRatioLabel, 1, 0, 1, 1);

        memoryLimitRatio = new QDoubleSpinBox(limitGroup);
        memoryLimitRatio->setObjectName(QStringLiteral("memoryLimitRatio"));
        memoryLimitRatio->setDecimals(1);
        memoryLimitRatio->setMinimum(1);
        memoryLimitRatio->setSingleStep(0.1);

        gridLayout_2->addWidget(memoryLimitRatio, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        disableMemoryLimit = new QCheckBox(limitGroup);
        disableMemoryLimit->setObjectName(QStringLiteral("disableMemoryLimit"));
        disableMemoryLimit->setStyleSheet(QStringLiteral("font-size:10pt;"));

        gridLayout_2->addWidget(disableMemoryLimit, 2, 0, 1, 1);


        verticalLayout->addWidget(limitGroup);

        argumentsGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        argumentsGroup->setObjectName(QStringLiteral("argumentsGroup"));
        argumentsGroup->setStyleSheet(QStringLiteral("font-size:11pt;"));
        gridLayout_3 = new QGridLayout(argumentsGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(8);
        gridLayout_3->setVerticalSpacing(6);
        configurationLabel = new QLabel(argumentsGroup);
        configurationLabel->setObjectName(QStringLiteral("configurationLabel"));
        sizePolicy.setHeightForWidth(configurationLabel->sizePolicy().hasHeightForWidth());
        configurationLabel->setSizePolicy(sizePolicy);
        configurationLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(configurationLabel, 0, 0, 1, 1);

        configurationSelect = new QComboBox(argumentsGroup);
        configurationSelect->setObjectName(QStringLiteral("configurationSelect"));

        gridLayout_3->addWidget(configurationSelect, 0, 1, 1, 1);

        deleteConfigurationButton = new QToolButton(argumentsGroup);
        deleteConfigurationButton->setObjectName(QStringLiteral("deleteConfigurationButton"));
        deleteConfigurationButton->setMinimumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteConfigurationButton->setIcon(icon);

        gridLayout_3->addWidget(deleteConfigurationButton, 0, 2, 1, 1);

        compilerArgumentsLabel = new QLabel(argumentsGroup);
        compilerArgumentsLabel->setObjectName(QStringLiteral("compilerArgumentsLabel"));
        sizePolicy.setHeightForWidth(compilerArgumentsLabel->sizePolicy().hasHeightForWidth());
        compilerArgumentsLabel->setSizePolicy(sizePolicy);
        compilerArgumentsLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(compilerArgumentsLabel, 1, 0, 1, 1);

        compilerArguments = new QLineEdit(argumentsGroup);
        compilerArguments->setObjectName(QStringLiteral("compilerArguments"));

        gridLayout_3->addWidget(compilerArguments, 1, 1, 1, 2);

        interpreterArgumentsLabel = new QLabel(argumentsGroup);
        interpreterArgumentsLabel->setObjectName(QStringLiteral("interpreterArgumentsLabel"));
        sizePolicy.setHeightForWidth(interpreterArgumentsLabel->sizePolicy().hasHeightForWidth());
        interpreterArgumentsLabel->setSizePolicy(sizePolicy);
        interpreterArgumentsLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(interpreterArgumentsLabel, 2, 0, 1, 1);

        interpreterArguments = new QLineEdit(argumentsGroup);
        interpreterArguments->setObjectName(QStringLiteral("interpreterArguments"));

        gridLayout_3->addWidget(interpreterArguments, 2, 1, 1, 2);


        verticalLayout->addWidget(argumentsGroup);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        environmentVariablesButton = new QPushButton(AdvancedCompilerSettingsDialog);
        environmentVariablesButton->setObjectName(QStringLiteral("environmentVariablesButton"));

        horizontalLayout_2->addWidget(environmentVariablesButton);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(AdvancedCompilerSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("font-size:10pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AdvancedCompilerSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), AdvancedCompilerSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdvancedCompilerSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancedCompilerSettingsDialog)
    {
        AdvancedCompilerSettingsDialog->setWindowTitle(QApplication::translate("AdvancedCompilerSettingsDialog", "Compiler Settings", nullptr));
        typeSelect->setItemText(0, QApplication::translate("AdvancedCompilerSettingsDialog", "Typical (Generate executable file)", nullptr));
        typeSelect->setItemText(1, QApplication::translate("AdvancedCompilerSettingsDialog", "Interpretive (Generate byte-code file)", nullptr));
        typeSelect->setItemText(2, QApplication::translate("AdvancedCompilerSettingsDialog", "Interpretive (Run source code directly)", nullptr));

        locationGroup->setTitle(QApplication::translate("AdvancedCompilerSettingsDialog", "Location", nullptr));
        compilerLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Compiler", nullptr));
        interpreterLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Interpreter", nullptr));
        bytecodeExtensionLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Byte-code File Extensions", nullptr));
        limitGroup->setTitle(QApplication::translate("AdvancedCompilerSettingsDialog", "Time and Memory Limit", nullptr));
        timeLimitRationLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Time Limit Ration", nullptr));
        memoryLimitRatioLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Memory Limit Ration", nullptr));
        disableMemoryLimit->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Disable Memory Limit", nullptr));
        argumentsGroup->setTitle(QApplication::translate("AdvancedCompilerSettingsDialog", "Arguments", nullptr));
        configurationLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Configuration", nullptr));
        deleteConfigurationButton->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "...", nullptr));
        compilerArgumentsLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Compiler's Arguments", nullptr));
        interpreterArgumentsLabel->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Interpreter's Arguments", nullptr));
        environmentVariablesButton->setText(QApplication::translate("AdvancedCompilerSettingsDialog", "Environment Variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdvancedCompilerSettingsDialog: public Ui_AdvancedCompilerSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDCOMPILERSETTINGSDIALOG_H
