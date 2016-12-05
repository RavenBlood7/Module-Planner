/********************************************************************************
** Form generated from reading UI file 'createmodule.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEMODULE_H
#define UI_CREATEMODULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createModule
{
public:
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *createModule)
    {
        if (createModule->objectName().isEmpty())
            createModule->setObjectName(QStringLiteral("createModule"));
        createModule->resize(400, 300);
        pushButton_2 = new QPushButton(createModule);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 180, 91, 27));
        label_2 = new QLabel(createModule);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 91, 17));
        lineEdit_2 = new QLineEdit(createModule);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 60, 113, 27));
        lineEdit = new QLineEdit(createModule);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 30, 113, 27));
        lineEdit_3 = new QLineEdit(createModule);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 90, 113, 27));
        label = new QLabel(createModule);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 62, 17));
        label_4 = new QLabel(createModule);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 130, 62, 17));
        lineEdit_4 = new QLineEdit(createModule);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 120, 113, 27));
        pushButton = new QPushButton(createModule);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 180, 91, 27));
        label_3 = new QLabel(createModule);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 111, 17));

        retranslateUi(createModule);

        QMetaObject::connectSlotsByName(createModule);
    } // setupUi

    void retranslateUi(QWidget *createModule)
    {
        createModule->setWindowTitle(QApplication::translate("createModule", "Form", 0));
        pushButton_2->setText(QApplication::translate("createModule", "Back", 0));
        label_2->setText(QApplication::translate("createModule", "Time Period:", 0));
        lineEdit_2->setText(QApplication::translate("createModule", "S1", 0));
        lineEdit->setText(QApplication::translate("createModule", "DEF 111", 0));
        lineEdit_3->setText(QApplication::translate("createModule", "40", 0));
        label->setText(QApplication::translate("createModule", "Name:", 0));
        label_4->setText(QApplication::translate("createModule", "PassMarks:", 0));
        lineEdit_4->setText(QApplication::translate("createModule", "50", 0));
        pushButton->setText(QApplication::translate("createModule", "Create", 0));
        label_3->setText(QApplication::translate("createModule", "Exam Entrance:", 0));
    } // retranslateUi

};

namespace Ui {
    class createModule: public Ui_createModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEMODULE_H
