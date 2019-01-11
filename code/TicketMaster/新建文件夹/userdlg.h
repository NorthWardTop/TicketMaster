#ifndef USERDLG_H
#define USERDLG_H

#include <QDialog>

namespace Ui {
class UserDlg;
}

class UserDlg : public QDialog
{
    Q_OBJECT

public:
    explicit UserDlg(QWidget *parent = 0);
    ~UserDlg();

private:
    Ui::UserDlg *ui;
};

#endif // USERDLG_H
