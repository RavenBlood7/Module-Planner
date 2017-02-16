#ifndef CREATEMODULE_H
#define CREATEMODULE_H

#include <QWidget>
#include "Navigator.h"

namespace Ui {
class createModule;
}

class createModule : public QWidget
{
    Q_OBJECT

public:
    explicit createModule(QWidget *parent = 0);
    explicit createModule(Navigator*, QWidget*, QWidget*, QWidget *parent = 0);
    ~createModule();

private slots:
    void displayProper(QString arg);

    void on_cbxChoice_currentIndexChanged(const QString &arg1);

    void on_btnCreate_clicked();

    void on_btnCancel_clicked();

private:
    Ui::createModule *ui;
    Navigator* nav;
    QWidget* wgtAssess;
    QWidget* wgtDetail;
};

#endif // CREATEMODULE_H
