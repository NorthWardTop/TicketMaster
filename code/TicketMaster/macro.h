#ifndef MACRO_H
#define MACRO_H

//通用文件包含




//数据库信息相关宏
#define DB_DRIVERS  "QMYSQL"
#define HOST        "127.0.0.1"
#define DB_NAME     "ticketmaster"
#define DB_USERNAME "root"
#define DB_PASSWD   "lyh2o16"

//数据库存储过程
#define PROC_BuyTicket          "call procBuyTicket"
#define PROC_Refund             procRefund
#define PROC_CntDaySold         procCntDaySold
#define PROC_CntMonthSold       procCntMonthSold
#define PROC_CntDayChoose       procCntDayChoose

//数据库固定操作宏
#define SELECT

//全局变量


#endif // MACRO_H
