#include "mainwindow.h"
#include <QApplication>
#include "admindlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("登录到售票系统");
   // w.show();
    AdminDlg admin;
    admin.setWindowTitle("营业员查询");
    admin.show();

    return a.exec();
}
