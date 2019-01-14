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
