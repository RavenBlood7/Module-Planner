#include "createmodule.h"
#include "ui_createmodule.h"

createModule::createModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createModule)
{
    ui->setupUi(this);
}

createModule::~createModule()
{
    delete ui;
}

void createModule::on_pushButton_clicked()
{

}
