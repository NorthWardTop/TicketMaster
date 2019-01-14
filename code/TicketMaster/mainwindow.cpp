#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置MainWindow初始特性

    //设置信号和槽
    connect(ui->btn_login,SIGNAL(clicked()),this,SLOT(onLogin()));    //点击login,执行onLogin
    connect(ui->btn_cancel,SIGNAL(clicked(bool)),this,SLOT(close()));   //点击取消,关闭窗口
    connect(&userWnd,SIGNAL(startMainWnd()),this,SLOT(show()));         //来自userWnd窗口的信号,显示主窗口
    connect(&adminWnd,SIGNAL(startMainWnd()),this,SLOT(show()));         //来自adminWnd窗口的信号,显示主窗口

 //   this->setStyleSheet("background-image:url(:/km1.jpg");
//    QPixmap pixmap = QPixmap("./1.png").scaled(window->size());
//    QPalette palette(window->palette());
//    palette.setBrush(QPalette::Background, QBrush(pixmap));
//    this->setPalette(palette)
}

MainWindow::~MainWindow()
{
    delete ui;
}

//槽:主窗口,点击登录按钮,响应槽
void MainWindow::onLogin()
{
    QString userName=this->ui->edit_user->text();

    if(userName=="admin")   //只有一个管理员/营销员=admin,否则为用户
    {
        this->adminWnd.setWindowTitle(QString("营销员_admin"));
        this->adminWnd.show(); //跳转管理窗口
        this->close();  //关闭登录主窗口
    }
    else if(userName=="user")
    {
        this->userWnd.userName=userName;    //将用户名初始化
        this->userWnd.setWindowTitle(QString("用户购票_")+userName);
        this->userWnd.show(); //跳转用户购票窗口
        this->close();  //关闭登录主窗口
    }
    else
    {   //弹出消息, 用户名不存在
        QMessageBox::information(this,"user does not exist","User does not exist, please re-enter!");
    }
}


//void MainWindow::paintEvent(QPaintEvent *event)
//{
//   QPainter painter(this);
//   painter.drawPixmap(0,0,width(),height(),QPixmap("./res/km1.jpg"));
//}

