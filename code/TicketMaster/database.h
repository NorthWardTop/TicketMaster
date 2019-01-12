#ifndef DATABASE_H
#define DATABASE_H

#include "macro.h"
#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtSql/QSql>
#include <QDebug>


//根据数据库定义宏,连接数据库
extern int connDataBase();

//根据传入QSqlQuery和sql语句查询(游标,sql语句)
extern void sqlExec(QSqlQuery& query, QString sql, int col=0);

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
