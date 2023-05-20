#include "login.h"
#include "ui_login.h"

#include <QDebug>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login),
    //初始化登录界面
  m_widstulog(nullptr),
  m_widtrlog(nullptr),
  m_widarlog(nullptr)
{
    ui->setupUi(this);

    init();
}

Login::~Login()
{
    delete ui;
}

void Login::init()
{
    //获取一个连接数据库的类
    m_ptrStuExamMySql = StuExamMysql::GetInstance();

    //登录类型默认为学生登录
    m_logWay = LoginWay::stulog;


    //css
    QFile f;
    f.setFileName("://Debug/debug/othercss.css");
    f.open(QIODevice::ReadOnly);
    QString s = f.readAll();
    this->setStyleSheet(s);
    f.close();
}

void Login::on_btn_login_clicked()
{

    QString acc = ui->le_account->text();
    QString pwd = ui->le_password->text();

    //根据登录方式选择要查询的数据库表
    if (m_logWay == LoginWay::stulog){
        //学生登录
        //创建一个学生登录类
        StuLogin stulog(acc,pwd);

        //将查询到的信息返回给我的学生登录类
        m_stulog = m_ptrStuExamMySql->SelStuExist(stulog);
        if (m_stulog.name != "%%%"){

            //传学生登录信息类给 学生登录界面
            m_widstulog.m_stulog = m_stulog;
            //初始化学生登录界面
            m_widstulog.init();

            this->hide();//隐藏登录界面
            m_widstulog.show();

        }else {
            QMessageBox::information(this,"wrrong","账号/密码不正确，请重新输入！");
        }
    }else if (m_logWay == LoginWay::ar_trlog){
        //管理员登录
        //创建管理员登录类
        ArLog arlog(acc,pwd);
        if (m_ptrStuExamMySql->SelArExist(arlog)){
            m_widarlog.init();
            m_widarlog.show();//管理员登录界面显示
            this->hide();
            return;
        }

        //创建教师登录类
        TeacherLog trlog(acc,pwd);
        m_trlog = m_ptrStuExamMySql->SelTrExist(trlog);
        if (m_trlog.teachername == "%%%"){
            QMessageBox::information(this,"wrrong","账号/密码不正确，请重新输入！");
        }else {
            //传教师登录类给教师登录界面
            m_widtrlog.m_trlog = m_trlog;
            //初始化教师登录页面
            m_widtrlog.init();
            m_widtrlog.show();//教师登录界面显示
            this->hide();
        }

    }
}

void Login::on_btn_trlogin_clicked()
{

    ui->le_account->setPlaceholderText("请输入教师/管理员账号...");
    ui->le_password->setPlaceholderText("请输入教师/管理员密码...");
    m_logWay = LoginWay::ar_trlog;
}

void Login::on_btn_stulogin_clicked()
{
    ui->le_account->setPlaceholderText("请输入账号...");
    ui->le_password->setPlaceholderText("请输入密码...");
    m_logWay = LoginWay::stulog;
}

void Login::on_btn_reset_clicked()
{
    ui->le_account->clear();
    ui->le_password->clear();
}
