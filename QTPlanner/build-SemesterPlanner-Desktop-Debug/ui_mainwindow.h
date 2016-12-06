/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionEdite;
    QAction *actionDelete;
    QAction *actionCreate_2;
    QAction *actionEdit;
    QAction *actionDelete_2;
    QAction *actionCreate_3;
    QAction *actionEdit_2;
    QAction *actionDelete_3;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(667, 364);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName(QStringLiteral("actionCreate"));
        actionEdite = new QAction(MainWindow);
        actionEdite->setObjectName(QStringLiteral("actionEdite"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionCreate_2 = new QAction(MainWindow);
        actionCreate_2->setObjectName(QStringLiteral("actionCreate_2"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionDelete_2 = new QAction(MainWindow);
        actionDelete_2->setObjectName(QStringLiteral("actionDelete_2"));
        actionCreate_3 = new QAction(MainWindow);
        actionCreate_3->setObjectName(QStringLiteral("actionCreate_3"));
        actionEdit_2 = new QAction(MainWindow);
        actionEdit_2->setObjectName(QStringLiteral("actionEdit_2"));
        actionDelete_3 = new QAction(MainWindow);
        actionDelete_3->setObjectName(QStringLiteral("actionDelete_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 260, 62, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 250, 91, 27));
        listWidget = new QListWidget(centralWidget);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 40, 241, 191));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 40, 31, 27));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(330, 40, 256, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 10, 62, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 10, 62, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 667, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCreate->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdite->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionCreate_2->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete_2->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionCreate_3->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdit_2->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete_3->setText(QApplication::translate("MainWindow", "Delete", 0));
        label->setText(QApplication::translate("MainWindow", "Outputs", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Do Stuffs", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("MainWindow", "<", 0));
        label_2->setText(QApplication::translate("MainWindow", "Navigation", 0));
        label_3->setText(QApplication::translate("MainWindow", "Details", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
