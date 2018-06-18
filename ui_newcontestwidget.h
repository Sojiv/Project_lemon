/********************************************************************************
** Form generated from reading UI file 'newcontestwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTESTWIDGET_H
#define UI_NEWCONTESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewContestWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *contestTitle;
    QLabel *label_2;
    QLineEdit *savingName;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *contestPath;
    QToolButton *selectButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NewContestWidget)
    {
        if (NewContestWidget->objectName().isEmpty())
            NewContestWidget->setObjectName(QStringLiteral("NewContestWidget"));
        NewContestWidget->resize(392, 290);
        verticalLayout = new QVBoxLayout(NewContestWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(15);
        label = new QLabel(NewContestWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        contestTitle = new QLineEdit(NewContestWidget);
        contestTitle->setObjectName(QStringLiteral("contestTitle"));

        gridLayout->addWidget(contestTitle, 0, 1, 1, 1);

        label_2 = new QLabel(NewContestWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        savingName = new QLineEdit(NewContestWidget);
        savingName->setObjectName(QStringLiteral("savingName"));

        gridLayout->addWidget(savingName, 1, 1, 1, 1);

        label_3 = new QLabel(NewContestWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        contestPath = new QLineEdit(NewContestWidget);
        contestPath->setObjectName(QStringLiteral("contestPath"));

        horizontalLayout->addWidget(contestPath);

        selectButton = new QToolButton(NewContestWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setText(QStringLiteral("..."));

        horizontalLayout->addWidget(selectButton);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(NewContestWidget);

        QMetaObject::connectSlotsByName(NewContestWidget);
    } // setupUi

    void retranslateUi(QWidget *NewContestWidget)
    {
        NewContestWidget->setWindowTitle(QApplication::translate("NewContestWidget", "Form", nullptr));
        label->setText(QApplication::translate("NewContestWidget", "Contest Title", nullptr));
        label_2->setText(QApplication::translate("NewContestWidget", "Saving Name", nullptr));
        label_3->setText(QApplication::translate("NewContestWidget", "Contest Path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewContestWidget: public Ui_NewContestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTESTWIDGET_H
