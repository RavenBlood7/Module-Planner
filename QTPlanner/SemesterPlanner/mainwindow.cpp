#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    plan = new Planner();
    nav = plan->createNavigator();
    nav->displayList(ui->wgtNav);
   // createWindow = new createModule(nav);

    ui->lblName->hide();
    ui->lblMark->hide();
    ui->sedMark->hide();
    ui->lblTotal->hide();

    ui->lwgtAssess->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->lwgtAssess, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showContextMenu(QPoint)));
}

MainWindow::~MainWindow()
{
    delete plan;
   // nav->save();
    delete nav;
    delete ui;
   // delete createWindow;
}

void MainWindow::on_btnBack_clicked()
{
    nav->goBack();
    nav->displayList(ui->wgtNav);

    ui->lblName->hide();
    ui->lblMark->hide();
    ui->sedMark->hide();
    ui->lblTotal->hide();
    ui->wgtDetail->findChild<QListWidget*>("lwgtTitles")->clear();
    ui->wgtDetail->findChild<QListWidget*>("lwgtValues")->clear();
}

void MainWindow::on_lwgtAssess_doubleClicked(const QModelIndex &index)
{
    nav->enter(index.data().toString().toStdString());
    nav->displayList(ui->wgtNav);
}

void MainWindow::on_lwgtAssess_clicked(const QModelIndex &index)
{
    nav->listDetail(index.data().toString().toStdString(), ui->wgtDetail);
}

void MainWindow::on_sedMark_editingFinished()
{
    nav->updateMark(ui->lblName->text().toStdString() , (float) ui->sedMark->value());
    nav->displayList(ui->wgtNav);
    nav->listDetail(ui->lblName->text().toStdString(), ui->wgtDetail);
}

void MainWindow::showContextMenu(const QPoint &pos)
{
    QPoint globalPos = ui->lwgtAssess->mapToGlobal(pos);

    QMenu myMenu;
    myMenu.addAction("Edit", this, SLOT(editAssess()));
    myMenu.addAction("New", this, SLOT(createAssess()));
    myMenu.addAction("Delete", this, SLOT(deleteAssess()));

    myMenu.exec(globalPos);

}

void MainWindow::editAssess()
{
    EditAssess* edt = new EditAssess(ui->lwgtAssess->currentIndex().data().toString().toStdString(),
                                     nav, ui->wgtNav, ui->wgtDetail);
    edt->show();
}

void MainWindow::deleteAssess()
{
    DeleteAssess* del = new DeleteAssess(nav, ui->wgtNav, ui->wgtDetail,
        ui->wgtNav->findChild<QListWidget*>("lwgtAssess")->currentIndex().data().toString().toStdString());
    del->show();
}

void MainWindow::createAssess()
{
    createWindow = new createModule(nav, ui->wgtNav, ui->wgtDetail);
    createWindow->show();
}
