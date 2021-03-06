#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

    //void on_listWidget_itemPressed(QListWidgetItem *item);

    void showContextMenu(const QPoint&);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
