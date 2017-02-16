/********************************************************************************
** Form generated from reading UI file 'editassess.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITASSESS_H
#define UI_EDITASSESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAssess
{
public:
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QLineEdit *edtName;
    QWidget *wgtAssess;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *sbxWeight_2;
    QDoubleSpinBox *sbxMark;
    QDoubleSpinBox *sbxTotal;
    QLabel *label;
    QWidget *wgtAssessGroup;
    QLabel *label_8;
    QDoubleSpinBox *sbxWeight;
    QWidget *wgtModule;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *cbxPeriod;
    QLabel *label_2;
    QDoubleSpinBox *sbxExamEnt;
    QDoubleSpinBox *sbxPassMark;

    void setupUi(QWidget *EditAssess)
    {
        if (EditAssess->objectName().isEmpty())
            EditAssess->setObjectName(QStringLiteral("EditAssess"));
        EditAssess->resize(295, 251);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/Raven-on-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditAssess->setWindowIcon(icon);
        btnOK = new QPushButton(EditAssess);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(30, 200, 91, 27));
        btnCancel = new QPushButton(EditAssess);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(150, 200, 91, 27));
        edtName = new QLineEdit(EditAssess);
        edtName->setObjectName(QStringLiteral("edtName"));
        edtName->setGeometry(QRect(90, 50, 171, 27));
        wgtAssess = new QWidget(EditAssess);
        wgtAssess->setObjectName(QStringLiteral("wgtAssess"));
        wgtAssess->setGeometry(QRect(0, 80, 351, 111));
        label_9 = new QLabel(wgtAssess);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 80, 62, 17));
        label_10 = new QLabel(wgtAssess);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 50, 111, 17));
        label_11 = new QLabel(wgtAssess);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 20, 91, 17));
        sbxWeight_2 = new QDoubleSpinBox(wgtAssess);
        sbxWeight_2->setObjectName(QStringLiteral("sbxWeight_2"));
        sbxWeight_2->setGeometry(QRect(130, 10, 111, 27));
        sbxWeight_2->setMaximum(1000);
        sbxMark = new QDoubleSpinBox(wgtAssess);
        sbxMark->setObjectName(QStringLiteral("sbxMark"));
        sbxMark->setGeometry(QRect(130, 40, 111, 27));
        sbxMark->setMaximum(1000);
        sbxTotal = new QDoubleSpinBox(wgtAssess);
        sbxTotal->setObjectName(QStringLiteral("sbxTotal"));
        sbxTotal->setGeometry(QRect(130, 70, 111, 27));
        sbxTotal->setMaximum(10000);
        label = new QLabel(EditAssess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 62, 17));
        wgtAssessGroup = new QWidget(EditAssess);
        wgtAssessGroup->setObjectName(QStringLiteral("wgtAssessGroup"));
        wgtAssessGroup->setGeometry(QRect(0, 80, 291, 51));
        label_8 = new QLabel(wgtAssessGroup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 20, 91, 17));
        sbxWeight = new QDoubleSpinBox(wgtAssessGroup);
        sbxWeight->setObjectName(QStringLiteral("sbxWeight"));
        sbxWeight->setGeometry(QRect(130, 10, 111, 27));
        sbxWeight->setMaximum(1000);
        wgtModule = new QWidget(EditAssess);
        wgtModule->setObjectName(QStringLiteral("wgtModule"));
        wgtModule->setGeometry(QRect(0, 80, 251, 121));
        label_4 = new QLabel(wgtModule);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 81, 17));
        label_3 = new QLabel(wgtModule);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 111, 17));
        cbxPeriod = new QComboBox(wgtModule);
        cbxPeriod->setObjectName(QStringLiteral("cbxPeriod"));
        cbxPeriod->setGeometry(QRect(130, 10, 111, 27));
        label_2 = new QLabel(wgtModule);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 91, 17));
        sbxExamEnt = new QDoubleSpinBox(wgtModule);
        sbxExamEnt->setObjectName(QStringLiteral("sbxExamEnt"));
        sbxExamEnt->setGeometry(QRect(130, 40, 111, 27));
        sbxExamEnt->setMaximum(100);
        sbxPassMark = new QDoubleSpinBox(wgtModule);
        sbxPassMark->setObjectName(QStringLiteral("sbxPassMark"));
        sbxPassMark->setGeometry(QRect(130, 70, 111, 27));

        retranslateUi(EditAssess);

        QMetaObject::connectSlotsByName(EditAssess);
    } // setupUi

    void retranslateUi(QWidget *EditAssess)
    {
        EditAssess->setWindowTitle(QApplication::translate("EditAssess", "Form", 0));
        btnOK->setText(QApplication::translate("EditAssess", "OK", 0));
        btnCancel->setText(QApplication::translate("EditAssess", "Cancel", 0));
        edtName->setText(QApplication::translate("EditAssess", "DEF 111", 0));
        label_9->setText(QApplication::translate("EditAssess", "Total:", 0));
        label_10->setText(QApplication::translate("EditAssess", "Mark:", 0));
        label_11->setText(QApplication::translate("EditAssess", "Weight:", 0));
        label->setText(QApplication::translate("EditAssess", "Name:", 0));
        label_8->setText(QApplication::translate("EditAssess", "Weight:", 0));
        label_4->setText(QApplication::translate("EditAssess", "Pass Mark:", 0));
        label_3->setText(QApplication::translate("EditAssess", "Exam Entrance:", 0));
        cbxPeriod->clear();
        cbxPeriod->insertItems(0, QStringList()
         << QApplication::translate("EditAssess", "S1", 0)
         << QApplication::translate("EditAssess", "S2", 0)
         << QApplication::translate("EditAssess", "Year", 0)
         << QApplication::translate("EditAssess", "Q1", 0)
         << QApplication::translate("EditAssess", "Q2", 0)
         << QApplication::translate("EditAssess", "Q3", 0)
         << QApplication::translate("EditAssess", "Q4", 0)
         << QApplication::translate("EditAssess", "Other", 0)
        );
        label_2->setText(QApplication::translate("EditAssess", "Time Period:", 0));
    } // retranslateUi

};

namespace Ui {
    class EditAssess: public Ui_EditAssess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITASSESS_H
