#include "mainwindow.h"
#include <QApplication>
#include "admindlg.h"
#include <QCoreApplication>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QStringList>
#include <iostream>
#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtSql/QSql>
#include <QDebug>
#include "database.h"

int main(int argc, char *argv[])
{
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("ticketmaster");
//    db.setUserName("root");
//    db.setPassword("lyh2o16");
//    if(db.open())
//    {
//        qDebug() << "database is established!";
//    }
//    else
//    {
//        qDebug() << "build error!";
//        return false;
//    }


//    QStringList drivers = QSqlDatabase::drivers();
//    foreach(QString driver, drivers)
//        qDebug() << "\t "<< driver;
//    qDebug() << "End";

//    QSqlQuery query;
//    QString sql = "select * from fee;";
//    qDebug() << sql;
//    query.prepare(sql);

//    if(!query.exec())
//    {
//        qDebug()<<"query.lastError()";
//    }
//    else
//    {
//        while(query.next())
//          {
//              qDebug()<<query.value(0).toString()<<query.value(1).toString();
//          }
//    }

    connDataBase();

    QSqlQuery query;
    QString sql="select * from fee;";
    sqlExec(query,sql);


    return 0;
}
