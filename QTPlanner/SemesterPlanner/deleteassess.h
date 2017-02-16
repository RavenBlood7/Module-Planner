#ifndef DELETEASSESS_H
#define DELETEASSESS_H

#include <QWidget>
#include "Navigator.h"

namespace Ui {
class deleteAssess;
}

class DeleteAssess : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteAssess(QWidget *parent = 0);
    explicit DeleteAssess(Navigator*, QWidget*, QWidget*, string, QWidget *parent = 0);
    ~DeleteAssess();

private slots:
    void on_btnOK_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deleteAssess *ui;
    Navigator* nav;
    string name;
    QWidget* wgtNav;
    QWidget* wgtDetail;
};

#endif // DELETEASSESS_H
