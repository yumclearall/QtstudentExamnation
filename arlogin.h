#ifndef ARLOGIN_H
#define ARLOGIN_H

#include <QWidget>
#include "stuexammysql.h"

namespace Ui {
class ArLogin;
}

class ArLogin : public QWidget
{
    Q_OBJECT

public:
    explicit ArLogin(QWidget *parent = nullptr);
    ~ArLogin();
    void init();

    //初始化界面
    //初始化学生信息界面
    void init_stuinfo(QString nm_id = "");
    //初始化学生成绩界面
    void init_stuexam(QString term = "",QString nm_id = "");
    //教师
    void init_tr(QString id_name = "");
    //班级
    void init_cls(QString id_name = "");
    //管理员
    void init_ar();

private slots:
    void on_treeWidget_clicked();

    void on_btn_tr_cancel_clicked();

    void on_btn_tr_src_clicked();

    void on_btn_stuinfo_canael_clicked();

    void on_btn_stuinfo_src_clicked();

    void on_btn_stuexam_cancel_clicked();

    void on_btn_stuexam_src_clicked();

    void on_btn_cls__cancel_clicked();

    void on_btn_cls_src_clicked();

    void on_btn_exit_clicked();

private:
    Ui::ArLogin *ui;

    //数据库连接类
    StuExamMysql *m_ptrStuExamMySql;

    //管理员表
    QList<ArLog> m_arloglist;
    //班级表
    QList<ClassInfo> m_clsinfolist;
    //学生表
    QList<StuInfo> m_stuinfolist;
    //学生登录表
    QList<StuLogin> m_stuloglist;
    //成绩表
    QList<StuExamInfo> m_stuexamlist;
    //教师表
    QList<TeacherInfo> m_trinfolist;
    //教师登录表
    QList<TeacherLog> m_trloglist;

};

#endif // ARLOGIN_H
