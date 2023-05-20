#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QWidget>
#include "stuexammysql.h"

namespace Ui {
class StudentLogin;
}

class StudentLogin : public QWidget
{
    Q_OBJECT

public:
    explicit StudentLogin(QWidget *parent = nullptr);
    ~StudentLogin();
    //初始化
    void init();
    //学生信息

    StuLogin m_stulog;

private slots:
    //设置左边tree根据按下的行选择不同页面
    void on_treeWidget_clicked(const QModelIndex &index);


    //搜索按钮
    void on_btn_search_clicked();

    //更新考试成绩页面
    void update_exam(QString);

    //更新学生信息页面
    void update_info();

    void on_btn_cancel_clicked();

    void on_btn_need_upd_clicked();

    void on_btn_update_clicked();

    void on_btn_exit_clicked();

private:
    Ui::StudentLogin *ui;
    StuInfo m_stuinfo;
    QList<StuExamInfo> m_stuexamlist;

    //数据库连接类
    StuExamMysql *m_ptrStuExamMySql;

};

#endif // STUDENTLOGIN_H
