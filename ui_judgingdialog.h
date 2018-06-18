/********************************************************************************
** Form generated from reading UI file 'judgingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUDGINGDIALOG_H
#define UI_JUDGINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JudgingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *logViewer;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *JudgingDialog)
    {
        if (JudgingDialog->objectName().isEmpty())
            JudgingDialog->setObjectName(QStringLiteral("JudgingDialog"));
        JudgingDialog->setWindowModality(Qt::WindowModal);
        JudgingDialog->resize(448, 263);
        JudgingDialog->setMinimumSize(QSize(448, 263));
        verticalLayout = new QVBoxLayout(JudgingDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        logViewer = new QTextBrowser(JudgingDialog);
        logViewer->setObjectName(QStringLiteral("logViewer"));

        verticalLayout->addWidget(logViewer);

        progressBar = new QProgressBar(JudgingDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(JudgingDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(JudgingDialog);

        QMetaObject::connectSlotsByName(JudgingDialog);
    } // setupUi

    void retranslateUi(QDialog *JudgingDialog)
    {
        JudgingDialog->setWindowTitle(QApplication::translate("JudgingDialog", "Judging", nullptr));
        cancelButton->setText(QApplication::translate("JudgingDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JudgingDialog: public Ui_JudgingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUDGINGDIALOG_H
