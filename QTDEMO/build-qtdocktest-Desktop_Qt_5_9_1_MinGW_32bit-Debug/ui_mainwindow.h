/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionfileopen;
    QAction *actionfiledelate;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_1;
    QWidget *dockWidgetContents;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QTableView *tableView;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_6;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 500);
        actionfileopen = new QAction(MainWindow);
        actionfileopen->setObjectName(QStringLiteral("actionfileopen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/Add_File.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/rec/Add_File.png"), QSize(), QIcon::Normal, QIcon::On);
        actionfileopen->setIcon(icon);
        actionfiledelate = new QAction(MainWindow);
        actionfiledelate->setObjectName(QStringLiteral("actionfiledelate"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/Delete_File.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral("rec/Delete_File.png"), QSize(), QIcon::Normal, QIcon::On);
        actionfiledelate->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_1 = new QDockWidget(MainWindow);
        dockWidget_1->setObjectName(QStringLiteral("dockWidget_1"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget_1->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_1);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        tableView = new QTableView(dockWidgetContents_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(-10, -20, 256, 192));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);
        dockWidget_4 = new QDockWidget(MainWindow);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidget_4->setFloating(false);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        dockWidget_4->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        dockWidget_5 = new QDockWidget(MainWindow);
        dockWidget_5->setObjectName(QStringLiteral("dockWidget_5"));
        dockWidget_5->setFloating(false);
        dockWidget_5->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        verticalLayoutWidget = new QWidget(dockWidgetContents_5);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 0, 160, 112));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        dockWidget_5->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_5);
        dockWidget_6 = new QDockWidget(MainWindow);
        dockWidget_6->setObjectName(QStringLiteral("dockWidget_6"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        dockWidget_6->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_6);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);
        dockWidget_6->raise();

        mainToolBar->addAction(actionfileopen);
        mainToolBar->addAction(actionfiledelate);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionfileopen->setText(QApplication::translate("MainWindow", "fileopen", Q_NULLPTR));
        actionfiledelate->setText(QApplication::translate("MainWindow", "filedelate", Q_NULLPTR));
        dockWidget_1->setWindowTitle(QApplication::translate("MainWindow", "COIN3d\350\247\206\345\233\276", Q_NULLPTR));
        dockWidget_2->setWindowTitle(QApplication::translate("MainWindow", "\344\273\277\347\234\237", Q_NULLPTR));
        dockWidget_4->setWindowTitle(QApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250\346\225\260\346\215\256", Q_NULLPTR));
        dockWidget_5->setWindowTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "hello", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "hello", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "hello", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "hello", Q_NULLPTR));
        dockWidget_6->setWindowTitle(QApplication::translate("MainWindow", "\351\224\241\347\204\212\345\212\237\350\203\275\345\214\272", Q_NULLPTR));
        dockWidget_3->setWindowTitle(QApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\351\200\232\350\256\257\345\214\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
