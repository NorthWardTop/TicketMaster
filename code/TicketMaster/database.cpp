#include "database.h"
#include "macro.h"
#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtSql/QSql>
#include <QDebug>

//根据数据库定义宏,连接数据库
int connDataBase()
{
    int ret=-1;

    //打印可用数据库驱动
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
        qDebug() << "\t驱动可用:"<< driver;
    qDebug() << "End";

    QSqlDatabase db = QSqlDatabase::addDatabase(DB_DRIVERS);
    db.setHostName(HOST);
    db.setDatabaseName(DB_NAME);
    db.setUserName(DB_USERNAME);
    db.setPassword(DB_PASSWD);

    if(db.open())
    {
        qDebug() << "数据库打开成功!";
        ret=-1;
    }
    else
    {
        qDebug() << "数据库打开错误!";
        ret=0;
    }
    return ret;
}


//根据传入QSqlQuery和sql语句查询(游标,sql语句)
void sqlExec(QSqlQuery& query, QString sql, int col)
{
    qDebug() << "当前执行:"<<sql;
    query.prepare(sql);//指定sql语句
    if(!query.exec())//执行查询
    {
        qDebug()<<"执行错误";
       // qDebug()<<sqlError;
    }
    else
    {
        qDebug()<<"执行结果:";
        while(query.next())
        {
            for(int i=0;i<col;++i)
                qDebug()<<query.value(i).toString();
            qDebug()<<"\n";
        }
    }
}
