#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Planner.h"
#include "Navigator.h"
#include "createmodule.h"
#include "deleteassess.h"
#include "editassess.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Planner* plan;
    Navigator* nav;
    createModule* createWindow;

private slots:

    void on_btnBack_clicked();

    void on_lwgtAssess_doubleClicked(const QModelIndex &index);

    void on_lwgtAssess_clicked(const QModelIndex &index);

    void on_sedMark_editingFinished();

    void showContextMenu(const QPoint&);

    void editAssess();
    void deleteAssess();
    void createAssess();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
