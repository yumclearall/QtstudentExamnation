/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *btn_reset;
    QPushButton *btn_stulogin;
    QPushButton *btn_login;
    QLabel *lb_account;
    QLineEdit *le_account;
    QLineEdit *le_password;
    QLabel *lb_password;
    QPushButton *btn_trlogin;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(600, 400);
        btn_reset = new QPushButton(Login);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));
        btn_reset->setGeometry(QRect(380, 320, 120, 40));
        btn_stulogin = new QPushButton(Login);
        btn_stulogin->setObjectName(QStringLiteral("btn_stulogin"));
        btn_stulogin->setGeometry(QRect(0, 0, 300, 80));
        btn_stulogin->setInputMethodHints(Qt::ImhNone);
        btn_stulogin->setAutoDefault(false);
        btn_login = new QPushButton(Login);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(120, 320, 120, 40));
        lb_account = new QLabel(Login);
        lb_account->setObjectName(QStringLiteral("lb_account"));
        lb_account->setGeometry(QRect(60, 150, 71, 31));
        le_account = new QLineEdit(Login);
        le_account->setObjectName(QStringLiteral("le_account"));
        le_account->setGeometry(QRect(122, 150, 381, 31));
        le_password = new QLineEdit(Login);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setGeometry(QRect(122, 230, 381, 31));
        le_password->setContextMenuPolicy(Qt::DefaultContextMenu);
        le_password->setEchoMode(QLineEdit::Password);
        lb_password = new QLabel(Login);
        lb_password->setObjectName(QStringLiteral("lb_password"));
        lb_password->setGeometry(QRect(60, 230, 71, 31));
        btn_trlogin = new QPushButton(Login);
        btn_trlogin->setObjectName(QStringLiteral("btn_trlogin"));
        btn_trlogin->setGeometry(QRect(300, 0, 300, 80));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("Login", "\351\207\215\347\275\256", Q_NULLPTR));
        btn_stulogin->setText(QApplication::translate("Login", "\345\255\246\347\224\237\347\231\273\345\275\225", Q_NULLPTR));
        btn_login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        lb_account->setText(QApplication::translate("Login", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        le_account->setInputMask(QString());
        le_account->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267...", Q_NULLPTR));
        le_password->setInputMask(QString());
        le_password->setText(QString());
        le_password->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201...", Q_NULLPTR));
        lb_password->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btn_trlogin->setText(QApplication::translate("Login", "\346\225\231\345\270\210/\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
