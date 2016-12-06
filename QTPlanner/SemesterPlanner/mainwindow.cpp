#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    plan = new Planner();
    nav = plan->createNavigator();
    nav->displayList(ui->listWidget);
}

MainWindow::~MainWindow()
{
    delete plan;
    delete nav;
    delete ui;
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    ui->label->setText(index.data().toString());
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    ui->listWidget->addItem(ui->label->text());
}

void MainWindow::on_pushButton_2_clicked()
{
    nav->goBack();
    nav->displayList(ui->listWidget);
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    nav->enter(index.data().toString().toStdString());
    nav->displayList(ui->listWidget);
}
