#include "deleteassess.h"
#include "ui_deleteassess.h"

DeleteAssess::DeleteAssess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteAssess)
{
    ui->setupUi(this);
}

DeleteAssess::DeleteAssess(Navigator* nav, QWidget* wgtNav, QWidget* wgtDetail, string name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteAssess)
{
    ui->setupUi(this);
    this->nav = nav;
    this->wgtNav = wgtNav;
    this->wgtDetail = wgtDetail;
    this->name = name;

    ui->lblSure->setText(QString::fromStdString("Are you sure you want to delete " + name + "?"));
}

DeleteAssess::~DeleteAssess()
{
    delete ui;
}

void DeleteAssess::on_btnOK_clicked()
{
    nav->deleteAssess(name);
    nav->displayList(wgtNav);
    wgtDetail->findChild<QListWidget*>("lwgtTitles")->clear();
    wgtDetail->findChild<QListWidget*>("lwgtValues")->clear();
    nav->save();
    this->close();
}

void DeleteAssess::on_pushButton_2_clicked()
{
    this->close();
}
