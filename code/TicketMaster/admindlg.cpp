#include "admindlg.h"
#include "ui_admindlg.h"
#include <QSqlQuery>
#include "database.h"

AdminDlg::AdminDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDlg)
{
    ui->setupUi(this);

    //设置初始窗口特性
    ui->date_query->setDate(QDate::currentDate());//默认为当前日期
    ui->date_query->setCalendarPopup(true);//设置日期弹出式选择
    ui->date_query->setDisplayFormat("yyyy-MM-dd");//设置日期显示格式
    ui->edit_reslut->setReadOnly(true);//设置文本框只读
    ui->edit_reslut->setFont(QFont("Timers" , 28 ,  QFont::Bold));//设置文本框字体格式

    //信号与槽关联
    connect(ui->btn_query,SIGNAL(clicked(bool)),this,SLOT(onQuery()));//点击查询,响应onQuery()函数
    connect(ui->btn_clear,SIGNAL(clicked(bool)),this,SLOT(onClear()));//点击清除响应onClear()函数
    connect(ui->btn_logout,SIGNAL(clicked(bool)),this,SLOT(onLogout()));//点击退出登录响应onLogout()函数
}

AdminDlg::~AdminDlg()
{
    delete ui;
}

//槽:响应查询按钮
//根据控件的日期和查询类型和优惠选项统计各种类别的销售情况
void AdminDlg::onQuery()
{
    QSqlQuery query;
    QString sql;
    QString queryDate=ui->date_query->date().toString("yyyy-MM-dd");//设置日期格式
    QString dateType=ui->cobox_queryType->currentText();//查询的日期类型,按日或按月
    QString choose=ui->cobox_choose->currentText();//查询的优惠选项5个之一
    QString sales=0;//查询的总销售额
    QString number=0;//查询的总销售量
    if(dateType=="按日查询")
        sql="call procCntDaySold('"+queryDate+"','"+choose+"',"+"@outval1, @outval2);";
    else if(dateType=="按月查询")
        sql="call procCntMonthSold('"+queryDate.mid(5,2)+"','"+choose+"',@outval1, @outval2);";

    qDebug()<<sql;
    query.exec(sql);//执行sql
    query.exec("select @outval1, @outval2;");
    query.next();
    qDebug()<<query.value(0).toString()<<query.value(1).toString();
    sales="销售额:"+query.value(0).toString()+"\n";//取查询结果的第一行0列
    number="销售量:"+query.value(1).toString();//1列
    ui->edit_reslut->setText(sales+number);//设置文本框文本
}

//槽:点击退出登录,关闭本窗口,显示登录主窗口
void AdminDlg::onLogout()
{
    this->close();//关闭当前adminWnd窗口
    emit startMainWnd();//发送startMainWnd信号
}

//槽:点击清空, 可清空文本框
void AdminDlg::onClear()
{
    ui->edit_reslut->clear();//清空文本框内容
}



/*
 * QMYSQL Stored Procedure Support

MySQL 5 introduces stored procedure support at the SQL level, but no API to control IN, OUT and INOUT parameters. Therefore, parameters have to be set and read using SQL commands instead of QSqlQuery::bindValue().

Example stored procedure:

create procedure qtestproc (OUT param1 INT, OUT param2 INT)
BEGIN
    set param1 = 42;
    set param2 = 43;
END
Source code to access the OUT values:



QSqlQuery q;
q.exec("call qtestproc (@outval1, @outval2)");
q.exec("select @outval1, @outval2");
q.next();
qDebug() << q.value(0) << q.value(1); // outputs "42" and "43"
Note: @outval1 and @outval2 are variables local to the current connection and will not be affected by queries sent from another host or connection.
*/






