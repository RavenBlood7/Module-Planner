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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
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
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menuModule;
    QMenu *menuAssessment;
    QMenu *menuAssessment_Group;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(845, 544);
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 270, 91, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 62, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 20, 91, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 270, 151, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 310, 91, 27));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 40, 421, 221));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 25));
        menuModule = new QMenu(menuBar);
        menuModule->setObjectName(QStringLiteral("menuModule"));
        menuAssessment = new QMenu(menuBar);
        menuAssessment->setObjectName(QStringLiteral("menuAssessment"));
        menuAssessment_Group = new QMenu(menuBar);
        menuAssessment_Group->setObjectName(QStringLiteral("menuAssessment_Group"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuModule->menuAction());
        menuBar->addAction(menuAssessment->menuAction());
        menuBar->addAction(menuAssessment_Group->menuAction());
        menuModule->addSeparator();
        menuModule->addAction(actionCreate);
        menuModule->addAction(actionEdite);
        menuModule->addAction(actionDelete);
        menuAssessment->addAction(actionCreate_2);
        menuAssessment->addAction(actionEdit);
        menuAssessment->addAction(actionDelete_2);
        menuAssessment_Group->addAction(actionCreate_3);
        menuAssessment_Group->addAction(actionEdit_2);
        menuAssessment_Group->addAction(actionDelete_3);

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
        pushButton->setText(QApplication::translate("MainWindow", "change to", 0));
        label->setText(QApplication::translate("MainWindow", "Current:", 0));
        label_2->setText(QApplication::translate("MainWindow", "ModuleName", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "list", 0));
        menuModule->setTitle(QApplication::translate("MainWindow", "Module", 0));
        menuAssessment->setTitle(QApplication::translate("MainWindow", "Assessment", 0));
        menuAssessment_Group->setTitle(QApplication::translate("MainWindow", "Assessment Group", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
