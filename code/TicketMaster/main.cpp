
#include <QApplication>
#include <QDebug>
#include "mainwindow.h"

#include "database.h"

#include <QSqlRecord>
//全部变量---主窗口



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
    connDataBase();
//#if 0

//    QSqlQuery query;
//   // sqlExec(query,"select * from fee;",3);
//    query.prepare("call num_from_employee();");
//    //query.bindValue(0, "va", QSql::Out);
//    bool ret = query.exec();
//    qDebug() << ret;
//    ////
//    int fieldNo = 111;
//    fieldNo = query.record().indexOf("ccount");
//     qDebug() << fieldNo;
//          while (query.next()) {
//              QString country = query.value(fieldNo).toString();
//               qDebug() << country;
//               qDebug() << "enter while";
//              //doSomething(country);
//          }
//    //////
//    QMap<QString, QVariant> mapValues = query.boundValues();
//      qDebug() << mapValues;
//    int i = query.boundValue(0).toInt(); // i is 65
//    qDebug()<<"i"<<i;
//    query.next();
//    qDebug() << query.value(0) << query.value(1);
//#endif
// #if 1   //bbbb



//   // Source code to access the OUT values:

//    QSqlQuery q;
//    q.exec("call qtestproc (@outval1, @outval2)");
//    q.exec("select @outval1, @outval2");
//    q.next();
//    qDebug() << q.value(0) << q.value(1); // outputs "42" and "43"

// #endif//bbbb

    MainWindow mainWnd;
    mainWnd.show();
    return a.exec();


}
