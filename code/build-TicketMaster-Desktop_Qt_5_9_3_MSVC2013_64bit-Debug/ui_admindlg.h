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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cobox_queryType;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *date_query;
    QPushButton *btn_currDate;
    QPushButton *pushButton_4;

    void setupUi(QDialog *AdminDlg)
    {
        if (AdminDlg->objectName().isEmpty())
            AdminDlg->setObjectName(QStringLiteral("AdminDlg"));
        AdminDlg->resize(576, 400);
        layoutWidget = new QWidget(AdminDlg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 181, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        cobox_queryType = new QComboBox(layoutWidget);
        cobox_queryType->setObjectName(QStringLiteral("cobox_queryType"));

        horizontalLayout_4->addWidget(cobox_queryType);

        layoutWidget1 = new QWidget(AdminDlg);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 190, 181, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        layoutWidget2 = new QWidget(AdminDlg);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 30, 258, 225));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget3 = new QWidget(AdminDlg);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 60, 201, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        date_query = new QDateEdit(layoutWidget3);
        date_query->setObjectName(QStringLiteral("date_query"));

        horizontalLayout->addWidget(date_query);

        btn_currDate = new QPushButton(layoutWidget3);
        btn_currDate->setObjectName(QStringLiteral("btn_currDate"));

        horizontalLayout->addWidget(btn_currDate);

        pushButton_4 = new QPushButton(AdminDlg);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 310, 75, 23));

        retranslateUi(AdminDlg);

        QMetaObject::connectSlotsByName(AdminDlg);
    } // setupUi

    void retranslateUi(QDialog *AdminDlg)
    {
        AdminDlg->setWindowTitle(QApplication::translate("AdminDlg", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminDlg", "\346\227\266\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        cobox_queryType->clear();
        cobox_queryType->insertItems(0, QStringList()
         << QApplication::translate("AdminDlg", "\346\214\211\346\227\245\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\346\214\211\346\234\210\346\237\245\350\257\242", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("AdminDlg", "\344\274\230\346\203\240\351\200\211\351\241\271", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminDlg", "\346\211\200\346\234\211", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\346\210\220\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\345\260\217\345\255\251\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\350\200\201\344\272\272\347\245\250", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\345\233\242\344\275\223\347\245\250", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("AdminDlg", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminDlg", "\346\270\205\347\251\272", Q_NULLPTR));
        label->setText(QApplication::translate("AdminDlg", "\346\227\245\346\234\237", Q_NULLPTR));
        btn_currDate->setText(QApplication::translate("AdminDlg", "\345\275\223\345\211\215\346\227\245\346\234\237", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdminDlg", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminDlg: public Ui_AdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDLG_H
