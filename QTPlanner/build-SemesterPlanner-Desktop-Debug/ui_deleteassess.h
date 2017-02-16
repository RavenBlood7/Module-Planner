/********************************************************************************
** Form generated from reading UI file 'deleteassess.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEASSESS_H
#define UI_DELETEASSESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteAssess
{
public:
    QLabel *lblSure;
    QPushButton *btnOK;
    QPushButton *pushButton_2;

    void setupUi(QWidget *deleteAssess)
    {
        if (deleteAssess->objectName().isEmpty())
            deleteAssess->setObjectName(QStringLiteral("deleteAssess"));
        deleteAssess->resize(327, 84);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/Raven-on-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAssess->setWindowIcon(icon);
        lblSure = new QLabel(deleteAssess);
        lblSure->setObjectName(QStringLiteral("lblSure"));
        lblSure->setGeometry(QRect(60, 0, 201, 41));
        lblSure->setAlignment(Qt::AlignCenter);
        lblSure->setWordWrap(true);
        lblSure->setMargin(0);
        btnOK = new QPushButton(deleteAssess);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(40, 50, 91, 27));
        pushButton_2 = new QPushButton(deleteAssess);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 50, 91, 27));

        retranslateUi(deleteAssess);

        QMetaObject::connectSlotsByName(deleteAssess);
    } // setupUi

    void retranslateUi(QWidget *deleteAssess)
    {
        deleteAssess->setWindowTitle(QApplication::translate("deleteAssess", "Form", 0));
        lblSure->setText(QApplication::translate("deleteAssess", "TextLabel", 0));
        btnOK->setText(QApplication::translate("deleteAssess", "OK", 0));
        pushButton_2->setText(QApplication::translate("deleteAssess", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteAssess: public Ui_deleteAssess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEASSESS_H
