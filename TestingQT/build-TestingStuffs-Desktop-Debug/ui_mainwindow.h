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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionModule;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *listWidget;
    QWidget *widget;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QWidget *widget_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_5;
    QListWidget *listWidget_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(433, 248);
        MainWindow->setBaseSize(QSize(5, 5));
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(27, 9, 62);\n"
"alternate-background-color: rgb(220, 213, 226);"));
        actionModule = new QAction(MainWindow);
        actionModule->setObjectName(QStringLiteral("actionModule"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 169, 91, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 169, 201, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 9, 91, 17));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(230, 30, 141, 121));
        listWidget->setAutoFillBackground(false);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -1, 211, 231));
        widget->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(27, 9, 62, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 254, 178, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(254, 252, 115, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 125, 26, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(169, 167, 34, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(236, 205, 205, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush7);
        QBrush brush8(QColor(220, 213, 226, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        widget->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        widget->setFont(font);
        widget->setStyleSheet(QStringLiteral(""));
        listWidget_2 = new QListWidget(widget);
        QBrush brush10(QColor(241, 2, 2, 255));
        brush10.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem->setBackground(brush10);
        QBrush brush11(QColor(47, 226, 29, 255));
        brush11.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem1->setBackground(brush11);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 30, 181, 121));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(231, 190, 47, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(255, 231, 143, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(243, 210, 95, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(115, 95, 23, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(154, 127, 31, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush17(QColor(246, 187, 38, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush17);
        QBrush brush18(QColor(243, 222, 151, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        QBrush brush19(QColor(224, 15, 15, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush19);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        QBrush brush20(QColor(232, 200, 57, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush21(QColor(217, 217, 217, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        listWidget_2->setPalette(palette1);
        listWidget_2->setAutoFillBackground(false);
        listWidget_2->setStyleSheet(QLatin1String("color: rgb(225, 228, 228);\n"
"gridline-color: rgb(234, 37, 37);\n"
"selection-background-color: rgb(215, 7, 7);\n"
"selection-color: rgb(225, 5, 5);\n"
"background-color: rgb(17, 15, 114);\n"
"alternate-background-color: rgb(201, 0, 0);\n"
"border-right-color: rgba(255, 255, 255, 0);\n"
"border-top-color: rgba(255, 255, 255, 0);\n"
"border-bottom-color: rgba(255, 255, 255, 0);\n"
"border-left-color: rgb(203, 204, 214);\n"
"selection-color: rgb(250, 191, 26);"));
        listWidget_2->setFrameShape(QFrame::VLine);
        listWidget_2->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 62, 17));
        label_2->setStyleSheet(QLatin1String("color: rgb(239, 21, 21);\n"
"gridline-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 160, 171, 41));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 62, 17));
        spinBox = new QSpinBox(widget_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(60, 0, 49, 27));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 10, 62, 17));
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(370, 30, 51, 121));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 433, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuNew->addAction(actionModule);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionModule->setText(QApplication::translate("MainWindow", "Module", 0));
        pushButton->setText(QApplication::translate("MainWindow", "do stuff", 0));
        label_3->setText(QApplication::translate("MainWindow", "output", 0));
        label_4->setText(QApplication::translate("MainWindow", "List:", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "New Item", 0));
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "item1", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "item2", 0));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        label_2->setText(QApplication::translate("MainWindow", "CurName", 0));
        label->setText(QApplication::translate("MainWindow", "Mark", 0));
        label_5->setText(QApplication::translate("MainWindow", "/ total", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "new", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
