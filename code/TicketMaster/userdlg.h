#ifndef USERDLG_H
#define USERDLG_H

#include <QDialog>

namespace Ui {
class userdlg;
}

class userdlg : public QDialog
{
    Q_OBJECT

public:
    explicit userdlg(QWidget *parent = 0);
    ~userdlg();

private:
    Ui::userdlg *ui;
};

#endif // USERDLG_H
