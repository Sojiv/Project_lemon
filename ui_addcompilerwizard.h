/********************************************************************************
** Form generated from reading UI file 'addcompilerwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPILERWIZARD_H
#define UI_ADDCOMPILERWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AddCompilerWizard
{
public:
    QWizardPage *selectTypePage;
    QVBoxLayout *verticalLayout_6;
    QLabel *stepOneLabel;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *customRadioButton;
    QVBoxLayout *verticalLayout;
    QRadioButton *builtinRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *compilersCollection;
    QHBoxLayout *horizontalLayout;
    QCheckBox *gccCheck;
    QCheckBox *gppCheck;
    QCheckBox *fpcCheck;
    QCheckBox *fbcCheck;
    QCheckBox *jdkCheck;
    QCheckBox *pythonCheck;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWizardPage *customPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *stepTwoLabel;
    QGridLayout *gridLayout_3;
    QLabel *compilerNameLabel;
    QLineEdit *compilerName;
    QLabel *compilerTypeLabel;
    QComboBox *typeSelect;
    QLabel *compilerLocationLabel;
    QLineEdit *compilerLocation;
    QToolButton *compilerSelectButton;
    QLabel *interpreterLocationLabel;
    QLineEdit *interpreterLocation;
    QToolButton *interpreterSelectButton;
    QLabel *sourceFileExtensionsLabel;
    QLineEdit *sourceFileExtensions;
    QLabel *bytecodeFileExtensionsLabel;
    QLineEdit *bytecodeFileExtensions;
    QLabel *defaultCompilerArgumentsLabel;
    QLineEdit *defaultCompilerArguments;
    QLabel *defaultInterpreterArgumentsLabel;
    QLineEdit *defaultInterpreterArguments;
    QSpacerItem *verticalSpacer_3;
    QWizardPage *builtinCompilersPage;
    QVBoxLayout *verticalLayout_12;
    QLabel *stepTwoLabel_2;
    QGridLayout *gridLayout;
    QGroupBox *gccGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *gccPath;
    QToolButton *gccSelectButton;
    QCheckBox *gccO2Check;
    QGroupBox *gppGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *gppPath;
    QToolButton *gppSelectButton;
    QCheckBox *gppO2Check;
    QGroupBox *fpcGroupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *fpcPath;
    QToolButton *fpcSelectButton;
    QCheckBox *fpcO2Check;
    QGroupBox *fbcGroupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *fbcPath;
    QToolButton *fbcSelectButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *javaGroupBox;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *javacPath;
    QToolButton *javacSelectButton;
    QLabel *label_2;
    QLineEdit *javaPath;
    QToolButton *javaSelectButton;
    QHBoxLayout *horizontalLayout_13;
    QLabel *javaMemoryLimitLabel;
    QLineEdit *javaMemoryLimit;
    QLabel *javaMbLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *pythonGroupBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *pythonPath;
    QToolButton *pythonSelectButton;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QWizardPage *finishPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *stepThreeLabel;
    QPlainTextEdit *logViewer;

    void setupUi(QWizard *AddCompilerWizard)
    {
        if (AddCompilerWizard->objectName().isEmpty())
            AddCompilerWizard->setObjectName(QStringLiteral("AddCompilerWizard"));
        AddCompilerWizard->resize(470, 450);
        AddCompilerWizard->setMinimumSize(QSize(470, 450));
        AddCompilerWizard->setStyleSheet(QStringLiteral("font-size:10pt;"));
        selectTypePage = new QWizardPage();
        selectTypePage->setObjectName(QStringLiteral("selectTypePage"));
        verticalLayout_6 = new QVBoxLayout(selectTypePage);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        stepOneLabel = new QLabel(selectTypePage);
        stepOneLabel->setObjectName(QStringLiteral("stepOneLabel"));
        stepOneLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepOneLabel->setWordWrap(true);

        verticalLayout_6->addWidget(stepOneLabel);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        customRadioButton = new QRadioButton(selectTypePage);
        customRadioButton->setObjectName(QStringLiteral("customRadioButton"));
        customRadioButton->setStyleSheet(QStringLiteral("font-size:11pt;"));

        verticalLayout_3->addWidget(customRadioButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        builtinRadioButton = new QRadioButton(selectTypePage);
        builtinRadioButton->setObjectName(QStringLiteral("builtinRadioButton"));
        builtinRadioButton->setStyleSheet(QStringLiteral("font-size:11pt;"));
        builtinRadioButton->setChecked(true);

        verticalLayout->addWidget(builtinRadioButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        compilersCollection = new QFrame(selectTypePage);
        compilersCollection->setObjectName(QStringLiteral("compilersCollection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compilersCollection->sizePolicy().hasHeightForWidth());
        compilersCollection->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(compilersCollection);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gccCheck = new QCheckBox(compilersCollection);
        gccCheck->setObjectName(QStringLiteral("gccCheck"));
        gccCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        gccCheck->setText(QStringLiteral("gcc"));
        gccCheck->setChecked(true);

        horizontalLayout->addWidget(gccCheck);

        gppCheck = new QCheckBox(compilersCollection);
        gppCheck->setObjectName(QStringLiteral("gppCheck"));
        gppCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        gppCheck->setText(QStringLiteral("g++"));
        gppCheck->setChecked(true);

        horizontalLayout->addWidget(gppCheck);

        fpcCheck = new QCheckBox(compilersCollection);
        fpcCheck->setObjectName(QStringLiteral("fpcCheck"));
        fpcCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        fpcCheck->setText(QStringLiteral("fpc"));
        fpcCheck->setChecked(true);

        horizontalLayout->addWidget(fpcCheck);

        fbcCheck = new QCheckBox(compilersCollection);
        fbcCheck->setObjectName(QStringLiteral("fbcCheck"));
        fbcCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        fbcCheck->setText(QStringLiteral("fbc"));

        horizontalLayout->addWidget(fbcCheck);

        jdkCheck = new QCheckBox(compilersCollection);
        jdkCheck->setObjectName(QStringLiteral("jdkCheck"));
        jdkCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        jdkCheck->setText(QStringLiteral("jdk"));

        horizontalLayout->addWidget(jdkCheck);

        pythonCheck = new QCheckBox(compilersCollection);
        pythonCheck->setObjectName(QStringLiteral("pythonCheck"));
        pythonCheck->setStyleSheet(QStringLiteral("font-size:10pt;"));
        pythonCheck->setText(QStringLiteral("python"));

        horizontalLayout->addWidget(pythonCheck);


        horizontalLayout_2->addWidget(compilersCollection);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        AddCompilerWizard->addPage(selectTypePage);
        customPage = new QWizardPage();
        customPage->setObjectName(QStringLiteral("customPage"));
        verticalLayout_4 = new QVBoxLayout(customPage);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stepTwoLabel = new QLabel(customPage);
        stepTwoLabel->setObjectName(QStringLiteral("stepTwoLabel"));
        stepTwoLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepTwoLabel->setWordWrap(true);

        verticalLayout_4->addWidget(stepTwoLabel);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(9);
        compilerNameLabel = new QLabel(customPage);
        compilerNameLabel->setObjectName(QStringLiteral("compilerNameLabel"));
        compilerNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(compilerNameLabel, 0, 0, 1, 1);

        compilerName = new QLineEdit(customPage);
        compilerName->setObjectName(QStringLiteral("compilerName"));
        compilerName->setMinimumSize(QSize(61, 0));
        compilerName->setMaximumSize(QSize(150, 16777215));
        compilerName->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(compilerName, 0, 1, 1, 1);

        compilerTypeLabel = new QLabel(customPage);
        compilerTypeLabel->setObjectName(QStringLiteral("compilerTypeLabel"));
        compilerTypeLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(compilerTypeLabel, 1, 0, 1, 1);

        typeSelect = new QComboBox(customPage);
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->setObjectName(QStringLiteral("typeSelect"));
        typeSelect->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(typeSelect, 1, 1, 1, 2);

        compilerLocationLabel = new QLabel(customPage);
        compilerLocationLabel->setObjectName(QStringLiteral("compilerLocationLabel"));
        compilerLocationLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(compilerLocationLabel, 2, 0, 1, 1);

        compilerLocation = new QLineEdit(customPage);
        compilerLocation->setObjectName(QStringLiteral("compilerLocation"));
        compilerLocation->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(compilerLocation, 2, 1, 1, 1);

        compilerSelectButton = new QToolButton(customPage);
        compilerSelectButton->setObjectName(QStringLiteral("compilerSelectButton"));
        compilerSelectButton->setStyleSheet(QStringLiteral("font-size:9pt;"));
        compilerSelectButton->setText(QStringLiteral("..."));

        gridLayout_3->addWidget(compilerSelectButton, 2, 2, 1, 1);

        interpreterLocationLabel = new QLabel(customPage);
        interpreterLocationLabel->setObjectName(QStringLiteral("interpreterLocationLabel"));
        interpreterLocationLabel->setEnabled(false);
        interpreterLocationLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(interpreterLocationLabel, 3, 0, 1, 1);

        interpreterLocation = new QLineEdit(customPage);
        interpreterLocation->setObjectName(QStringLiteral("interpreterLocation"));
        interpreterLocation->setEnabled(false);
        interpreterLocation->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(interpreterLocation, 3, 1, 1, 1);

        interpreterSelectButton = new QToolButton(customPage);
        interpreterSelectButton->setObjectName(QStringLiteral("interpreterSelectButton"));
        interpreterSelectButton->setEnabled(false);
        interpreterSelectButton->setStyleSheet(QStringLiteral("font-size:9pt;"));
        interpreterSelectButton->setText(QStringLiteral("..."));

        gridLayout_3->addWidget(interpreterSelectButton, 3, 2, 1, 1);

        sourceFileExtensionsLabel = new QLabel(customPage);
        sourceFileExtensionsLabel->setObjectName(QStringLiteral("sourceFileExtensionsLabel"));
        sourceFileExtensionsLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(sourceFileExtensionsLabel, 4, 0, 1, 1);

        sourceFileExtensions = new QLineEdit(customPage);
        sourceFileExtensions->setObjectName(QStringLiteral("sourceFileExtensions"));
        sourceFileExtensions->setMinimumSize(QSize(61, 0));
        sourceFileExtensions->setMaximumSize(QSize(81, 16777215));
        sourceFileExtensions->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(sourceFileExtensions, 4, 1, 1, 1);

        bytecodeFileExtensionsLabel = new QLabel(customPage);
        bytecodeFileExtensionsLabel->setObjectName(QStringLiteral("bytecodeFileExtensionsLabel"));
        bytecodeFileExtensionsLabel->setEnabled(false);
        bytecodeFileExtensionsLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(bytecodeFileExtensionsLabel, 5, 0, 1, 1);

        bytecodeFileExtensions = new QLineEdit(customPage);
        bytecodeFileExtensions->setObjectName(QStringLiteral("bytecodeFileExtensions"));
        bytecodeFileExtensions->setEnabled(false);
        bytecodeFileExtensions->setMinimumSize(QSize(61, 0));
        bytecodeFileExtensions->setMaximumSize(QSize(81, 16777215));
        bytecodeFileExtensions->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(bytecodeFileExtensions, 5, 1, 1, 1);

        defaultCompilerArgumentsLabel = new QLabel(customPage);
        defaultCompilerArgumentsLabel->setObjectName(QStringLiteral("defaultCompilerArgumentsLabel"));
        defaultCompilerArgumentsLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(defaultCompilerArgumentsLabel, 6, 0, 1, 1);

        defaultCompilerArguments = new QLineEdit(customPage);
        defaultCompilerArguments->setObjectName(QStringLiteral("defaultCompilerArguments"));
        defaultCompilerArguments->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(defaultCompilerArguments, 6, 1, 1, 2);

        defaultInterpreterArgumentsLabel = new QLabel(customPage);
        defaultInterpreterArgumentsLabel->setObjectName(QStringLiteral("defaultInterpreterArgumentsLabel"));
        defaultInterpreterArgumentsLabel->setEnabled(false);
        defaultInterpreterArgumentsLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(defaultInterpreterArgumentsLabel, 7, 0, 1, 1);

        defaultInterpreterArguments = new QLineEdit(customPage);
        defaultInterpreterArguments->setObjectName(QStringLiteral("defaultInterpreterArguments"));
        defaultInterpreterArguments->setEnabled(false);
        defaultInterpreterArguments->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout_3->addWidget(defaultInterpreterArguments, 7, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        AddCompilerWizard->addPage(customPage);
        builtinCompilersPage = new QWizardPage();
        builtinCompilersPage->setObjectName(QStringLiteral("builtinCompilersPage"));
        verticalLayout_12 = new QVBoxLayout(builtinCompilersPage);
        verticalLayout_12->setSpacing(8);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        stepTwoLabel_2 = new QLabel(builtinCompilersPage);
        stepTwoLabel_2->setObjectName(QStringLiteral("stepTwoLabel_2"));
        stepTwoLabel_2->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepTwoLabel_2->setWordWrap(true);

        verticalLayout_12->addWidget(stepTwoLabel_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gccGroupBox = new QGroupBox(builtinCompilersPage);
        gccGroupBox->setObjectName(QStringLiteral("gccGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gccGroupBox->sizePolicy().hasHeightForWidth());
        gccGroupBox->setSizePolicy(sizePolicy1);
        gccGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        gccGroupBox->setTitle(QStringLiteral("gcc"));
        verticalLayout_2 = new QVBoxLayout(gccGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gccPath = new QLineEdit(gccGroupBox);
        gccPath->setObjectName(QStringLiteral("gccPath"));

        horizontalLayout_3->addWidget(gccPath);

        gccSelectButton = new QToolButton(gccGroupBox);
        gccSelectButton->setObjectName(QStringLiteral("gccSelectButton"));
        gccSelectButton->setText(QStringLiteral("..."));

        horizontalLayout_3->addWidget(gccSelectButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        gccO2Check = new QCheckBox(gccGroupBox);
        gccO2Check->setObjectName(QStringLiteral("gccO2Check"));
        gccO2Check->setStyleSheet(QStringLiteral("font-size:10pt;"));

        verticalLayout_2->addWidget(gccO2Check);


        gridLayout->addWidget(gccGroupBox, 0, 0, 1, 1);

        gppGroupBox = new QGroupBox(builtinCompilersPage);
        gppGroupBox->setObjectName(QStringLiteral("gppGroupBox"));
        sizePolicy1.setHeightForWidth(gppGroupBox->sizePolicy().hasHeightForWidth());
        gppGroupBox->setSizePolicy(sizePolicy1);
        gppGroupBox->setMaximumSize(QSize(16777215, 100));
        gppGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        gppGroupBox->setTitle(QStringLiteral("g++"));
        verticalLayout_7 = new QVBoxLayout(gppGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gppPath = new QLineEdit(gppGroupBox);
        gppPath->setObjectName(QStringLiteral("gppPath"));

        horizontalLayout_9->addWidget(gppPath);

        gppSelectButton = new QToolButton(gppGroupBox);
        gppSelectButton->setObjectName(QStringLiteral("gppSelectButton"));
        gppSelectButton->setText(QStringLiteral("..."));

        horizontalLayout_9->addWidget(gppSelectButton);


        verticalLayout_7->addLayout(horizontalLayout_9);

        gppO2Check = new QCheckBox(gppGroupBox);
        gppO2Check->setObjectName(QStringLiteral("gppO2Check"));
        gppO2Check->setStyleSheet(QStringLiteral("font-size:10pt;"));

        verticalLayout_7->addWidget(gppO2Check);


        gridLayout->addWidget(gppGroupBox, 0, 1, 1, 1);

        fpcGroupBox = new QGroupBox(builtinCompilersPage);
        fpcGroupBox->setObjectName(QStringLiteral("fpcGroupBox"));
        sizePolicy1.setHeightForWidth(fpcGroupBox->sizePolicy().hasHeightForWidth());
        fpcGroupBox->setSizePolicy(sizePolicy1);
        fpcGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        fpcGroupBox->setTitle(QStringLiteral("fpc"));
        verticalLayout_8 = new QVBoxLayout(fpcGroupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(8);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        fpcPath = new QLineEdit(fpcGroupBox);
        fpcPath->setObjectName(QStringLiteral("fpcPath"));

        horizontalLayout_10->addWidget(fpcPath);

        fpcSelectButton = new QToolButton(fpcGroupBox);
        fpcSelectButton->setObjectName(QStringLiteral("fpcSelectButton"));
        fpcSelectButton->setText(QStringLiteral("..."));

        horizontalLayout_10->addWidget(fpcSelectButton);


        verticalLayout_8->addLayout(horizontalLayout_10);

        fpcO2Check = new QCheckBox(fpcGroupBox);
        fpcO2Check->setObjectName(QStringLiteral("fpcO2Check"));
        fpcO2Check->setStyleSheet(QStringLiteral("font-size:10pt;"));

        verticalLayout_8->addWidget(fpcO2Check);


        gridLayout->addWidget(fpcGroupBox, 1, 0, 1, 1);

        fbcGroupBox = new QGroupBox(builtinCompilersPage);
        fbcGroupBox->setObjectName(QStringLiteral("fbcGroupBox"));
        fbcGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(fbcGroupBox->sizePolicy().hasHeightForWidth());
        fbcGroupBox->setSizePolicy(sizePolicy1);
        fbcGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        fbcGroupBox->setTitle(QStringLiteral("fbc"));
        verticalLayout_9 = new QVBoxLayout(fbcGroupBox);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        fbcPath = new QLineEdit(fbcGroupBox);
        fbcPath->setObjectName(QStringLiteral("fbcPath"));

        horizontalLayout_11->addWidget(fbcPath);

        fbcSelectButton = new QToolButton(fbcGroupBox);
        fbcSelectButton->setObjectName(QStringLiteral("fbcSelectButton"));
        fbcSelectButton->setText(QStringLiteral("..."));

        horizontalLayout_11->addWidget(fbcSelectButton);


        verticalLayout_9->addLayout(horizontalLayout_11);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        gridLayout->addWidget(fbcGroupBox, 1, 1, 1, 1);

        javaGroupBox = new QGroupBox(builtinCompilersPage);
        javaGroupBox->setObjectName(QStringLiteral("javaGroupBox"));
        javaGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(javaGroupBox->sizePolicy().hasHeightForWidth());
        javaGroupBox->setSizePolicy(sizePolicy1);
        javaGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        javaGroupBox->setTitle(QStringLiteral("Java"));
        verticalLayout_10 = new QVBoxLayout(javaGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        label = new QLabel(javaGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-size:10pt;"));
        label->setText(QStringLiteral("javac"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        javacPath = new QLineEdit(javaGroupBox);
        javacPath->setObjectName(QStringLiteral("javacPath"));

        gridLayout_2->addWidget(javacPath, 0, 1, 1, 1);

        javacSelectButton = new QToolButton(javaGroupBox);
        javacSelectButton->setObjectName(QStringLiteral("javacSelectButton"));
        javacSelectButton->setText(QStringLiteral("..."));

        gridLayout_2->addWidget(javacSelectButton, 0, 2, 1, 1);

        label_2 = new QLabel(javaGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size:10pt;"));
        label_2->setText(QStringLiteral("java"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        javaPath = new QLineEdit(javaGroupBox);
        javaPath->setObjectName(QStringLiteral("javaPath"));

        gridLayout_2->addWidget(javaPath, 1, 1, 1, 1);

        javaSelectButton = new QToolButton(javaGroupBox);
        javaSelectButton->setObjectName(QStringLiteral("javaSelectButton"));
        javaSelectButton->setText(QStringLiteral("..."));

        gridLayout_2->addWidget(javaSelectButton, 1, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(8);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        javaMemoryLimitLabel = new QLabel(javaGroupBox);
        javaMemoryLimitLabel->setObjectName(QStringLiteral("javaMemoryLimitLabel"));
        javaMemoryLimitLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_13->addWidget(javaMemoryLimitLabel);

        javaMemoryLimit = new QLineEdit(javaGroupBox);
        javaMemoryLimit->setObjectName(QStringLiteral("javaMemoryLimit"));
        javaMemoryLimit->setMinimumSize(QSize(50, 0));
        javaMemoryLimit->setMaximumSize(QSize(50, 16777215));
        javaMemoryLimit->setText(QStringLiteral("512"));

        horizontalLayout_13->addWidget(javaMemoryLimit);

        javaMbLabel = new QLabel(javaGroupBox);
        javaMbLabel->setObjectName(QStringLiteral("javaMbLabel"));
        javaMbLabel->setStyleSheet(QStringLiteral("font-size:10pt;"));

        horizontalLayout_13->addWidget(javaMbLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_13);


        gridLayout->addWidget(javaGroupBox, 2, 0, 1, 1);

        pythonGroupBox = new QGroupBox(builtinCompilersPage);
        pythonGroupBox->setObjectName(QStringLiteral("pythonGroupBox"));
        pythonGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(pythonGroupBox->sizePolicy().hasHeightForWidth());
        pythonGroupBox->setSizePolicy(sizePolicy1);
        pythonGroupBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        pythonGroupBox->setTitle(QStringLiteral("Python"));
        verticalLayout_11 = new QVBoxLayout(pythonGroupBox);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(8);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pythonPath = new QLineEdit(pythonGroupBox);
        pythonPath->setObjectName(QStringLiteral("pythonPath"));

        horizontalLayout_14->addWidget(pythonPath);

        pythonSelectButton = new QToolButton(pythonGroupBox);
        pythonSelectButton->setObjectName(QStringLiteral("pythonSelectButton"));
        pythonSelectButton->setText(QStringLiteral("..."));

        horizontalLayout_14->addWidget(pythonSelectButton);


        verticalLayout_11->addLayout(horizontalLayout_14);

        verticalSpacer_6 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        gridLayout->addWidget(pythonGroupBox, 2, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);

        AddCompilerWizard->addPage(builtinCompilersPage);
        finishPage = new QWizardPage();
        finishPage->setObjectName(QStringLiteral("finishPage"));
        verticalLayout_5 = new QVBoxLayout(finishPage);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        stepThreeLabel = new QLabel(finishPage);
        stepThreeLabel->setObjectName(QStringLiteral("stepThreeLabel"));
        stepThreeLabel->setStyleSheet(QStringLiteral("font-size:12pt;font-weight:bold;"));
        stepThreeLabel->setWordWrap(true);

        verticalLayout_5->addWidget(stepThreeLabel);

        logViewer = new QPlainTextEdit(finishPage);
        logViewer->setObjectName(QStringLiteral("logViewer"));
        logViewer->setMinimumSize(QSize(310, 220));
        logViewer->setStyleSheet(QStringLiteral("font-size:11pt;"));
        logViewer->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(logViewer);

        AddCompilerWizard->addPage(finishPage);

        retranslateUi(AddCompilerWizard);
        QObject::connect(builtinRadioButton, SIGNAL(toggled(bool)), compilersCollection, SLOT(setVisible(bool)));
        QObject::connect(gccCheck, SIGNAL(toggled(bool)), gccGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(gppCheck, SIGNAL(toggled(bool)), gppGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(fpcCheck, SIGNAL(toggled(bool)), fpcGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(fbcCheck, SIGNAL(toggled(bool)), fbcGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(jdkCheck, SIGNAL(toggled(bool)), javaGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(pythonCheck, SIGNAL(toggled(bool)), pythonGroupBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddCompilerWizard);
    } // setupUi

    void retranslateUi(QWizard *AddCompilerWizard)
    {
        AddCompilerWizard->setWindowTitle(QApplication::translate("AddCompilerWizard", "Add Compilers Wizard", nullptr));
        stepOneLabel->setText(QApplication::translate("AddCompilerWizard", "Step I: Choose whether you want to use built-in configuration for certain compilers or customize a compiler's configuration.", nullptr));
        customRadioButton->setText(QApplication::translate("AddCompilerWizard", "Custom Configuration", nullptr));
        builtinRadioButton->setText(QApplication::translate("AddCompilerWizard", "Built-in Configuration (Tick the compilers you want to add)", nullptr));
        stepTwoLabel->setText(QApplication::translate("AddCompilerWizard", "Step II: Select compiler's location to configure it.", nullptr));
        compilerNameLabel->setText(QApplication::translate("AddCompilerWizard", "Compiler Name", nullptr));
        compilerTypeLabel->setText(QApplication::translate("AddCompilerWizard", "Compiler Type", nullptr));
        typeSelect->setItemText(0, QApplication::translate("AddCompilerWizard", "Typical (Generate executable file)", nullptr));
        typeSelect->setItemText(1, QApplication::translate("AddCompilerWizard", "Interpretive (Generate byte-code file)", nullptr));
        typeSelect->setItemText(2, QApplication::translate("AddCompilerWizard", "Interpretive (Run source code directly)", nullptr));

        compilerLocationLabel->setText(QApplication::translate("AddCompilerWizard", "Compiler's Location", nullptr));
        interpreterLocationLabel->setText(QApplication::translate("AddCompilerWizard", "Interpreter's Location", nullptr));
        sourceFileExtensionsLabel->setText(QApplication::translate("AddCompilerWizard", "Source File Extensions", nullptr));
        bytecodeFileExtensionsLabel->setText(QApplication::translate("AddCompilerWizard", "Byte-code File Extensions", nullptr));
        defaultCompilerArgumentsLabel->setText(QApplication::translate("AddCompilerWizard", "Default Compiler's Arguments", nullptr));
        defaultInterpreterArgumentsLabel->setText(QApplication::translate("AddCompilerWizard", "Default Interpreter's Arguments", nullptr));
        stepTwoLabel_2->setText(QApplication::translate("AddCompilerWizard", "Step II: Select compilers' locations to configure them.", nullptr));
        gccO2Check->setText(QApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        gppO2Check->setText(QApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        fpcO2Check->setText(QApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        javaMemoryLimitLabel->setText(QApplication::translate("AddCompilerWizard", "Memory Limit", nullptr));
        javaMbLabel->setText(QApplication::translate("AddCompilerWizard", "MB", nullptr));
        stepThreeLabel->setText(QApplication::translate("AddCompilerWizard", "Step III: Check the result and finish the wizard.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCompilerWizard: public Ui_AddCompilerWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPILERWIZARD_H
