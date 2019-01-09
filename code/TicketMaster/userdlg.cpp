#include "userdlg.h"
#include "ui_userdlg.h"

userdlg::userdlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userdlg)
{
    ui->setupUi(this);
}

userdlg::~userdlg()
{
    delete ui;
}
