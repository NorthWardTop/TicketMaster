#include "userdlg.h"
#include "ui_userdlg.h"
#include <QDebug>
#include "database.h"
#include <QSqlQueryModel>

#include <QMessageBox>

UserDlg::UserDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDlg)
{
    ui->setupUi(this);

    //设置初始窗口特性
    ui->date_useDate->setDate(QDate::currentDate());//默认为当前日期
    ui->date_useDate->setCalendarPopup(true);//设置日期弹出式选择
    ui->date_useDate->setDisplayFormat("yyyy-MM-dd");//设置日期显示格式
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中
    //ui->lab_money->setFont(QFont( "Timers" , 28 ,  QFont::Bold));
    //ui->lab_money->setFont(QFont( "微软雅黑" , 28 ,  QFont::Bold));
    ui->lab_money->setStyleSheet("background-color: rgb(250, 0, 0);font-size:60px;color:blue");
    //设置信号和槽
    connect(ui->btn_buy,SIGNAL(clicked(bool)),this,SLOT(onBuy()));    //点击buy,执行onBuy
    connect(ui->btn_refund,SIGNAL(clicked(bool)),this,SLOT(onRefund())); //点击refund,执行onRefund
    connect(ui->btn_logout,SIGNAL(clicked(bool)),this,SLOT(onLogout()));  //点击退出登录,执行关闭本窗口, 启动MainWnd
    connect(ui->cobox_Discount,SIGNAL(currentIndexChanged(int)),this,SLOT(onChooseChange()));    //当优惠选项改变时候改变下面金额

    //设置初始化操作
    this->updateList();//从数据库更新列表
    this->onChooseChange();//刷新金额
}

UserDlg::~UserDlg()
{
    delete ui;
}

//槽:userdlg窗口,点击购票,实现购票逻辑
void UserDlg::onBuy()
{
    QDate tmpDate=ui->date_useDate->date();
    QString useDate=tmpDate.toString("yyyy-MM-dd");//根据日期
    QString choose = ui->cobox_Discount->currentText();//根据优惠选项

    if(tmpDate>=QDate::currentDate())
    {
        //将执行SQL语句: call procBuyTicket(useDate,choose+)
        QString sql=  "call procBuyTicket('"+useDate+"','"+choose+"','user');";//调用购票存储过程
        QSqlQuery query;
        sqlExec(query,sql,3);
    }
    else
    {
        qDebug()<<"超过游览时间, 不能购票!";
        //弹出提示框
        QMessageBox::information(this, QString::fromLocal8Bit("Refund failed"),QString::fromLocal8Bit("No tickets can be purchased beyond the tour time."));
    }

    this->updateList();
}

//槽:userdlg窗口,点击退票,实现退票逻辑
void UserDlg::onRefund()
{
    //这两行只能获取选中的单元格数据
    //    QString id=ui->tableView->currentIndex().data().toString();
    //    qDebug()<<id;
    int curRow= ui->tableView->currentIndex().row();//获取选中行号
    QAbstractItemModel *modessl = ui->tableView->model();
    QModelIndex tmpIndex0 = modessl->index(curRow,0);//第0列(票号列)
    QModelIndex tmpIndex1 = modessl->index(curRow,1);//第1列(游览时间)

    QString ticketId=modessl->data(tmpIndex0).toString();//保存票号为string类型将加入sql查询
    QDate useDate=modessl->data(tmpIndex1).toDate();//保存使用日期为date类型将于当前日期比较

    //如果当前日期在使用日期之前,则退票
    if(QDate::currentDate() <= useDate)
    {
        QString sql="call procRefund("+ticketId+");";
        QSqlQuery query;
        qDebug()<<sql;
        sqlExec(query,sql);//执行查询
        this->updateList();
    }
    else
    {
        qDebug()<<"超过游览时间, 不能退票!";
        //弹出提示框
        QMessageBox::information(this, QString::fromLocal8Bit("Refund failed"),QString::fromLocal8Bit("No refund is allowed after the tour time."));
    }
}

//槽:点击退出登录,关闭userWnd,启动mainWnd
void UserDlg::onLogout()
{
    this->close();
    emit startMainWnd();//发送启动MainWnd的信号
}

//槽:当优惠选项改变时候, 查库改变相应的金额
void UserDlg::onChooseChange()
{
    QSqlQuery query;
    QString choose=ui->cobox_Discount->currentText();
    //select Fmoney from fee where Fchoose=choose;
    QString sql="select dMoney  from Discount where dChoose='"+choose+"';";
    sqlExec(query,sql,1);
    //qDebug()<<query.value(0).toString();
    query.first();
    ui->lab_money->setText("$ "+query.value(0).toString());
}

//从数据库更新列表控件
void UserDlg::updateList()
{
    //    QSqlQuery query;
    //    QString sql="select * from fee;";//这句将查询本用户的所有票信息
    //    sqlExec(query,sql,3);

    //添加表项到listView
    QString sql="select * from UserTicket;";
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql);
    qDebug()<<"更新list查询:"<<sql;
    model->setHeaderData(0, Qt::Horizontal, tr("票号"));
    model->setHeaderData(1, Qt::Horizontal, tr("游览时间"));
    model->setHeaderData(2, Qt::Horizontal, tr("优惠选项"));
    model->setHeaderData(2, Qt::Horizontal, tr("票xx"));

    ui->tableView->setModel(model);
    // ui->tableView->show();
}





