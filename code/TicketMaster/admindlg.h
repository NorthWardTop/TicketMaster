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

private:
    Ui::AdminDlg *ui;
};

#endif // ADMINDLG_H
