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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDlg
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AdminDlg)
    {
        if (AdminDlg->objectName().isEmpty())
            AdminDlg->setObjectName(QStringLiteral("AdminDlg"));
        AdminDlg->resize(585, 511);
        layoutWidget = new QWidget(AdminDlg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 160, 181, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_4->addWidget(comboBox_2);

        textEdit = new QTextEdit(AdminDlg);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(360, 150, 104, 71));
        lineEdit = new QLineEdit(AdminDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(360, 270, 113, 20));
        plainTextEdit = new QPlainTextEdit(AdminDlg);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(440, 360, 104, 71));
        widget = new QWidget(AdminDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(23, 80, 181, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        widget1 = new QWidget(AdminDlg);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 220, 181, 41));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        widget2 = new QWidget(AdminDlg);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 300, 181, 41));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        retranslateUi(AdminDlg);

        QMetaObject::connectSlotsByName(AdminDlg);
    } // setupUi

    void retranslateUi(QDialog *AdminDlg)
    {
        AdminDlg->setWindowTitle(QApplication::translate("AdminDlg", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminDlg", "\346\227\266\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AdminDlg", "\346\214\211\346\227\245\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("AdminDlg", "\346\214\211\346\234\210\346\237\245\350\257\242", Q_NULLPTR)
        );
        label->setText(QApplication::translate("AdminDlg", "\350\276\223\345\205\245\346\227\245\346\234\237", Q_NULLPTR));
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
        pushButton_2->setText(QApplication::translate("AdminDlg", "\345\275\223\346\227\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminDlg: public Ui_AdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDLG_H
