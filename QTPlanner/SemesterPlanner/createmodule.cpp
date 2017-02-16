#include "createmodule.h"
#include "ui_createmodule.h"

createModule::createModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createModule)
{
    ui->setupUi(this);
    displayProper(QString::fromStdString("Assessment Opportunity"));
}

createModule::createModule(Navigator* nav, QWidget* assess, QWidget* detail, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createModule)
{
    ui->setupUi(this);
    displayProper(QString::fromStdString("Assessment Opportunity"));
    this->nav = nav;
    this->wgtAssess = assess;
    this->wgtDetail = detail;
}

createModule::~createModule()
{
    delete ui;
}

void createModule::displayProper(QString arg)
{
    if (arg.toStdString() == "Module")
    {
        ui->wgtModule->show();
        ui->wgtAssessGroup->hide();
        ui->wgtAssess->hide();
    }
    else if (arg.toStdString() == "Assessment Group")
    {
        ui->wgtModule->hide();
        ui->wgtAssessGroup->show();
        ui->wgtAssess->hide();
    }
    else
    {
        ui->wgtModule->hide();
        ui->wgtAssessGroup->hide();
        ui->wgtAssess->show();
    }
}

void createModule::on_cbxChoice_currentIndexChanged(const QString &arg1)
{
    displayProper(arg1);
}

void createModule::on_btnCreate_clicked()
{
    if (ui->cbxChoice->currentText().toStdString() == "Module")
    {
        nav->createModule(ui->edtName->text().toStdString(), ui->cbxPeriod->currentText().toStdString(),
                          (float) ui->sbxExamEnt->value(), (float) ui->sbxPassMark->value());
    }
    else if (ui->cbxChoice->currentText().toStdString() == "Assessment Group")
    {
        nav->createAssessment(ui->edtName->text().toStdString(), (float) ui->sbxWeight->value(),
                              ui->edtSubNames->text().toStdString(), ui->sbxNumSubs->value());
    }
    else
    {
        nav->createOpportunity(ui->edtName->text().toStdString(), (float) ui->sbxWeight_2->value(),
                               (float) ui->sbxMark->value(), (float) ui->sbxTotal->value());
    }

    nav->displayList(wgtAssess);
    nav->listDetail(ui->edtName->text().toStdString(), wgtDetail);
    nav->save();
    this->close();
}

void createModule::on_btnCancel_clicked()
{
   // this->hide();
    this->close();
}
