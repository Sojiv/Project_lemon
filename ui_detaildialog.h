/********************************************************************************
** Form generated from reading UI file 'detaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILDIALOG_H
#define UI_DETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DetailDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *detailViewer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *DetailDialog)
    {
        if (DetailDialog->objectName().isEmpty())
            DetailDialog->setObjectName(QStringLiteral("DetailDialog"));
        DetailDialog->resize(709, 520);
        verticalLayout = new QVBoxLayout(DetailDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        detailViewer = new QTextBrowser(DetailDialog);
        detailViewer->setObjectName(QStringLiteral("detailViewer"));
        detailViewer->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        detailViewer->setOpenLinks(false);

        verticalLayout->addWidget(detailViewer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(DetailDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DetailDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), DetailDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(DetailDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailDialog)
    {
        DetailDialog->setWindowTitle(QApplication::translate("DetailDialog", "Details", nullptr));
        closeButton->setText(QApplication::translate("DetailDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailDialog: public Ui_DetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILDIALOG_H
