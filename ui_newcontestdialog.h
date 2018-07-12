/********************************************************************************
** Form generated from reading UI file 'newcontestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTESTDIALOG_H
#define UI_NEWCONTESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "newcontestwidget.h"

QT_BEGIN_NAMESPACE

class Ui_NewContestDialog
{
public:
    QVBoxLayout *verticalLayout;
    NewContestWidget *newContestWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewContestDialog)
    {
        if (NewContestDialog->objectName().isEmpty())
            NewContestDialog->setObjectName(QStringLiteral("NewContestDialog"));
        NewContestDialog->resize(450, 320);
        NewContestDialog->setMinimumSize(QSize(450, 320));
        verticalLayout = new QVBoxLayout(NewContestDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        newContestWidget = new NewContestWidget(NewContestDialog);
        newContestWidget->setObjectName(QStringLiteral("newContestWidget"));

        verticalLayout->addWidget(newContestWidget);

        buttonBox = new QDialogButtonBox(NewContestDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("font-size:10pt;"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewContestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewContestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewContestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewContestDialog);
    } // setupUi

    void retranslateUi(QDialog *NewContestDialog)
    {
        NewContestDialog->setWindowTitle(QApplication::translate("NewContestDialog", "New Contest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewContestDialog: public Ui_NewContestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTESTDIALOG_H
