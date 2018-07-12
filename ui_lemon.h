/********************************************************************************
** Form generated from reading UI file 'lemon.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEMON_H
#define UI_LEMON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resultviewer.h"
#include "summarytree.h"
#include "taskeditwidget.h"
#include "testcaseeditwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Lemon
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *exitAction;
    QAction *optionsAction;
    QAction *aboutAction;
    QAction *judgeAction;
    QAction *judgeAllAction;
    QAction *closeAction;
    QAction *setEnglishAction;
    QAction *addTasksAction;
    QAction *makeSelfTestAction;
    QAction *exportAction;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tasksTab;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *taskBox;
    QVBoxLayout *verticalLayout_2;
    SummaryTree *summary;
    QGroupBox *editBox;
    QVBoxLayout *verticalLayout_8;
    QStackedWidget *editWidget;
    QWidget *nullPage;
    TaskEditWidget *taskEdit;
    TestCaseEditWidget *testCaseEdit;
    QWidget *contestantsTab;
    QVBoxLayout *verticalLayout;
    ResultViewer *resultViewer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QPushButton *judgeButton;
    QPushButton *judgeAllButton;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *controlMenu;
    QMenu *toolsMenu;
    QMenu *languageMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *Lemon)
    {
        if (Lemon->objectName().isEmpty())
            Lemon->setObjectName(QStringLiteral("Lemon"));
        Lemon->resize(725, 510);
        Lemon->setMinimumSize(QSize(725, 510));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lemon->setWindowIcon(icon);
        newAction = new QAction(Lemon);
        newAction->setObjectName(QStringLiteral("newAction"));
        openAction = new QAction(Lemon);
        openAction->setObjectName(QStringLiteral("openAction"));
        exitAction = new QAction(Lemon);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        optionsAction = new QAction(Lemon);
        optionsAction->setObjectName(QStringLiteral("optionsAction"));
        aboutAction = new QAction(Lemon);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        judgeAction = new QAction(Lemon);
        judgeAction->setObjectName(QStringLiteral("judgeAction"));
        judgeAction->setEnabled(false);
        judgeAllAction = new QAction(Lemon);
        judgeAllAction->setObjectName(QStringLiteral("judgeAllAction"));
        judgeAllAction->setEnabled(false);
        closeAction = new QAction(Lemon);
        closeAction->setObjectName(QStringLiteral("closeAction"));
        setEnglishAction = new QAction(Lemon);
        setEnglishAction->setObjectName(QStringLiteral("setEnglishAction"));
        setEnglishAction->setText(QStringLiteral("English"));
        addTasksAction = new QAction(Lemon);
        addTasksAction->setObjectName(QStringLiteral("addTasksAction"));
        addTasksAction->setEnabled(false);
        makeSelfTestAction = new QAction(Lemon);
        makeSelfTestAction->setObjectName(QStringLiteral("makeSelfTestAction"));
        makeSelfTestAction->setEnabled(false);
        exportAction = new QAction(Lemon);
        exportAction->setObjectName(QStringLiteral("exportAction"));
        exportAction->setEnabled(false);
        centralWidget = new QWidget(Lemon);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        tasksTab = new QWidget();
        tasksTab->setObjectName(QStringLiteral("tasksTab"));
        horizontalLayout_2 = new QHBoxLayout(tasksTab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        taskBox = new QGroupBox(tasksTab);
        taskBox->setObjectName(QStringLiteral("taskBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskBox->sizePolicy().hasHeightForWidth());
        taskBox->setSizePolicy(sizePolicy);
        taskBox->setMinimumSize(QSize(176, 387));
        taskBox->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        verticalLayout_2 = new QVBoxLayout(taskBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        summary = new SummaryTree(taskBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        summary->setHeaderItem(__qtreewidgetitem);
        summary->setObjectName(QStringLiteral("summary"));
        summary->setContextMenuPolicy(Qt::DefaultContextMenu);
        summary->setStyleSheet(QStringLiteral("font-size: 11pt;"));
        summary->header()->setVisible(false);

        verticalLayout_2->addWidget(summary);


        horizontalLayout_2->addWidget(taskBox);

        editBox = new QGroupBox(tasksTab);
        editBox->setObjectName(QStringLiteral("editBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editBox->sizePolicy().hasHeightForWidth());
        editBox->setSizePolicy(sizePolicy1);
        editBox->setStyleSheet(QStringLiteral("font-size:11pt;"));
        verticalLayout_8 = new QVBoxLayout(editBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        editWidget = new QStackedWidget(editBox);
        editWidget->setObjectName(QStringLiteral("editWidget"));
        editWidget->setContextMenuPolicy(Qt::NoContextMenu);
        nullPage = new QWidget();
        nullPage->setObjectName(QStringLiteral("nullPage"));
        editWidget->addWidget(nullPage);
        taskEdit = new TaskEditWidget();
        taskEdit->setObjectName(QStringLiteral("taskEdit"));
        editWidget->addWidget(taskEdit);
        testCaseEdit = new TestCaseEditWidget();
        testCaseEdit->setObjectName(QStringLiteral("testCaseEdit"));
        editWidget->addWidget(testCaseEdit);

        verticalLayout_8->addWidget(editWidget);


        horizontalLayout_2->addWidget(editBox);

        tabWidget->addTab(tasksTab, QString());
        contestantsTab = new QWidget();
        contestantsTab->setObjectName(QStringLiteral("contestantsTab"));
        verticalLayout = new QVBoxLayout(contestantsTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        resultViewer = new ResultViewer(contestantsTab);
        resultViewer->setObjectName(QStringLiteral("resultViewer"));
        resultViewer->setStyleSheet(QStringLiteral("font-size:10pt;"));
        resultViewer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resultViewer->setTabKeyNavigation(false);
        resultViewer->setSelectionMode(QAbstractItemView::ExtendedSelection);
        resultViewer->setSelectionBehavior(QAbstractItemView::SelectRows);
        resultViewer->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        resultViewer->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        resultViewer->setShowGrid(false);
        resultViewer->setSortingEnabled(true);
        resultViewer->setCornerButtonEnabled(false);
        resultViewer->horizontalHeader()->setHighlightSections(false);
        resultViewer->verticalHeader()->setVisible(false);
        resultViewer->verticalHeader()->setDefaultSectionSize(25);
        resultViewer->verticalHeader()->setMinimumSectionSize(25);

        verticalLayout->addWidget(resultViewer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        refreshButton = new QPushButton(contestantsTab);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout_4->addWidget(refreshButton);

        judgeButton = new QPushButton(contestantsTab);
        judgeButton->setObjectName(QStringLiteral("judgeButton"));
        judgeButton->setEnabled(false);

        horizontalLayout_4->addWidget(judgeButton);

        judgeAllButton = new QPushButton(contestantsTab);
        judgeAllButton->setObjectName(QStringLiteral("judgeAllButton"));
        judgeAllButton->setEnabled(false);

        horizontalLayout_4->addWidget(judgeAllButton);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(contestantsTab, QString());

        horizontalLayout->addWidget(tabWidget);

        Lemon->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lemon);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 25));
        menuBar->setStyleSheet(QStringLiteral("font-size:11pt;"));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        controlMenu = new QMenu(menuBar);
        controlMenu->setObjectName(QStringLiteral("controlMenu"));
        toolsMenu = new QMenu(menuBar);
        toolsMenu->setObjectName(QStringLiteral("toolsMenu"));
        languageMenu = new QMenu(toolsMenu);
        languageMenu->setObjectName(QStringLiteral("languageMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QStringLiteral("helpMenu"));
        Lemon->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidget, summary);
        QWidget::setTabOrder(summary, refreshButton);
        QWidget::setTabOrder(refreshButton, judgeButton);
        QWidget::setTabOrder(judgeButton, judgeAllButton);
        QWidget::setTabOrder(judgeAllButton, resultViewer);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(controlMenu->menuAction());
        menuBar->addAction(toolsMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(newAction);
        fileMenu->addAction(openAction);
        fileMenu->addAction(closeAction);
        fileMenu->addSeparator();
        fileMenu->addAction(exitAction);
        controlMenu->addAction(judgeAction);
        controlMenu->addAction(judgeAllAction);
        controlMenu->addSeparator();
        controlMenu->addAction(addTasksAction);
        controlMenu->addAction(makeSelfTestAction);
        controlMenu->addAction(exportAction);
        toolsMenu->addAction(optionsAction);
        toolsMenu->addAction(languageMenu->menuAction());
        languageMenu->addAction(setEnglishAction);
        helpMenu->addAction(aboutAction);

        retranslateUi(Lemon);

        tabWidget->setCurrentIndex(0);
        editWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Lemon);
    } // setupUi

    void retranslateUi(QMainWindow *Lemon)
    {
        Lemon->setWindowTitle(QApplication::translate("Lemon", "Lemon", nullptr));
        newAction->setText(QApplication::translate("Lemon", "&New Contest", nullptr));
        openAction->setText(QApplication::translate("Lemon", "&Open Existing Contest", nullptr));
        exitAction->setText(QApplication::translate("Lemon", "E&xit", nullptr));
        optionsAction->setText(QApplication::translate("Lemon", "&Options", nullptr));
        aboutAction->setText(QApplication::translate("Lemon", "&About", nullptr));
        judgeAction->setText(QApplication::translate("Lemon", "&Judge Selected", nullptr));
        judgeAllAction->setText(QApplication::translate("Lemon", "Judge &All", nullptr));
        closeAction->setText(QApplication::translate("Lemon", "&Close Current Contest", nullptr));
        addTasksAction->setText(QApplication::translate("Lemon", "Add &Tasks Automatically", nullptr));
        makeSelfTestAction->setText(QApplication::translate("Lemon", "&Make Self-testing Folder", nullptr));
        exportAction->setText(QApplication::translate("Lemon", "&Export Result", nullptr));
        taskBox->setTitle(QApplication::translate("Lemon", "Summary", nullptr));
        editBox->setTitle(QApplication::translate("Lemon", "Detail", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tasksTab), QApplication::translate("Lemon", "Tasks", nullptr));
        refreshButton->setText(QApplication::translate("Lemon", "&Refresh", nullptr));
        judgeButton->setText(QApplication::translate("Lemon", "&Judge", nullptr));
        judgeAllButton->setText(QApplication::translate("Lemon", "Judge &All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(contestantsTab), QApplication::translate("Lemon", "Contestants", nullptr));
        fileMenu->setTitle(QApplication::translate("Lemon", "&File", nullptr));
        controlMenu->setTitle(QApplication::translate("Lemon", "&Control", nullptr));
        toolsMenu->setTitle(QApplication::translate("Lemon", "&Tools", nullptr));
        languageMenu->setTitle(QApplication::translate("Lemon", "UI Language", nullptr));
        helpMenu->setTitle(QApplication::translate("Lemon", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lemon: public Ui_Lemon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEMON_H
