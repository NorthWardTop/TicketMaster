#ifndef USERDLG_H
#define USERDLG_H

#include <QDialog>
#include <Qtsql/QSqlQuery>

namespace Ui {
class UserDlg;
}

class UserDlg : public QDialog
{
    Q_OBJECT

public:
    explicit UserDlg(QWidget *parent = 0);
    ~UserDlg();
public:
    QString userName;//保存用户名
public:
    void updateList();
signals:
    void startMainWnd();
public slots:
    void onBuy();
    void onRefund();
    void onLogout();
    void onChooseChange();
private:
    Ui::UserDlg *ui;
};

#endif // USERDLG_H
