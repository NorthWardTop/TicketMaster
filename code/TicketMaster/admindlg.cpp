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
    connect(ui->btn_query,SIGNAL(clicked(bool)),this,SLOT(onQuery()));
    //connect(ui->btn_clear,SIGNAL(clicked(bool)),this,SLOT(ui->edit_reslut->clear()));


    connect(ui->btn_clear,SIGNAL(clicked(bool)),this,SLOT(onClear()));
    connect(ui->btn_logout,SIGNAL(clicked(bool)),this,SLOT(onLogout()));
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
    QString queryDate=ui->date_query->date().toString("yyyy-MM-dd");
    QString dateType=ui->cobox_queryType->currentText();
    QString choose=ui->cobox_choose->currentText();

    if(dateType=="按日查询")
        sql="call procCntDaySold('"+queryDate+"','"+choose+"');";
    else if(dateType=="按月查询")
        sql="call procCntMonthSold('"+queryDate.mid(5,2)+"','"+choose+"');";

    sqlExec(query,sql,2);
    QString sales="销售额:"+query.value(0).toString()+"\n";
    QString number="销售量:"+query.value(1).toString();

    ui->edit_reslut->setText(sales+number);
}

//槽:点击退出登录,关闭本窗口,显示登录主窗口
void AdminDlg::onLogout()
{
    this->close();
    emit startMainWnd();
}

//槽:点击清空, 可清空文本框
void AdminDlg::onClear()
{
    ui->edit_reslut->clear();
}






