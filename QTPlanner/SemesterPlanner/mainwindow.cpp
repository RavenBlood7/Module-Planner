#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testerModule.h"
#include "Module.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    oneMod = testModule();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete oneMod;
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString q = QString::fromStdString(oneMod->toString());
    ui->plainTextEdit->insertPlainText(q);

}
