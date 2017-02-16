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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionModule;
    QAction *actionModule_2;
    QAction *actionAssessment_Group;
    QAction *actionAssessment_Opportunity;
    QAction *actionSave;
    QWidget *centralWidget;
    QWidget *wgtDetail;
    QLabel *lblName;
    QListWidget *lwgtTitles;
    QLabel *lblTotal;
    QDoubleSpinBox *sedMark;
    QListWidget *lwgtValues;
    QLabel *lblMark;
    QWidget *wgtNav;
    QListWidget *lwgtAssess;
    QLabel *lblNav;
    QPushButton *btnBack;
    QListWidget *lwgtPercent;
    QLabel *lblCurMod;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(674, 356);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/Raven-on-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
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
        actionModule = new QAction(MainWindow);
        actionModule->setObjectName(QStringLiteral("actionModule"));
        actionModule_2 = new QAction(MainWindow);
        actionModule_2->setObjectName(QStringLiteral("actionModule_2"));
        actionAssessment_Group = new QAction(MainWindow);
        actionAssessment_Group->setObjectName(QStringLiteral("actionAssessment_Group"));
        actionAssessment_Opportunity = new QAction(MainWindow);
        actionAssessment_Opportunity->setObjectName(QStringLiteral("actionAssessment_Opportunity"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        wgtDetail = new QWidget(centralWidget);
        wgtDetail->setObjectName(QStringLiteral("wgtDetail"));
        wgtDetail->setGeometry(QRect(360, 10, 261, 281));
        lblName = new QLabel(wgtDetail);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(10, 10, 241, 17));
        lwgtTitles = new QListWidget(wgtDetail);
        lwgtTitles->setObjectName(QStringLiteral("lwgtTitles"));
        lwgtTitles->setGeometry(QRect(10, 40, 141, 131));
        lblTotal = new QLabel(wgtDetail);
        lblTotal->setObjectName(QStringLiteral("lblTotal"));
        lblTotal->setGeometry(QRect(200, 210, 41, 17));
        sedMark = new QDoubleSpinBox(wgtDetail);
        sedMark->setObjectName(QStringLiteral("sedMark"));
        sedMark->setGeometry(QRect(100, 210, 71, 27));
        lwgtValues = new QListWidget(wgtDetail);
        lwgtValues->setObjectName(QStringLiteral("lwgtValues"));
        lwgtValues->setGeometry(QRect(150, 40, 101, 131));
        lblMark = new QLabel(wgtDetail);
        lblMark->setObjectName(QStringLiteral("lblMark"));
        lblMark->setGeometry(QRect(20, 210, 62, 17));
        wgtNav = new QWidget(centralWidget);
        wgtNav->setObjectName(QStringLiteral("wgtNav"));
        wgtNav->setGeometry(QRect(20, 10, 331, 281));
        lwgtAssess = new QListWidget(wgtNav);
        lwgtAssess->setObjectName(QStringLiteral("lwgtAssess"));
        lwgtAssess->setGeometry(QRect(30, 40, 211, 201));
        lblNav = new QLabel(wgtNav);
        lblNav->setObjectName(QStringLiteral("lblNav"));
        lblNav->setGeometry(QRect(30, 10, 91, 17));
        btnBack = new QPushButton(wgtNav);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(0, 40, 31, 27));
        lwgtPercent = new QListWidget(wgtNav);
        lwgtPercent->setObjectName(QStringLiteral("lwgtPercent"));
        lwgtPercent->setGeometry(QRect(240, 40, 71, 201));
        lblCurMod = new QLabel(wgtNav);
        lblCurMod->setObjectName(QStringLiteral("lblCurMod"));
        lblCurMod->setGeometry(QRect(190, 10, 121, 20));
        lblCurMod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 674, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionSave);
        menuNew->addAction(actionModule);
        menuNew->addAction(actionAssessment_Group);
        menuNew->addAction(actionAssessment_Opportunity);
        menuEdit->addAction(actionModule_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tuks:PlanIt", 0));
        actionCreate->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdite->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionCreate_2->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete_2->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionCreate_3->setText(QApplication::translate("MainWindow", "Create", 0));
        actionEdit_2->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionDelete_3->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionModule->setText(QApplication::translate("MainWindow", "Module", 0));
        actionModule_2->setText(QApplication::translate("MainWindow", "Module", 0));
        actionAssessment_Group->setText(QApplication::translate("MainWindow", "Assessment Group", 0));
        actionAssessment_Opportunity->setText(QApplication::translate("MainWindow", "Assessment Opportunity", 0));
        actionSave->setText(QApplication::translate("MainWindow", "save", 0));
        lblName->setText(QApplication::translate("MainWindow", "CurName:", 0));
        lblTotal->setText(QApplication::translate("MainWindow", "/total", 0));
        lblMark->setText(QApplication::translate("MainWindow", "Mark:", 0));
        lblNav->setText(QApplication::translate("MainWindow", "Navigation", 0));
        btnBack->setText(QApplication::translate("MainWindow", "<", 0));
        lblCurMod->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "new", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
