#ifndef ADMINDLG_H
#define ADMINDLG_H

#include <QDialog>

namespace Ui {
class AdminDlg;
}

class AdminDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDlg(QWidget *parent = 0);
    ~AdminDlg();
public slots:
    void onQuery();
    void onLogout();
    void onClear();
signals:
    void startMainWnd();
private:
    Ui::AdminDlg *ui;
};

#endif // ADMINDLG_H
