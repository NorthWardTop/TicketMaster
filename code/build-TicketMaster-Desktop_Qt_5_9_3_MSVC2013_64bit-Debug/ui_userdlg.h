/********************************************************************************
** Form generated from reading UI file 'userdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDLG_H
#define UI_USERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDlg
{
public:
    QPushButton *btn_logout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *date_useDate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cobox_Discount;
    QPushButton *btn_buy;
    QVBoxLayout *verticalLayout_2;
    QListView *listView;
    QPushButton *btn_refund;

    void setupUi(QDialog *UserDlg)
    {
        if (UserDlg->objectName().isEmpty())
            UserDlg->setObjectName(QStringLiteral("UserDlg"));
        UserDlg->resize(579, 520);
        btn_logout = new QPushButton(UserDlg);
        btn_logout->setObjectName(QStringLiteral("btn_logout"));
        btn_logout->setGeometry(QRect(230, 440, 75, 23));
        layoutWidget = new QWidget(UserDlg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 471, 321));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        date_useDate = new QDateEdit(layoutWidget);
        date_useDate->setObjectName(QStringLiteral("date_useDate"));

        horizontalLayout->addWidget(date_useDate);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cobox_Discount = new QComboBox(layoutWidget);
        cobox_Discount->setObjectName(QStringLiteral("cobox_Discount"));

        horizontalLayout_2->addWidget(cobox_Discount);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_buy = new QPushButton(layoutWidget);
        btn_buy->setObjectName(QStringLiteral("btn_buy"));

        verticalLayout->addWidget(btn_buy);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listView = new QListView(layoutWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);

        btn_refund = new QPushButton(layoutWidget);
        btn_refund->setObjectName(QStringLiteral("btn_refund"));

        verticalLayout_2->addWidget(btn_refund);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(UserDlg);

        QMetaObject::connectSlotsByName(UserDlg);
    } // setupUi

    void retranslateUi(QDialog *UserDlg)
    {
        UserDlg->setWindowTitle(QApplication::translate("UserDlg", "Dialog", Q_NULLPTR));
        btn_logout->setText(QApplication::translate("UserDlg", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("UserDlg", "\346\270\270\345\233\255\346\227\245\346\234\237:", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserDlg", "\344\274\230\346\203\240\351\200\211\351\241\271:", Q_NULLPTR));
        cobox_Discount->clear();
        cobox_Discount->insertItems(0, QStringList()
         << QApplication::translate("UserDlg", "\346\210\220\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("UserDlg", "\345\204\277\347\253\245\347\245\250", Q_NULLPTR)
         << QApplication::translate("UserDlg", "\350\200\201\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("UserDlg", "\345\233\242\344\275\223\347\245\250", Q_NULLPTR)
        );
        btn_buy->setText(QApplication::translate("UserDlg", "\347\241\256\350\256\244\350\264\255\347\245\250", Q_NULLPTR));
        btn_refund->setText(QApplication::translate("UserDlg", "\351\200\200\347\245\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDlg: public Ui_UserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDLG_H
