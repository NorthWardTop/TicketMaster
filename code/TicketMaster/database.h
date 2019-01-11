#ifndef DATABASE_H
#define DATABASE_H


#include "macro.h"
#include "macro.h"

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


    return ret;
}


//根据传入QSqlQuery和sql语句查询(游标,sql语句)
void sqlExec(QSqlQuery& query, QString sql, int col)
{
//    QSqlError sqlError;
//    sqlError=db.lastError();
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

#endif // DATABASE_H





//void MainWindow::on_pushButton_clicked()
//{
//    QSqlQuery query;
//    int id = ui->spinBox->value();
//    query.exec(QString("select name from student where id =%1")
//               .arg(id));
//    query.next();
//    QString name = query.value(0).toString();
//    qDebug() << name;
//}
