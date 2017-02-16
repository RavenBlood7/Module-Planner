#ifndef EDITASSESS_H
#define EDITASSESS_H

#include <QWidget>
#include "Navigator.h"

namespace Ui {
class EditAssess;
}

class EditAssess : public QWidget
{
    Q_OBJECT

public:
    explicit EditAssess(QWidget *parent = 0);
    explicit EditAssess(string, Navigator*, QWidget*, QWidget*, QWidget *parent = 0);
    ~EditAssess();

private slots:
    void loadProper();

    void on_btnCancel_clicked();

    void on_btnOK_clicked();

    void on_sbxTotal_editingFinished();

private:
    Ui::EditAssess *ui;
    Navigator* nav;
    QWidget* wgtNav;
    QWidget* wgtDetail;
    string name;
};

#endif // EDITASSESS_H
