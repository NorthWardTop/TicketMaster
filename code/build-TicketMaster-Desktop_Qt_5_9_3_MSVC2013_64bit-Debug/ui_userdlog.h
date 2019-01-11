/********************************************************************************
** Form generated from reading UI file 'userdlog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDLOG_H
#define UI_USERDLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDlog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QDateEdit *date_useDate_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *cobox_discount_2;
    QListView *list_ticketInfo;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_OK;
    QPushButton *btn_logout;
    QPushButton *btn_refund;

    void setupUi(QWidget *UserDlog)
    {
        if (UserDlog->objectName().isEmpty())
            UserDlog->setObjectName(QStringLiteral("UserDlog"));
        UserDlog->resize(640, 500);
        verticalLayout_2 = new QVBoxLayout(UserDlog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(UserDlog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        date_useDate_2 = new QDateEdit(UserDlog);
        date_useDate_2->setObjectName(QStringLiteral("date_useDate_2"));

        horizontalLayout_8->addWidget(date_useDate_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(UserDlog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        cobox_discount_2 = new QComboBox(UserDlog);
        cobox_discount_2->setObjectName(QStringLiteral("cobox_discount_2"));

        horizontalLayout_7->addWidget(cobox_discount_2);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout);

        list_ticketInfo = new QListView(UserDlog);
        list_ticketInfo->setObjectName(QStringLiteral("list_ticketInfo"));

        horizontalLayout_2->addWidget(list_ticketInfo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_OK = new QPushButton(UserDlog);
        btn_OK->setObjectName(QStringLiteral("btn_OK"));

        horizontalLayout->addWidget(btn_OK);

        btn_logout = new QPushButton(UserDlog);
        btn_logout->setObjectName(QStringLiteral("btn_logout"));

        horizontalLayout->addWidget(btn_logout);

        btn_refund = new QPushButton(UserDlog);
        btn_refund->setObjectName(QStringLiteral("btn_refund"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        btn_refund->setPalette(palette);

        horizontalLayout->addWidget(btn_refund);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(UserDlog);

        QMetaObject::connectSlotsByName(UserDlog);
    } // setupUi

    void retranslateUi(QWidget *UserDlog)
    {
        UserDlog->setWindowTitle(QApplication::translate("UserDlog", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("UserDlog", "123", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserDlog", "123", Q_NULLPTR));
        btn_OK->setText(QApplication::translate("UserDlog", "confir", Q_NULLPTR));
        btn_logout->setText(QApplication::translate("UserDlog", "quite", Q_NULLPTR));
        btn_refund->setText(QApplication::translate("UserDlog", "123", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDlog: public Ui_UserDlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDLOG_H
