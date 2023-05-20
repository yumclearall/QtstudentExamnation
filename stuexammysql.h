#ifndef STUEXAMMYSQL_H
#define STUEXAMMYSQL_H

#include <QObject>

#include <QtSqlDepends>
#include <QSqlQuery>
#include <QSqlError>

#include <QMessageBox>
#include <QtDebug>




//班级类
struct ClassInfo{
    QString classid;
    int grade;
    int uiclass;
    int classsize;
    QString teachername;
    QString teacherid;
    QString teacherphone;
    int remarks;

    ClassInfo(QString _clsid,int _gr,int _ui,int _cls,QString _trn,QString _tid,QString _tph,int _re){
        classid = _clsid;
        grade = _gr;
        uiclass = _ui;
        classsize = _cls;
        teachername = _trn;
        teacherid = _tid;
        teacherphone = _tph;
        remarks = _re;
    }
    ClassInfo(){}
};
//学生类
struct StuInfo{
    int session;
    QString studentid;
    QString name;
    QString sex;
    int age;
    int grade;
    int uiclass;
    QString telephone;

    StuInfo(int _se,QString _sid, QString _name,QString _sex,int _age,int _gra,int _uic,QString _tel){
        session = _se;
        studentid = _sid;
        name = _name;
        sex = _sex;
        age = _age;
        grade = _gra;
        uiclass = _uic;
        telephone = _tel;
    }
    StuInfo(){}
};
//教师类
struct TeacherInfo{
    QString trid;
    QString trname;
    QString sex;
    int age;
    QString post;
    QString phone;
    QString intime;
    QString remark;

    TeacherInfo(QString _trid,
    QString _trname,
    QString _sex,
    int _age,
    QString _post,
    QString _phone,
    QString _intime,
    QString _remark){
        trid   =    _trid ;
        trname =  _trname ;
        sex    =  _sex    ;
        age    =  _age    ;
        post   =  _post   ;
        phone  =  _phone  ;
        intime =  _intime ;
        remark =  _remark ;
    }
    TeacherInfo(){}
};
//成绩类
struct StuExamInfo{
    QString studentid;
    QString name;
    int remark;
    int Chinese;
    int Math;
    int English;
    int Polotics;
    int History;
    int Geography;
    int Biology;
    int Physics;
    int Chemistry;
    int Total;

    StuExamInfo(
            QString _studentid   ,
            QString _name        ,
            int     _remark       ,
            int     _Chinese     ,
            int     _Math        ,
            int     _Engliah     ,
            int     _Polotics    ,
            int     _History     ,
            int     _Geography   ,
            int     _Biology     ,
            int     _Physics     ,
            int     _Chemistry   ,
            int     _Total
            ){
    studentid  = _studentid ;
    name       = _name      ;
    remark    = _remark   ;
    Chinese    = _Chinese   ;
    Math       = _Math      ;
    English    = _Engliah   ;
    Polotics   = _Polotics  ;
    History    = _History   ;
    Geography  = _Geography ;
    Biology    = _Biology   ;
    Physics    = _Physics   ;
    Chemistry  = _Chemistry ;
    Total      = _Total     ;
    }
    StuExamInfo(){}
};
//学生登录信息类
struct StuLogin{
    QString studentid;
    QString name;
    QString account;
    QString password;

    StuLogin(QString _id,QString _name,QString _acc,QString _pwd){
        studentid = _id;
        name = _name;
        account = _acc;
        password = _pwd;
    }
    StuLogin(QString _acc,QString _pwd){
        account = _acc;
        password = _pwd;
    }
    StuLogin(){}
};
//教师登录信息类
struct TeacherLog{
    QString teacherid;
    QString teachername;
    QString classinfo;
    QString traccount;
    QString trpassword;

    TeacherLog(QString _trid,QString _trna,QString _cls, QString _trac, QString _trpwd){
        teacherid = _trid;
        teachername = _trna;
        classinfo = _cls;
        traccount = _trac;
        trpassword = _trpwd;
    }
    TeacherLog(QString _trac, QString _trpwd){
        traccount = _trac;
        trpassword = _trpwd;
    }
    TeacherLog(){}
};
//管理员登录信息类
struct ArLog{
    QString administrator;
    QString arpassword;

    ArLog(QString _ar, QString _arpwd){
        administrator = _ar;
        arpassword = _arpwd;
    }
    ArLog(){}
};


class StuExamMysql : public QObject
{
    Q_OBJECT
public:
    //单例
    static StuExamMysql *ptrstuexammysql;
    //返回单例
    static StuExamMysql *GetInstance();

    explicit StuExamMysql(QObject *parent = nullptr);

    void INIT();


    //登录界面
    //查学生账号密码
    StuLogin SelStuExist(StuLogin);
    StuLogin SelStuLogin(QString);
    //查教师账号密码
    TeacherLog SelTrExist(TeacherLog);
    //查管理员账号密码
    bool SelArExist(ArLog);
    //查一个学生全部成绩
    QList<StuExamInfo> SelAnStuExam(QString stuid);

    //学生登录
    //一个学生某次成绩
//    bool SelAnStuExam(QString stuid,int reamrk);
    //查一个学生信息
    StuInfo SelStulnfo(QString stuid);
//    //查一个班学生所有成绩
    QList<StuExamInfo> SelClassStuExam(QString);
//    //查一个班学生某次成绩
//    bool SelClassStuExam(int,int);
//    //教师登录
    //查一个班学生信息
    QList<StuInfo> SelClassStulnfo(QString);
    //查一个教师信息
    TeacherInfo SelTeacherinfo(QString teacherid);
    //查全部学生信息
    QList<StuInfo> SelStulnfo();
    //查看所有学生登录信息
    QList<StuLogin> SelStuLogin();
    //查全部学生成绩
    QList<StuExamInfo> SelStuExam();
    //查一个班级信息
    ClassInfo SelClasslnfo(QString);
    //管理员登录
    //查全部班级信息
    QList<ClassInfo> SelClasslnfo();
    //查全部教师信息
    QList<TeacherInfo> SelTeacherinfo();
    //查教全部师登录信息
    QList<TeacherLog> SelTeacherLogin();
//    //查一个教师信息
//    bool SelTeacherlnfo(QString teacherid);
    //查全部管理员信息
    QList<ArLog> SelArlnfo();
    //添加一个学生某次成绩
    bool InStuExam(StuExamInfo);
    //增加一个班级信息
    bool InClasslnfo(ClassInfo);
    //增一个教师信息(账号为工号 密码为123456)
    bool InTeacherinfo(TeacherInfo);
    //增加一个教师登录信息
    bool InTeacherLog(QString trid);
    //添加管理员信息
    bool InArinfo(ArLog);
    //添加某次考试成绩
//    bool InStuExam();
    //批量添加一个班学生某次成绩
//    bool InClassExam();
    //添加一个学生信息
    bool InStulnfo(StuInfo);
    //批量添加某一届学生信息
//    bool InStulnfo();
    //删除一个学生某次成绩
    bool DelStuExam(QString stuid,int);
    //批量删除一个班学生某次成绩
    bool DelStuExam(int,int);
    //删除一个班级信息
    bool DelClassInfo(QString);
    //批量删除某届学生信息
    bool DelStulnfo(int);
    //删除某学生信息
    bool DeloneStulnfo(QString stuid);
    //删一个教师信息
    bool DelTeacherinfo(QString trid);
    //改一个教师登录信息
    bool UpdTeacherLogin(TeacherLog);
    //删除管理员信息
    bool DelArlinfo(ArLog);
    //改一个学生信息
    bool Updstulnfo(StuInfo);
    //改一个学生登录信息
    bool Updstulog(StuLogin);
    //改一个学生成绩
    bool UpdStuExam(StuExamInfo);
    //改一个教师信息
    bool UpdTeacherlnfo(TeacherInfo);
    //改一个班级信息
    bool UpdClasslnfo(ClassInfo);
    //改一个管理员信息
    bool UpdArlnfo(ArLog,ArLog);


    //根据搜索的信息返回一个数组
    QList<int> examlist(QString);

    //根据输入的数字返回第几个学期
    QList<QString> ReTerm(int);

signals:

public slots:

private:
    QSqlDatabase m_mysql;
};

#endif // STUEXAMMYSQL_H
