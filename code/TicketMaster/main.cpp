
#include <QApplication>
#include <QDebug>
#include "mainwindow.h"

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

//    connDataBase();

//    QSqlQuery query;
//    QString sql="select * from fee;";
//    sqlExec(query,sql,2);

    QApplication a(argc, argv);
    MainWindow mainWnd;
    connDataBase();
    QSqlQuery query;
   // sqlExec(query,"select * from fee;",3);
    mainWnd.show();


    return a.exec();


}
