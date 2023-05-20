#include "stuexammysql.h"
#include <QMessageBox>

StuExamMysql *StuExamMysql::ptrstuexammysql = nullptr;
StuExamMysql *StuExamMysql::GetInstance()
{
    if (nullptr == StuExamMysql::ptrstuexammysql)
        ptrstuexammysql = new StuExamMysql;
    return ptrstuexammysql;
}

StuExamMysql::StuExamMysql(QObject *parent) : QObject(parent)
{
    INIT();
}

void StuExamMysql::INIT()
{
    //驱动存在
    if (QSqlDatabase::drivers().isEmpty())
        QMessageBox::information(nullptr,tr("No database drivers found"),
                                 tr("This demo requirs at least one QT database driver."
                                 "Please check the documentation how to build the "
                                 "Qt SQL plugins"));

    //连接数据库

    m_mysql = QSqlDatabase::addDatabase("QODBC");//使用ODBC
    m_mysql.setDatabaseName("MySQL01");   //在ODBC中创建的data source name
    m_mysql.setPort(3306);  //端口号
    m_mysql.setHostName("localhost");//主机名
    m_mysql.setUserName("root");//用户名
    m_mysql.setPassword("root");//密码

    if(!m_mysql.open()){
        QMessageBox::warning(nullptr,tr("Unable to open database"),tr("数据库连接失败！"));
        qDebug()<<m_mysql.lastError().text();
        }else {
        QMessageBox::warning(nullptr,tr("Success"),tr("数据库连接成功！"));
    }
}

StuLogin StuExamMysql::SelStuExist(StuLogin stulog)
{
    //数据库消息队列
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from studentlogin where account='%1';").arg(stulog.account);
    sql.exec(txt);
    //如果查到账号验证密码
    if (sql.next()){
        //密码正确 执行赋值操作并返回
        if (sql.value(3).toString() == stulog.password){
            stulog.studentid = sql.value(0).toString();
            stulog.name = sql.value(1).toString();
            return stulog;
        }
    }

    stulog.name = "%%%";
    return stulog;
}

StuLogin StuExamMysql::SelStuLogin(QString stuid)
{
    StuLogin stulog;
    stulog.studentid = stuid;
    //数据库消息队列
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from studentlogin where studentid='%1';").arg(stuid);
    sql.exec(txt);
    //如果查到账号验证密码
    if (sql.next()){
            stulog.studentid = sql.value(0).toString();
            stulog.name = sql.value(1).toString();
            stulog.account = sql.value(2).toString();
            stulog.password = sql.value(3).toString();
    }

    return stulog;
}

QList<StuLogin> StuExamMysql::SelStuLogin()
{
    //数据库消息队列
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from studentlogin;");
    sql.exec(txt);
    QList<StuLogin> stuloglist;
    //如果查到账号验证密码
    while (sql.next()){
        StuLogin stulog;
        stulog.studentid = sql.value(0).toString();
        stulog.name = sql.value(1).toString();
        stulog.account = sql.value(2).toString();
        stulog.password = sql.value(3).toString();
        stuloglist.push_back(stulog);
    }

    return stuloglist;
}

TeacherLog StuExamMysql::SelTrExist(TeacherLog trlog)
{
    //消息队列
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from teacherlogin where traccount='%1';").arg(trlog.traccount);
    sql.exec(txt);

    if (sql.next()){
        if (sql.value(4).toString() == trlog.trpassword){
            trlog.teacherid = sql.value(0).toString();
            trlog.teachername = sql.value(1).toString();
            trlog.classinfo = sql.value(2).toString();
            return  trlog;
        }
    }

    trlog.teachername = "%%%";
    return  trlog;

}

bool StuExamMysql::SelArExist(ArLog arlog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from arlogin where administrator='%1';").arg(arlog.administrator);
    sql.exec(txt);

    if (sql.next()){
        if (sql.value(1).toString() == arlog.arpassword)
            return true;
    }

    return false;
}

QList<StuExamInfo> StuExamMysql::SelAnStuExam(QString stuid)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from exam where studentid='%1';").arg(stuid);
    sql.exec(txt);
    //创建学生成绩表
    QList<StuExamInfo> stuexamlist;

    while (sql.next()){
        QString stuid =      sql.value(0).toString();
        QString name  =      sql.value(1).toString();
        int exam1     =      sql.value(2).toInt();
        int exam2     =      sql.value(3).toInt();
        int exam3     =      sql.value(4).toInt();
        int exam4     =      sql.value(5).toInt();
        int exam5     =      sql.value(6).toInt();
        int exam6     =      sql.value(7).toInt();
        int exam7     =      sql.value(8).toInt();
        int exam8     =      sql.value(9).toInt();
        int exam9     =      sql.value(10).toInt();
        int exam10    =      sql.value(11).toInt();
        int exam11    =      sql.value(12).toInt();

        StuExamInfo info(
                    stuid        ,
                    name         ,
                     exam1       ,
                     exam2       ,
                     exam3       ,
                     exam4       ,
                     exam5       ,
                     exam6       ,
                     exam7       ,
                     exam8       ,
                     exam9       ,
                     exam10      ,
                     exam11
                         );

        stuexamlist.push_back(info);
    }

    return stuexamlist;
}

StuInfo StuExamMysql::SelStulnfo(QString stuid)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from students where studentid='%1';").arg(stuid);
    sql.exec(txt);

    if (sql.next()){
        int ses        =      sql.value(0).toInt();
        QString stuid  =      sql.value(1).toString();
        QString name   =      sql.value(2).toString();
        QString sex    =      sql.value(3).toString();
        int age        =      sql.value(4).toInt();
        int grade      =      sql.value(5).toInt();
        int cls        =      sql.value(6).toInt();
        QString tel    =      sql.value(7).toString();

        return StuInfo(ses,stuid,name,sex,age,grade,cls,tel);
    }

    return StuInfo();
}

QList<StuExamInfo> StuExamMysql::SelClassStuExam(QString cls)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from exam where studentid like '%1%';").arg(cls);
    sql.exec(txt);
    //创建学生成绩表
    QList<StuExamInfo> clslist;

    while (sql.next()){
        QString stuid =      sql.value(0).toString();
        QString name  =      sql.value(1).toString();
        int exam1     =      sql.value(2).toInt();
        int exam2     =      sql.value(3).toInt();
        int exam3     =      sql.value(4).toInt();
        int exam4     =      sql.value(5).toInt();
        int exam5     =      sql.value(6).toInt();
        int exam6     =      sql.value(7).toInt();
        int exam7     =      sql.value(8).toInt();
        int exam8     =      sql.value(9).toInt();
        int exam9     =      sql.value(10).toInt();
        int exam10    =      sql.value(11).toInt();
        int exam11    =      sql.value(12).toInt();

        StuExamInfo info(
                    stuid        ,
                    name         ,
                     exam1       ,
                     exam2       ,
                     exam3       ,
                     exam4       ,
                     exam5       ,
                     exam6       ,
                     exam7       ,
                     exam8       ,
                     exam9       ,
                     exam10      ,
                     exam11
                         );

        clslist.push_back(info);
    }

    return clslist;
}

QList<StuInfo> StuExamMysql::SelClassStulnfo(QString cls)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from students where studentid like '%1%';").arg(cls);
    sql.exec(txt);

    QList<StuInfo> stuinfolist;
    while (sql.next()){
        int ses        =      sql.value(0).toInt();
        QString stuid  =      sql.value(1).toString();
        QString name   =      sql.value(2).toString();
        QString sex    =      sql.value(3).toString();
        int age        =      sql.value(4).toInt();
        int grade      =      sql.value(5).toInt();
        int cls        =      sql.value(6).toInt();
        QString tel    =      sql.value(7).toString();

        StuInfo info(ses,stuid,name,sex,age,grade,cls,tel);

        stuinfolist.push_back(info);
    }
    return stuinfolist;
}

TeacherInfo StuExamMysql::SelTeacherinfo(QString teacherid)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from teacheres where trid='%1';").arg(teacherid);
    sql.exec(txt);

    if (sql.next()){
        QString trid   =      sql.value(0).toString();
        QString name   =      sql.value(1).toString();
        QString sex    =      sql.value(2).toString();
        int age        =      sql.value(3).toInt();
        QString post   =      sql.value(4).toString();
        QString phone  =      sql.value(5).toString();
        QString time   =      sql.value(6).toString();
        QString rem    =      sql.value(7).toString();

        return TeacherInfo(trid,name,sex,age,post,phone,time,rem);
    }

    return TeacherInfo();
}

QList<StuInfo> StuExamMysql::SelStulnfo()
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from students;");
    sql.exec(txt);

    QList<StuInfo> stuinfolist;
    while (sql.next()){
        int ses        =      sql.value(0).toInt();
        QString stuid  =      sql.value(1).toString();
        QString name   =      sql.value(2).toString();
        QString sex    =      sql.value(3).toString();
        int age        =      sql.value(4).toInt();
        int grade      =      sql.value(5).toInt();
        int cls        =      sql.value(6).toInt();
        QString tel    =      sql.value(7).toString();

        StuInfo info(ses,stuid,name,sex,age,grade,cls,tel);

        stuinfolist.push_back(info);
    }

    return stuinfolist;
}

QList<StuExamInfo> StuExamMysql::SelStuExam()
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from exam;");
    sql.exec(txt);
    //创建学生成绩表
    QList<StuExamInfo> clslist;

    while (sql.next()){
        QString stuid =      sql.value(0).toString();
        QString name  =      sql.value(1).toString();
        int exam1     =      sql.value(2).toInt();
        int exam2     =      sql.value(3).toInt();
        int exam3     =      sql.value(4).toInt();
        int exam4     =      sql.value(5).toInt();
        int exam5     =      sql.value(6).toInt();
        int exam6     =      sql.value(7).toInt();
        int exam7     =      sql.value(8).toInt();
        int exam8     =      sql.value(9).toInt();
        int exam9     =      sql.value(10).toInt();
        int exam10    =      sql.value(11).toInt();
        int exam11    =      sql.value(12).toInt();

        StuExamInfo info(
                    stuid        ,
                    name         ,
                     exam1       ,
                     exam2       ,
                     exam3       ,
                     exam4       ,
                     exam5       ,
                     exam6       ,
                     exam7       ,
                     exam8       ,
                     exam9       ,
                     exam10      ,
                     exam11
                         );

        clslist.push_back(info);
    }

    return clslist;
}

ClassInfo StuExamMysql::SelClasslnfo(QString clsinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from classinfo where classid='%1';").arg(clsinfo);
    sql.exec(txt);

    if (sql.next()){
        QString clsid  =      sql.value(0).toString();
        int grade      =      sql.value(1).toInt();
        int cls        =      sql.value(2).toInt();
        int clssize    =      sql.value(3).toInt();
        QString trname =      sql.value(4).toString();
        QString trid   =      sql.value(5).toString();
        QString tel    =      sql.value(6).toString();
        int rem        =      sql.value(7).toInt();

        return ClassInfo(clsid,grade,cls,clssize,trname,trid,tel,rem);
    }

    return ClassInfo();
}

QList<ClassInfo> StuExamMysql::SelClasslnfo()
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from classinfo;");
    sql.exec(txt);

    QList<ClassInfo> clsinfolist;
    while (sql.next()){
        QString clsid  =      sql.value(0).toString();
        int grade      =      sql.value(1).toInt();
        int cls        =      sql.value(2).toInt();
        int clssize    =      sql.value(3).toInt();
        QString trname =      sql.value(4).toString();
        QString trid   =      sql.value(5).toString();
        QString tel    =      sql.value(6).toString();
        int rem        =      sql.value(7).toInt();

        ClassInfo info(clsid,grade,cls,clssize,trname,trid,tel,rem);
        clsinfolist.push_back(info);
    }

    return clsinfolist;
}

QList<TeacherInfo> StuExamMysql::SelTeacherinfo()
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from teacheres;");
    sql.exec(txt);

    QList<TeacherInfo> trinfolist;
    while (sql.next()){
        QString trid   =      sql.value(0).toString();
        QString name   =      sql.value(1).toString();
        QString sex    =      sql.value(2).toString();
        int age        =      sql.value(3).toInt();
        QString post   =      sql.value(4).toString();
        QString phone  =      sql.value(5).toString();
        QString time   =      sql.value(6).toString();
        QString rem    =      sql.value(7).toString();

        TeacherInfo info(trid,name,sex,age,post,phone,time,rem);
        trinfolist.push_back(info);
    }

    return trinfolist;
}

QList<TeacherLog> StuExamMysql::SelTeacherLogin()
{
    //消息队列
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from teacherlogin;");
    sql.exec(txt);

    QList<TeacherLog> trloglist;
    while (sql.next()){
            TeacherLog trlog;
            trlog.teacherid = sql.value(0).toString();
            trlog.teachername = sql.value(1).toString();
            trlog.classinfo = sql.value(2).toString();
            trlog.traccount = sql.value(3).toString();
            trlog.trpassword = sql.value(4).toString();

            trloglist.push_back(trlog);
    }

    return trloglist;
}

QList<ArLog> StuExamMysql::SelArlnfo()
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("select * from arlogin;");
    sql.exec(txt);

    QList<ArLog> arloglist;
    while (sql.next()){
        QString acc   =      sql.value(0).toString();
        QString pwd   =      sql.value(1).toString();

        ArLog arlog(acc,pwd);
        arloglist.push_back(arlog);
    }
    return arloglist;
}

bool StuExamMysql::InStuExam(StuExamInfo stuexaminfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into exam(studentid,name,remark,Chinese,Math,Engliah,Polotics,History,Geography,Biology,Physics,Chemistry,Total) "
                          "values('%1','%2',%3,%4,%5,%6,%7,%8,%9,%10,%11,%12,%13);")
            .arg(stuexaminfo.studentid)
            .arg(stuexaminfo.name)
            .arg(stuexaminfo.remark)
            .arg(stuexaminfo.Chinese)
            .arg(stuexaminfo.Math)
            .arg(stuexaminfo.English)
            .arg(stuexaminfo.Polotics)
            .arg(stuexaminfo.History)
            .arg(stuexaminfo.Geography)
            .arg(stuexaminfo.Biology)
            .arg(stuexaminfo.Physics)
            .arg(stuexaminfo.Chemistry)
            .arg(stuexaminfo.Total);
    return sql.exec(txt);
}

bool StuExamMysql::InClasslnfo(ClassInfo clsinfo)
{

    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into classinfo(classid,grade,uiclass,classsize,teachername,teacherid,teacherphone,remarks) "
                          "values('%1',%2,%3,%4,'%5','%6','%7',%8);")
            .arg(clsinfo.classid)
            .arg(clsinfo.grade)
            .arg(clsinfo.uiclass)
            .arg(clsinfo.classsize)
            .arg(clsinfo.teachername)
            .arg(clsinfo.teacherid)
            .arg(clsinfo.teacherphone)
            .arg(clsinfo.remarks);
    return sql.exec(txt);
}

bool StuExamMysql::InTeacherinfo(TeacherInfo trinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into teachers(trid,trname,sex,age,post,phone,intime,remark) "
                          "values('%1','%2','%3',%4,'%5','%6','%7','%8');")
            .arg(trinfo.trid)
            .arg(trinfo.trname)
            .arg(trinfo.sex)
            .arg(trinfo.age)
            .arg(trinfo.post)
            .arg(trinfo.phone)
            .arg(trinfo.intime)
            .arg(trinfo.remark);
    return sql.exec(txt);
}

bool StuExamMysql::InTeacherLog(QString trid)
{
    TeacherInfo trinfo = StuExamMysql::SelTeacherinfo(trid);
    if(nullptr == trinfo.remark)
        return false;
    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into teacherlogin(teacherid,teachername,classinfo,traccount,trpassword) "
                          "values('%1','%2','%3','%4','%5');")
            .arg(trinfo.trid)
            .arg(trinfo.trname)
            .arg(trinfo.trid)
            .arg("123456")
            .arg(trinfo.remark);
    return sql.exec(txt);
}

bool StuExamMysql::InArinfo(ArLog arlog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into arlogin(administrator,arpassword) "
                          "values('%1','%2');")
            .arg(arlog.administrator)
            .arg(arlog.arpassword);
    return sql.exec(txt);
}

bool StuExamMysql::InStulnfo(StuInfo stuinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("insert into students(session,studentid,name,sex,age,grade,uiclass,telephone) "
                          "values(%1,'%2','%3','%4',%5,%6,%7,'%8');")
            .arg(stuinfo.session)
            .arg(stuinfo.studentid)
            .arg(stuinfo.name)
            .arg(stuinfo.sex)
            .arg(stuinfo.age)
            .arg(stuinfo.grade)
            .arg(stuinfo.uiclass)
            .arg(stuinfo.telephone);
    return sql.exec(txt);
}

bool StuExamMysql::DelStuExam(QString stuid, int rem)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from exam where studentid='%1' and remark = %2;")
            .arg(stuid).arg(rem);
    return sql.exec(txt);
}

bool StuExamMysql::DelStuExam(int clsid, int rem)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from exam where studentid like '%1%' and remark = %2;")
            .arg(clsid).arg(rem);
    return sql.exec(txt);
}

bool StuExamMysql::DelClassInfo(QString cls)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from classinfo where classid='%1';")
            .arg(cls);
    return sql.exec(txt);
}

bool StuExamMysql::DelStulnfo(int ses)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from students where session=%1;")
            .arg(ses);
    return sql.exec(txt);
}

bool StuExamMysql::DeloneStulnfo(QString stuid)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from students where studentid='%1';")
            .arg(stuid);
    return sql.exec(txt);
}

bool StuExamMysql::DelTeacherinfo(QString trid)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from teachers where trid='%1';")
            .arg(trid);
    return sql.exec(txt);
}

bool StuExamMysql::UpdTeacherLogin(TeacherLog trlog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update teacherlogin set teachername='%1',traccount='%2',trpassword='%3' "
                          "where teacherid='%4';")
            .arg(trlog.teachername)
            .arg(trlog.traccount)
            .arg(trlog.trpassword)
            .arg(trlog.teacherid);
    return sql.exec(txt);
}

bool StuExamMysql::DelArlinfo(ArLog arlog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("delete * from arlogin where administrator='%1' and arpassword='%2';")
            .arg(arlog.administrator)
            .arg(arlog.arpassword);
    return sql.exec(txt);
}

bool StuExamMysql::Updstulnfo(StuInfo stuinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update students set session='%1',name=%2,sex=%3,age=%4,grade=%5,"
                          "uiclass=%6,telephone=%7 where studentid='%8';")
            .arg(stuinfo.session)
            .arg(stuinfo.name)
            .arg(stuinfo.sex)
            .arg(stuinfo.age)
            .arg(stuinfo.grade)
            .arg(stuinfo.uiclass)
            .arg(stuinfo.telephone)
            .arg(stuinfo.studentid);
    return sql.exec(txt);
}

bool StuExamMysql::Updstulog(StuLogin stulog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update studentlogin set name='%1',account='%2',password='%3' "
                          "where studentid='%4';")
            .arg(stulog.name)
            .arg(stulog.account)
            .arg(stulog.password)
            .arg(stulog.studentid);
    return sql.exec(txt);
}

bool StuExamMysql::UpdStuExam(StuExamInfo stuexaminfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update exam set name='%1',Chinese=%2,Math=%3,English=%4,Polotics=%5,"
                          "History=%6,Geography=%7,Biology=%8,Physics=%9,Chemistry=%10,Total=%11) "
                          "where studentid='%12' and remark=%13;")
            .arg(stuexaminfo.name)
            .arg(stuexaminfo.Chinese)
            .arg(stuexaminfo.Math)
            .arg(stuexaminfo.English)
            .arg(stuexaminfo.Polotics)
            .arg(stuexaminfo.History)
            .arg(stuexaminfo.Geography)
            .arg(stuexaminfo.Biology)
            .arg(stuexaminfo.Physics)
            .arg(stuexaminfo.Chemistry)
            .arg(stuexaminfo.Total)
            .arg(stuexaminfo.studentid)
            .arg(stuexaminfo.remark);
    return sql.exec(txt);
}

bool StuExamMysql::UpdTeacherlnfo(TeacherInfo trinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update teacheres set trname='%1',sex='%2',age=%3,post='%4',phone='%5',intime='%6',"
                          "remark='%7' where trid='%8';")
            .arg(trinfo.trname)
            .arg(trinfo.sex)
            .arg(trinfo.age)
            .arg(trinfo.post)
            .arg(trinfo.phone)
            .arg(trinfo.intime)
            .arg(trinfo.remark)
            .arg(trinfo.trid);
    return sql.exec(txt);
}

bool StuExamMysql::UpdClasslnfo(ClassInfo clsinfo)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update classinfo set grade=%1,uiclass=%2,classsize=%3,teachername='%4',"
                          "teacherid='%5',teacherphone'%6'=,remarks=%7 where classid='%8';")
            .arg(clsinfo.grade)
            .arg(clsinfo.uiclass)
            .arg(clsinfo.classsize)
            .arg(clsinfo.teachername)
            .arg(clsinfo.teacherid)
            .arg(clsinfo.teacherphone)
            .arg(clsinfo.remarks)
            .arg(clsinfo.classid);
    return sql.exec(txt);
}

bool StuExamMysql::UpdArlnfo(ArLog re_arlog,ArLog arlog)
{
    QSqlQuery sql(m_mysql);
    QString txt = QString("update arlogin set administrator='%1',arpassword='%2' "
                          "where administrator='%3' and arpassword='%4';")
            .arg(arlog.administrator)
            .arg(arlog.arpassword)
            .arg(re_arlog.administrator)
            .arg(re_arlog.arpassword);
    return sql.exec(txt);
}

QList<int> StuExamMysql::examlist(QString term)
{
    if (term == "期中")
        return {1,3,5,7,9,11};
    else if (term == "期末")
        return {2,4,6,8,10,12};
    else if (term == "上")
        return {1,2,5,6,9,10};
    else if (term == "上期中")
        return {1,5,9};
    else if (term == "上期末")
        return {2,6,10};
    else if (term == "下")
        return {3,4,7,8,11,12};
    else if (term == "下期中")
        return {3,7,11};
    else if (term == "下期末")
        return {4,8,9,12};

    else if (term == "1")
        return {1,2,3,4};
    else if (term == "1期中")
        return {1,3};
    else if (term == "1期末")
        return {2,4};
    else if (term == "1上")
        return {1,2};
    else if (term == "1上期中")
        return {1};
    else if (term == "1上期末")
        return {2};
    else if (term == "1下")
        return {3,4};
    else if (term == "1下期中")
        return {3};
    else if (term == "1下期末")
        return {4};

    else if (term == "2")
        return {5,6,7,8};
    else if (term == "2期中")
        return {5,7};
    else if (term == "2期末")
        return {6,8};
    else if (term == "2上")
        return {5,6};
    else if (term == "2上期中")
        return {5};
    else if (term == "2上期末")
        return {6};
    else if (term == "2下")
        return {7,8};
    else if (term == "2下期中")
        return {7};
    else if (term == "2下期末")
        return {8};

    else if (term == "3")
        return {9,10,11,12};
    else if (term == "3期中")
        return {9,11};
    else if (term == "3期末")
        return {10,12};
    else if (term == "3上")
        return {9,10};
    else if (term == "3上期中")
        return {9};
    else if (term == "3上期末")
        return {10};
    else if (term == "3下")
        return {11,12};
    else if (term == "3下期中")
        return {11};
    else if (term == "3下期末")
        return {12};
    return {1,2,3,4,5,6,7,8,9,10,11,12};
}

QList<QString> StuExamMysql::ReTerm(int n)
{
    switch (n) {
    case 1:
        return {"一学年上学期","期中"};
    case 2:
        return {"一学年上学期","期末"};
    case 3:
        return {"一学年下学期","期中"};
    case 4:
        return {"一学年下学期","期末"};
    case 5:
        return {"二学年上学期","期中"};
    case 6:
        return {"二学年上学期","期末"};
    case 7:
        return {"二学年下学期","期中"};
    case 8:
        return {"二学年下学期","期末"};
    case 9:
        return {"三学年上学期","期中"};
    case 10:
        return {"三学年上学期","期末"};
    case 11:
        return {"三学年下学期","期中"};
    case 12:
        return {"三学年下学期","期末"};
    default:
        return {"",""};
    }
}










