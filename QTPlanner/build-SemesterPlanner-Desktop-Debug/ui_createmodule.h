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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createModule
{
public:
    QPushButton *btnCancel;
    QLineEdit *edtName;
    QLabel *label;
    QPushButton *btnCreate;
    QWidget *wgtModule;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *cbxPeriod;
    QLabel *label_2;
    QDoubleSpinBox *sbxExamEnt;
    QDoubleSpinBox *sbxPassMark;
    QLabel *label_5;
    QComboBox *cbxChoice;
    QWidget *wgtAssessGroup;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *sbxNumSubs;
    QLabel *label_8;
    QLineEdit *edtSubNames;
    QDoubleSpinBox *sbxWeight;
    QWidget *wgtAssess;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *sbxTotal;
    QDoubleSpinBox *sbxMark;
    QDoubleSpinBox *sbxWeight_2;

    void setupUi(QWidget *createModule)
    {
        if (createModule->objectName().isEmpty())
            createModule->setObjectName(QStringLiteral("createModule"));
        createModule->resize(679, 439);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/Raven-on-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        createModule->setWindowIcon(icon);
        btnCancel = new QPushButton(createModule);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(170, 220, 91, 27));
        edtName = new QLineEdit(createModule);
        edtName->setObjectName(QStringLiteral("edtName"));
        edtName->setGeometry(QRect(160, 50, 111, 27));
        label = new QLabel(createModule);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 62, 17));
        btnCreate = new QPushButton(createModule);
        btnCreate->setObjectName(QStringLiteral("btnCreate"));
        btnCreate->setGeometry(QRect(50, 220, 91, 27));
        wgtModule = new QWidget(createModule);
        wgtModule->setObjectName(QStringLiteral("wgtModule"));
        wgtModule->setGeometry(QRect(30, 80, 251, 121));
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
        sbxExamEnt->setValue(40);
        sbxPassMark = new QDoubleSpinBox(wgtModule);
        sbxPassMark->setObjectName(QStringLiteral("sbxPassMark"));
        sbxPassMark->setGeometry(QRect(130, 70, 111, 27));
        sbxPassMark->setValue(50);
        label_5 = new QLabel(createModule);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 20, 62, 17));
        cbxChoice = new QComboBox(createModule);
        cbxChoice->setObjectName(QStringLiteral("cbxChoice"));
        cbxChoice->setGeometry(QRect(110, 10, 211, 27));
        wgtAssessGroup = new QWidget(createModule);
        wgtAssessGroup->setObjectName(QStringLiteral("wgtAssessGroup"));
        wgtAssessGroup->setGeometry(QRect(320, 220, 291, 131));
        label_6 = new QLabel(wgtAssessGroup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 91, 41));
        label_6->setWordWrap(true);
        label_7 = new QLabel(wgtAssessGroup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 50, 81, 17));
        sbxNumSubs = new QSpinBox(wgtAssessGroup);
        sbxNumSubs->setObjectName(QStringLiteral("sbxNumSubs"));
        sbxNumSubs->setGeometry(QRect(130, 70, 111, 27));
        sbxNumSubs->setMaximum(100);
        label_8 = new QLabel(wgtAssessGroup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 20, 91, 17));
        edtSubNames = new QLineEdit(wgtAssessGroup);
        edtSubNames->setObjectName(QStringLiteral("edtSubNames"));
        edtSubNames->setGeometry(QRect(130, 40, 113, 27));
        sbxWeight = new QDoubleSpinBox(wgtAssessGroup);
        sbxWeight->setObjectName(QStringLiteral("sbxWeight"));
        sbxWeight->setGeometry(QRect(130, 10, 111, 27));
        wgtAssess = new QWidget(createModule);
        wgtAssess->setObjectName(QStringLiteral("wgtAssess"));
        wgtAssess->setGeometry(QRect(320, 30, 351, 111));
        label_9 = new QLabel(wgtAssess);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 80, 62, 17));
        label_10 = new QLabel(wgtAssess);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 50, 111, 17));
        label_11 = new QLabel(wgtAssess);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 20, 91, 17));
        sbxTotal = new QDoubleSpinBox(wgtAssess);
        sbxTotal->setObjectName(QStringLiteral("sbxTotal"));
        sbxTotal->setGeometry(QRect(130, 70, 111, 27));
        sbxMark = new QDoubleSpinBox(wgtAssess);
        sbxMark->setObjectName(QStringLiteral("sbxMark"));
        sbxMark->setGeometry(QRect(130, 40, 111, 27));
        sbxWeight_2 = new QDoubleSpinBox(wgtAssess);
        sbxWeight_2->setObjectName(QStringLiteral("sbxWeight_2"));
        sbxWeight_2->setGeometry(QRect(130, 10, 111, 27));

        retranslateUi(createModule);

        QMetaObject::connectSlotsByName(createModule);
    } // setupUi

    void retranslateUi(QWidget *createModule)
    {
        createModule->setWindowTitle(QApplication::translate("createModule", "Form", 0));
        btnCancel->setText(QApplication::translate("createModule", "Cancel", 0));
        edtName->setText(QApplication::translate("createModule", "DEF 111", 0));
        label->setText(QApplication::translate("createModule", "Name:", 0));
        btnCreate->setText(QApplication::translate("createModule", "Create", 0));
        label_4->setText(QApplication::translate("createModule", "Pass Mark:", 0));
        label_3->setText(QApplication::translate("createModule", "Exam Entrance:", 0));
        cbxPeriod->clear();
        cbxPeriod->insertItems(0, QStringList()
         << QApplication::translate("createModule", "S1", 0)
         << QApplication::translate("createModule", "S2", 0)
         << QApplication::translate("createModule", "Year", 0)
         << QApplication::translate("createModule", "Q1", 0)
         << QApplication::translate("createModule", "Q2", 0)
         << QApplication::translate("createModule", "Q3", 0)
         << QApplication::translate("createModule", "Q4", 0)
         << QApplication::translate("createModule", "Other", 0)
        );
        label_2->setText(QApplication::translate("createModule", "Time Period:", 0));
        label_5->setText(QApplication::translate("createModule", "New:", 0));
        cbxChoice->clear();
        cbxChoice->insertItems(0, QStringList()
         << QApplication::translate("createModule", "Module", 0)
         << QApplication::translate("createModule", "Assessment Group", 0)
         << QApplication::translate("createModule", "Assessment Opportunity", 0)
        );
        cbxChoice->setCurrentText(QApplication::translate("createModule", "Module", 0));
        label_6->setText(QApplication::translate("createModule", "Number of Sub-Assessments:", 0));
        label_7->setText(QApplication::translate("createModule", "Sub Names:", 0));
        label_8->setText(QApplication::translate("createModule", "Weight:", 0));
        edtSubNames->setText(QString());
        label_9->setText(QApplication::translate("createModule", "Total:", 0));
        label_10->setText(QApplication::translate("createModule", "Mark:", 0));
        label_11->setText(QApplication::translate("createModule", "Weight:", 0));
    } // retranslateUi

};

namespace Ui {
    class createModule: public Ui_createModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEMODULE_H
