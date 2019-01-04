#include "admindlg.h"
#include "ui_admindlg.h"

AdminDlg::AdminDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDlg)
{
    ui->setupUi(this);
}

AdminDlg::~AdminDlg()
{
    delete ui;
}
