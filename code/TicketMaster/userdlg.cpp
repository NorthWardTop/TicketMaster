#include "userdlg.h"
#include "ui_userdlg.h"
#include <QDebug>
#include "database.h"


UserDlg::UserDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDlg)
{
    ui->setupUi(this);

    //设置初始窗口特性
    ui->date_useDate->setDate(QDate::currentDate());//默认为当前日期
    ui->date_useDate->setCalendarPopup(true);
    ui->date_useDate->setDisplayFormat("yyyy-MM-dd");

    //设置信号和槽
    connect(ui->btn_buy,SIGNAL(clicked()),this,SLOT(onBuy()));    //点击buy,执行onBuy
}

UserDlg::~UserDlg()
{
    delete ui;
}

//槽:userdlg窗口,点击购票,实现购票逻辑(
void UserDlg::onBuy()
{
    QDate tmpDate=ui->date_useDate->date();
    QString useDate=tmpDate.toString("yyyy-MM-dd");
    QString choose = ui->cobox_Discount->currentText();
    //将执行SQL语句: call procBuyTicket(useDate,choose+)
    QString sql=  "call procBuyTicket("+useDate+","+choose+")";
    QSqlQuery query;
    sqlExec(query,sql,3);

    updateList();
}

void UserDlg::updateList()
{
    QSqlQuery query;
    QString sql="select * from fee;";
    sqlExec(query,sql,3);

    //添加表项到listView
}

