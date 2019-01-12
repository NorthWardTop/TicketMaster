/********************************************************************************
** Form generated from reading UI file 'admindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDLG_H
#define UI_ADMINDLG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDlg
{
public:
    QPushButton *btn_logout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *date_query;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cobox_queryType;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cobox_choose;
    QVBoxLayout *verticalLayout;
    QTextEdit *edit_reslut;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_query;
    QPushButton *btn_clear;

    void setupUi(QDialog *AdminDlg)
    {
        if (AdminDlg->objectName().isEmpty())
            AdminDlg->setObjectName(QStringLiteral("AdminDlg"));
        AdminDlg->resize(576, 400);
        btn_logout = new QPushButton(AdminDlg);
        btn_logout->setObjectName(QStringLiteral("btn_logout"));
        btn_logout->setGeometry(QRect(210, 320, 75, 23));
        widget = new QWidget(AdminDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 30, 398, 227));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        date_query = new QDateEdit(widget);
        date_query->setObjectName(QStringLiteral("date_query"));

        horizontalLayout->addWidget(date_query);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        cobox_queryType = new QComboBox(widget);
        cobox_queryType->setObjectName(QStringLiteral("cobox_queryType"));

        horizontalLayout_4->addWidget(cobox_queryType);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cobox_choose = new QComboBox(widget);
        cobox_choose->setObjectName(QStringLiteral("cobox_choose"));

        horizontalLayout_2->addWidget(cobox_choose);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        edit_reslut = new QTextEdit(widget);
        edit_reslut->setObjectName(QStringLiteral("edit_reslut"));

        verticalLayout->addWidget(edit_reslut);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_query = new QPushButton(widget);
        btn_query->setObjectName(QStringLiteral("btn_query"));

        horizontalLayout_3->addWidget(btn_query);

        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));

        horizontalLayout_3->addWidget(btn_clear);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        retranslateUi(AdminDlg);

        QMetaObject::connectSlotsByName(AdminDlg);
    } // setupUi

    void retranslateUi(QDialog *AdminDlg)
    {
        AdminDlg->setWindowTitle(QApplication::translate("AdminDlg", "Dialog", Q_NULLPTR));
        btn_logout->setText(QApplication::translate("AdminDlg", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("AdminDlg", "\346\227\245\346\234\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminDlg", "\346\227\266\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        cobox_queryType->clear();
        cobox_queryType->insertItems(0, QStringList()
         << QApplication::translate("AdminDlg", "\346\214\211\346\227\245\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\346\214\211\346\234\210\346\237\245\350\257\242", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("AdminDlg", "\344\274\230\346\203\240\351\200\211\351\241\271", Q_NULLPTR));
        cobox_choose->clear();
        cobox_choose->insertItems(0, QStringList()
         << QApplication::translate("AdminDlg", "\346\211\200\346\234\211", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\346\210\220\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\345\260\217\345\255\251\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\350\200\201\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\345\233\242\344\275\223\347\245\250", Q_NULLPTR)
        );
        btn_query->setText(QApplication::translate("AdminDlg", "\346\237\245\350\257\242", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("AdminDlg", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminDlg: public Ui_AdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDLG_H
