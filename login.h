#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "studentlogin.h"
#include "teacherlogin.h"
#include "arlogin.h"

#include "stuexammysql.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    void init();

    //登录类型
    enum LoginWay{
        stulog,
        ar_trlog
    };
    //选择登录类型
    int m_logWay;

    //学生登录类
    StuLogin m_stulog;
    //教师登录类
    TeacherLog m_trlog;
    //管理员登录类
    ArLog m_arlog;

    //

private slots:
    void on_btn_login_clicked();

    void on_btn_trlogin_clicked();

    void on_btn_stulogin_clicked();

    void on_btn_reset_clicked();

private:
    Ui::Login *ui;
    //学生登录界面
    StudentLogin m_widstulog;
    //教师登录界面
    TeacherLogin m_widtrlog;
    //管理员登录界面
    ArLogin m_widarlog;

    //数据库连接类
    StuExamMysql *m_ptrStuExamMySql;
};

#endif // LOGIN_H
