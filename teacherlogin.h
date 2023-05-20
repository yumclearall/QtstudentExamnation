#ifndef TEACHERLOGIN_H
#define TEACHERLOGIN_H

#include <QWidget>
#include "stuexammysql.h"

namespace Ui {
class TeacherLogin;
}

class TeacherLogin : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherLogin(QWidget *parent = nullptr);
    ~TeacherLogin();
    void init();
    //教师登录类
    TeacherLog m_trlog;

    //初始化学生信息界面
    void init_stuinfo(QString term = "");
    //初始化学生成绩界面
    void init_stuexam(QString term = "",QString nm_id = "");
    //初始化教师信息界面
    void init_trinfo();

private slots:
    void on_treeWidget_clicked(const QModelIndex &index);

    void on_btn_want_exit_clicked();

    void on_btn_exit_clicked();

    void on_btn_cancel_clicked();

    void on_btn_search_clicked();

    void on_btn_reaccount_clicked();

    void on_btn_cel_clicked();

    void on_btn_src_clicked();

    void on_btn_m_exit_clicked();

private:
    Ui::TeacherLogin *ui;

    //数据库连接类
    StuExamMysql *m_ptrStuExamMySql;

    //生成班级类
    ClassInfo m_clsinfo;
    //生成教师类
    TeacherInfo m_trinfo;
    //生成学生成绩类 和学生类和学生登录类
    QList<StuExamInfo> m_stuexamlist;
    QList<StuInfo> m_stuinfolist;
    QList<StuLogin> m_stuloglist;

};

#endif // TEACHERLOGIN_H
