#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->listWidget, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showContextMenu(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //ui->widget->findChild();
  //  ui->widget->setContextMenuPolicy(Qt::CustomContextMenu);
    
  //  QMenu *menu = new QMenu(ui->centralWidget);
  //  menu->addAction(new QAction("Action", this));
  //  menu->popup(mouseGrabber()->pos(), new QAction("Action2", this));
  //  menu->exec();
    ui->label_3->setText("Something Happened!");
}


void MainWindow::on_tableWidget_clicked(const QModelIndex &index)
{
   // ui->tableWidget->setItem(0,0, QString::fromStdString("hello"));
   // ui->tableWidget->item(index.row(), index.column())->setData(0 ,QString::fromStdString("hello"));
   // ui->tableWidget->currentItem()->setData(Qt::DisplayRole ,QString::fromStdString("hello"));
 //   ui->tableWidget->item(index.row(), index.column())->setData(Qt::DisplayRole,QString::fromStdString("hello"));









   // ui->tableWidget->item(index.row(), index.col());
}

void MainWindow::showContextMenu(const QPoint &pos)
{
    QPoint globalPos = ui->listWidget->mapToGlobal(pos);

    QMenu myMenu;
    myMenu.addAction("Edit", this, SLOT(on_pushButton_clicked()));
    myMenu.addAction("New", this, SLOT(on_pushButton_clicked()));
    myMenu.addAction("Delete", this, SLOT(on_pushButton_clicked()));

    myMenu.exec(globalPos);

}


