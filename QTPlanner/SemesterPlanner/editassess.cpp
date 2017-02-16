#include "editassess.h"
#include "ui_editassess.h"

EditAssess::EditAssess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditAssess)
{
    ui->setupUi(this);
}

EditAssess::EditAssess(string name, Navigator* nav, QWidget* wgtNav, QWidget* wgtDetail ,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditAssess)
{
    ui->setupUi(this);
    this->name = name;
    this->nav = nav;
    this->wgtNav = wgtNav;
    this->wgtDetail = wgtDetail;

    loadProper();
}

EditAssess::~EditAssess()
{
    delete ui;
}

void EditAssess::loadProper()
{
    ui->edtName->setText(QString::fromStdString(name));
    if (nav->isModule(name))
    {
        ui->wgtModule->show();
        ui->wgtAssessGroup->hide();
        ui->wgtAssess->hide();
        nav->loadEdit(name, ui->wgtModule);
    }
    else if (nav->isAssessment(name))
    {
        ui->wgtModule->hide();
        ui->wgtAssessGroup->show();
        ui->wgtAssess->hide();
        nav->loadEdit(name, ui->wgtAssessGroup);
    }
    else
    {
        ui->wgtModule->hide();
        ui->wgtAssessGroup->hide();
        ui->wgtAssess->show();
        nav->loadEdit(name, ui->wgtAssess);
    }
}

void EditAssess::on_btnCancel_clicked()
{
    this->close();
}

void EditAssess::on_btnOK_clicked()
{
    if (nav->isModule(name))
    {
        nav->editModule(name, ui->edtName->text().toStdString(), ui->cbxPeriod->currentData().toString().toStdString(),
                        (float) ui->sbxExamEnt->value(), (float) ui->sbxPassMark->value());
    }
    else if (nav->isAssessment(name))
    {
        nav->editAssessGroup(name, ui->edtName->text().toStdString(), (float) ui->sbxWeight->value());
    }
    else
    {
        nav->editAssess(name, ui->edtName->text().toStdString(), (float) ui->sbxWeight_2->value(), (float) ui->sbxMark->value(),
                        (float) ui->sbxTotal->value());
    }

    nav->displayList(wgtNav);
    nav->listDetail(ui->edtName->text().toStdString(), wgtDetail);
    nav->save();
    this->close();
}

void EditAssess::on_sbxTotal_editingFinished()
{
    ui->sbxMark->setMaximum(ui->sbxTotal->value());
}
