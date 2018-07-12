/********************************************************************************
** Form generated from reading UI file 'compilersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERSETTINGS_H
#define UI_COMPILERSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompilerSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QListWidget *compilerList;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QToolButton *moveUpButton;
    QToolButton *moveDownButton;
    QToolButton *addCompilerButton;
    QToolButton *deleteCompilerButton;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *compilerNameLabel;
    QLineEdit *compilerName;
    QLabel *sourceExtensionsLabel;
    QLineEdit *sourceExtensions;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *advancedButton;

    void setupUi(QWidget *CompilerSettings)
    {
        if (CompilerSettings->objectName().isEmpty())
            CompilerSettings->setObjectName(QStringLiteral("CompilerSettings"));
        CompilerSettings->resize(325, 352);
        CompilerSettings->setMinimumSize(QSize(325, 352));
        verticalLayout = new QVBoxLayout(CompilerSettings);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        compilerList = new QListWidget(CompilerSettings);
        compilerList->setObjectName(QStringLiteral("compilerList"));
        compilerList->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        compilerList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        compilerList->setSelectionMode(QAbstractItemView::SingleSelection);

        horizontalLayout_11->addWidget(compilerList);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        moveUpButton = new QToolButton(CompilerSettings);
        moveUpButton->setObjectName(QStringLiteral("moveUpButton"));
        moveUpButton->setMinimumSize(QSize(27, 27));
        moveUpButton->setMaximumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpButton->setIcon(icon);
        moveUpButton->setAutoRaise(false);
        moveUpButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(moveUpButton);

        moveDownButton = new QToolButton(CompilerSettings);
        moveDownButton->setObjectName(QStringLiteral("moveDownButton"));
        moveDownButton->setMinimumSize(QSize(27, 27));
        moveDownButton->setMaximumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/downarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownButton->setIcon(icon1);
        moveDownButton->setAutoRaise(false);
        moveDownButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(moveDownButton);

        addCompilerButton = new QToolButton(CompilerSettings);
        addCompilerButton->setObjectName(QStringLiteral("addCompilerButton"));
        addCompilerButton->setMinimumSize(QSize(27, 27));
        addCompilerButton->setMaximumSize(QSize(27, 27));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCompilerButton->setIcon(icon2);
        addCompilerButton->setAutoRaise(false);
        addCompilerButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(addCompilerButton);

        deleteCompilerButton = new QToolButton(CompilerSettings);
        deleteCompilerButton->setObjectName(QStringLiteral("deleteCompilerButton"));
        deleteCompilerButton->setMinimumSize(QSize(27, 27));
        deleteCompilerButton->setMaximumSize(QSize(27, 27));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/rod.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteCompilerButton->setIcon(icon3);
        deleteCompilerButton->setAutoRaise(false);
        deleteCompilerButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(deleteCompilerButton);

        verticalSpacer_3 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_11->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_11);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        compilerNameLabel = new QLabel(CompilerSettings);
        compilerNameLabel->setObjectName(QStringLiteral("compilerNameLabel"));
        compilerNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(compilerNameLabel, 0, 0, 1, 1);

        compilerName = new QLineEdit(CompilerSettings);
        compilerName->setObjectName(QStringLiteral("compilerName"));
        compilerName->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(compilerName, 0, 1, 1, 1);

        sourceExtensionsLabel = new QLabel(CompilerSettings);
        sourceExtensionsLabel->setObjectName(QStringLiteral("sourceExtensionsLabel"));
        sourceExtensionsLabel->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(sourceExtensionsLabel, 1, 0, 1, 1);

        sourceExtensions = new QLineEdit(CompilerSettings);
        sourceExtensions->setObjectName(QStringLiteral("sourceExtensions"));
        sourceExtensions->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(sourceExtensions, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        advancedButton = new QPushButton(CompilerSettings);
        advancedButton->setObjectName(QStringLiteral("advancedButton"));

        horizontalLayout->addWidget(advancedButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CompilerSettings);

        QMetaObject::connectSlotsByName(CompilerSettings);
    } // setupUi

    void retranslateUi(QWidget *CompilerSettings)
    {
        CompilerSettings->setWindowTitle(QApplication::translate("CompilerSettings", "Form", nullptr));
        moveUpButton->setText(QString());
        moveDownButton->setText(QString());
        addCompilerButton->setText(QString());
        deleteCompilerButton->setText(QString());
        compilerNameLabel->setText(QApplication::translate("CompilerSettings", "Compiler Name", nullptr));
        sourceExtensionsLabel->setText(QApplication::translate("CompilerSettings", "Source Extensions", nullptr));
        advancedButton->setText(QApplication::translate("CompilerSettings", "&Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompilerSettings: public Ui_CompilerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERSETTINGS_H
