/********************************************************************************
** Form generated from reading UI file 'environmentvariablesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTVARIABLESDIALOG_H
#define UI_ENVIRONMENTVARIABLESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentVariablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *valueViewer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnvironmentVariablesDialog)
    {
        if (EnvironmentVariablesDialog->objectName().isEmpty())
            EnvironmentVariablesDialog->setObjectName(QStringLiteral("EnvironmentVariablesDialog"));
        EnvironmentVariablesDialog->resize(298, 196);
        EnvironmentVariablesDialog->setMinimumSize(QSize(298, 196));
        verticalLayout = new QVBoxLayout(EnvironmentVariablesDialog);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        valueViewer = new QTableWidget(EnvironmentVariablesDialog);
        if (valueViewer->columnCount() < 2)
            valueViewer->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        valueViewer->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        valueViewer->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        valueViewer->setObjectName(QStringLiteral("valueViewer"));
        valueViewer->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        valueViewer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        valueViewer->setSelectionMode(QAbstractItemView::SingleSelection);
        valueViewer->setSelectionBehavior(QAbstractItemView::SelectRows);
        valueViewer->horizontalHeader()->setDefaultSectionSize(80);
        valueViewer->horizontalHeader()->setHighlightSections(false);
        valueViewer->horizontalHeader()->setStretchLastSection(true);
        valueViewer->verticalHeader()->setVisible(false);
        valueViewer->verticalHeader()->setDefaultSectionSize(25);
        valueViewer->verticalHeader()->setMinimumSectionSize(25);

        verticalLayout->addWidget(valueViewer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(EnvironmentVariablesDialog);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        editButton = new QPushButton(EnvironmentVariablesDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setEnabled(false);

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(EnvironmentVariablesDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(false);

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EnvironmentVariablesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("font-size:10pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EnvironmentVariablesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnvironmentVariablesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnvironmentVariablesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnvironmentVariablesDialog);
    } // setupUi

    void retranslateUi(QDialog *EnvironmentVariablesDialog)
    {
        EnvironmentVariablesDialog->setWindowTitle(QApplication::translate("EnvironmentVariablesDialog", "Extra Environment Variables", nullptr));
        QTableWidgetItem *___qtablewidgetitem = valueViewer->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EnvironmentVariablesDialog", "Variable", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = valueViewer->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EnvironmentVariablesDialog", "Value", nullptr));
        addButton->setText(QApplication::translate("EnvironmentVariablesDialog", "&Add", nullptr));
        editButton->setText(QApplication::translate("EnvironmentVariablesDialog", "&Edit", nullptr));
        deleteButton->setText(QApplication::translate("EnvironmentVariablesDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentVariablesDialog: public Ui_EnvironmentVariablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTVARIABLESDIALOG_H
