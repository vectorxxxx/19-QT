/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_N;
    QMenu *menu_E;
    QMenu *menu_B;
    QMenu *menu_D;
    QMenu *menuAnalyze;
    QMenu *menu_T;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(814, 467);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QStringLiteral("newAction"));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QStringLiteral("openAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 814, 21));
        menu_N = new QMenu(menuBar);
        menu_N->setObjectName(QStringLiteral("menu_N"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_B = new QMenu(menuBar);
        menu_B->setObjectName(QStringLiteral("menu_B"));
        menu_D = new QMenu(menuBar);
        menu_D->setObjectName(QStringLiteral("menu_D"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QStringLiteral("menuAnalyze"));
        menu_T = new QMenu(menuBar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_N->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_B->menuAction());
        menuBar->addAction(menu_D->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuBar->addAction(menu_T->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_N->addAction(newAction);
        menu_N->addAction(openAction);
        menu_N->addAction(saveAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        newAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        saveAction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&S)", nullptr));
        menu_N->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_B->setTitle(QApplication::translate("MainWindow", "\346\236\204\345\273\272(&B)", nullptr));
        menu_D->setTitle(QApplication::translate("MainWindow", "\350\260\203\350\257\225(D)", nullptr));
        menuAnalyze->setTitle(QApplication::translate("MainWindow", "Analyze", nullptr));
        menu_T->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267(&T)", nullptr));
        menu_W->setTitle(QApplication::translate("MainWindow", "\346\216\247\344\273\266(&W)", nullptr));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
