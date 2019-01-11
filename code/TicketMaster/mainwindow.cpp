#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //设置MainWindow初始特性

    //设置信号和槽
    connect(ui->btn_login,SIGNAL(clicked()),this,SLOT(onLogin()));    //点击login,执行onLogin
}

MainWindow::~MainWindow()
{
    delete ui;
}

//槽:主窗口,点击登录按钮,响应槽
void MainWindow::onLogin()
{
//    QString userName=this->ui->edit_user->text();

//    if(userName=="admin")   //只有一个管理员/营销员=admin,否则为用户
//    {
//        this->adminWnd.setWindowTitle(QString("营销员_admin"));
//        this->adminWnd.show(); //跳转管理窗口
//        this->close();  //关闭登录主窗口
//    }
//    else if(userName=="user")
//    {
//        //QString userTitle = QString("用户购票-%1").arg(userName);
//        this->userWnd.userName=userName;    //将用户名初始化
//        this->userWnd.setWindowTitle(QString("用户购票_")+userName);
//        this->userWnd.show(); //跳转用户购票窗口
//        this->close();  //关闭登录主窗口
//    }
//    else
//    {
//        this->ui->edit_user->setText(QString("用户不存在,请重新输入..."));
//    }


     this->userWnd.show(); //跳转用户购票窗口
}
