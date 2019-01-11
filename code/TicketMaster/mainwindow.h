#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "macro.h"
#include "userdlg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void onLogin();

private:
    Ui::MainWindow *ui;

    AdminDlg adminWnd;  //管理窗口
    UserDlg userWnd;    //购票窗口

};

#endif // MAINWINDOW_H
