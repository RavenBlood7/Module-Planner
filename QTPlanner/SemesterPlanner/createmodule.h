#ifndef CREATEMODULE_H
#define CREATEMODULE_H

#include <QWidget>

namespace Ui {
class createModule;
}

class createModule : public QWidget
{
    Q_OBJECT

public:
    explicit createModule(QWidget *parent = 0);
    ~createModule();

private slots:
    void on_pushButton_clicked();

private:
    Ui::createModule *ui;
};

#endif // CREATEMODULE_H
