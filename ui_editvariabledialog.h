/********************************************************************************
** Form generated from reading UI file 'editvariabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITVARIABLEDIALOG_H
#define UI_EDITVARIABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditVariableDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *variableNameLabel;
    QLineEdit *variableName;
    QLabel *variableValueLabel;
    QLineEdit *variableValue;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditVariableDialog)
    {
        if (EditVariableDialog->objectName().isEmpty())
            EditVariableDialog->setObjectName(QStringLiteral("EditVariableDialog"));
        EditVariableDialog->resize(325, 128);
        EditVariableDialog->setMinimumSize(QSize(325, 128));
        EditVariableDialog->setMaximumSize(QSize(325, 128));
        verticalLayout = new QVBoxLayout(EditVariableDialog);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(8);
        variableNameLabel = new QLabel(EditVariableDialog);
        variableNameLabel->setObjectName(QStringLiteral("variableNameLabel"));
        variableNameLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(variableNameLabel, 0, 0, 1, 1);

        variableName = new QLineEdit(EditVariableDialog);
        variableName->setObjectName(QStringLiteral("variableName"));
        variableName->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(variableName, 0, 1, 1, 1);

        variableValueLabel = new QLabel(EditVariableDialog);
        variableValueLabel->setObjectName(QStringLiteral("variableValueLabel"));
        variableValueLabel->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(variableValueLabel, 1, 0, 1, 1);

        variableValue = new QLineEdit(EditVariableDialog);
        variableValue->setObjectName(QStringLiteral("variableValue"));
        variableValue->setStyleSheet(QStringLiteral("font-size:11pt;"));

        gridLayout->addWidget(variableValue, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(EditVariableDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("font-size:10pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditVariableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditVariableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditVariableDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditVariableDialog);
    } // setupUi

    void retranslateUi(QDialog *EditVariableDialog)
    {
        EditVariableDialog->setWindowTitle(QApplication::translate("EditVariableDialog", "Dialog", nullptr));
        variableNameLabel->setText(QApplication::translate("EditVariableDialog", "Variable Name", nullptr));
        variableValueLabel->setText(QApplication::translate("EditVariableDialog", "Variable Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditVariableDialog: public Ui_EditVariableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITVARIABLEDIALOG_H
