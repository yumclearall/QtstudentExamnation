#include "arlogin.h"
#include "ui_arlogin.h"

ArLogin::ArLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArLogin)
{
    ui->setupUi(this);

    //init();
}

ArLogin::~ArLogin()
{
    delete ui;
}

void ArLogin::init()
{
    //获取一个连接数据库的类
    m_ptrStuExamMySql = StuExamMysql::GetInstance();

    //初始化所有表单
    //管理员表
    m_arloglist = m_ptrStuExamMySql->SelArlnfo();
    //班级表
    m_clsinfolist = m_ptrStuExamMySql->SelClasslnfo();
    //学生表
    m_stuinfolist = m_ptrStuExamMySql->SelStulnfo();
    //学生登录表
    m_stuloglist = m_ptrStuExamMySql->SelStuLogin();
    //成绩表
    m_stuexamlist = m_ptrStuExamMySql->SelStuExam();
    //教师表
    m_trinfolist = m_ptrStuExamMySql->SelTeacherinfo();
    //教师登录表
    m_trloglist = m_ptrStuExamMySql->SelTeacherLogin();

    //初始化所有界面
    init_ar();
    init_tr();
    init_cls();
    init_stuexam();
    init_stuinfo();

    //左边treewidget

    //设置默认全部展开
    ui->treeWidget->expandAll();



    //右边stackwidget的设置
    ui->stackedWidget->setCurrentIndex(0);//默认显示0页面

    //不可编辑
    ui->tableWidget_stuinfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //水平默认铺满
    ui->tableWidget_stuinfo->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置选中整行
    ui->tableWidget_stuinfo->setSelectionBehavior(QAbstractItemView::SelectRows);
    //设置只能选中一个目标
    ui->tableWidget_stuinfo->setSelectionMode(QAbstractItemView::SingleSelection);


    ui->tableWidget_stuexam->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_stuexam->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_stuexam->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_stuexam->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_ar->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ar->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_ar->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_ar->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_tr->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_tr->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_tr->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_tr->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_cls->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_cls->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_cls->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_cls->setSelectionMode(QAbstractItemView::SingleSelection);


    QFile f;
    f.setFileName("://Debug/debug/stuqss.css");
    f.open(QIODevice::ReadOnly);
    QString s = f.readAll();
    this->setStyleSheet(s);
    f.close();
}

void ArLogin::init_stuinfo(QString name_id)
{
    int line = 0;
    ui->tableWidget_stuinfo->setRowCount(line);

    for (int i = 0; i < m_stuinfolist.size(); i++){
        //如果输入框中的内容是学号的末尾或名字中包含
        if (name_id == "" ||  m_stuinfolist[i].studentid.endsWith(name_id) || m_stuinfolist[i].name.contains(name_id)){

            //学生信息添加到tablewidget
            ui->tableWidget_stuinfo->setRowCount(line + 1);

            QTableWidgetItem *item0 = new QTableWidgetItem(QString::number(m_stuinfolist[i].session));
            QTableWidgetItem *item1 = new QTableWidgetItem(m_stuinfolist[i].studentid);
            QTableWidgetItem *item2 = new QTableWidgetItem(m_stuinfolist[i].name);
            QTableWidgetItem *item3 = new QTableWidgetItem(m_stuinfolist[i].sex);
            QTableWidgetItem *item4 = new QTableWidgetItem(QString::number(m_stuinfolist[i].age));
            QTableWidgetItem *item5 = new QTableWidgetItem(QString::number(m_stuinfolist[i].grade));
            QTableWidgetItem *item6 = new QTableWidgetItem(QString::number(m_stuinfolist[i].uiclass));
            QTableWidgetItem *item7 = new QTableWidgetItem(m_stuinfolist[i].telephone);

            QTableWidgetItem *item8 = new QTableWidgetItem(m_stuloglist[i].account);
            QTableWidgetItem *item9 = new QTableWidgetItem(m_stuloglist[i].password);

            ui->tableWidget_stuinfo->setItem(line,0,item0);
            ui->tableWidget_stuinfo->setItem(line,1,item1);
            ui->tableWidget_stuinfo->setItem(line,2,item2);
            ui->tableWidget_stuinfo->setItem(line,3,item3);
            ui->tableWidget_stuinfo->setItem(line,4,item4);
            ui->tableWidget_stuinfo->setItem(line,5,item5);
            ui->tableWidget_stuinfo->setItem(line,6,item6);
            ui->tableWidget_stuinfo->setItem(line,7,item7);
            ui->tableWidget_stuinfo->setItem(line,8,item8);
            ui->tableWidget_stuinfo->setItem(line,9,item9);

            line++;
        }
    }
}

void ArLogin::init_stuexam(QString term, QString nm_id)
{
    QList<int> examl = m_ptrStuExamMySql->examlist(term);
    int line = 0;
    ui->tableWidget_stuexam->setRowCount(line);
    for (int val = 0; val < m_stuexamlist.size(); val++) {
        if (examl.contains(m_stuexamlist[val].remark) &&
                (nm_id == "" || m_stuexamlist[val].name.contains(nm_id) || m_stuexamlist[val].studentid.endsWith(nm_id)) ){
        ui->tableWidget_stuexam->setRowCount(line + 1);
//        QTableWidgetItem *exam0   = new QTableWidgetItem(  m_stuexaminfolist[i-1].studentid  )   ;
//        QTableWidgetItem *exam1   = new QTableWidgetItem(  m_stuexaminfolist[i-1].name       )   ;

        int p = m_stuexamlist[val].remark;
        QList<QString> intp = m_ptrStuExamMySql->ReTerm(p);

        QTableWidgetItem *exam1   = new QTableWidgetItem(intp[0]);
        QTableWidgetItem *exam2   = new QTableWidgetItem(intp[1]);
        QTableWidgetItem *exam3   = new QTableWidgetItem(QString::number( m_stuexamlist[val].Chinese   ) )   ;
        QTableWidgetItem *exam4   = new QTableWidgetItem(QString::number( m_stuexamlist[val].Math      ) )   ;
        QTableWidgetItem *exam5   = new QTableWidgetItem(QString::number( m_stuexamlist[val].English   ) )   ;
        QTableWidgetItem *exam6   = new QTableWidgetItem(QString::number( m_stuexamlist[val].Polotics  ) )   ;
        QTableWidgetItem *exam7   = new QTableWidgetItem(QString::number( m_stuexamlist[val].History   ) )   ;
        QTableWidgetItem *exam8   = new QTableWidgetItem(QString::number( m_stuexamlist[val].Geography ) )   ;
        QTableWidgetItem *exam9   = new QTableWidgetItem(QString::number( m_stuexamlist[val].Biology   ) )   ;
        QTableWidgetItem *exam10  = new QTableWidgetItem(QString::number( m_stuexamlist[val].Physics   ) )   ;
        QTableWidgetItem *exam11  = new QTableWidgetItem(QString::number( m_stuexamlist[val].Chemistry ) )   ;
        QTableWidgetItem *exam12  = new QTableWidgetItem(QString::number( m_stuexamlist[val].Total     ) )   ;
        QTableWidgetItem *exam13  = new QTableWidgetItem(m_stuexamlist[val].studentid);
        QTableWidgetItem *exam14  = new QTableWidgetItem(m_stuexamlist[val].name);

        ui->tableWidget_stuexam->setItem(line,0, exam13);
        ui->tableWidget_stuexam->setItem(line,1, exam14);
        ui->tableWidget_stuexam->setItem(line,2, exam1);
        ui->tableWidget_stuexam->setItem(line,3, exam2);
        ui->tableWidget_stuexam->setItem(line,4, exam3);
        ui->tableWidget_stuexam->setItem(line,5, exam4);
        ui->tableWidget_stuexam->setItem(line,6, exam5);
        ui->tableWidget_stuexam->setItem(line,7, exam6);
        ui->tableWidget_stuexam->setItem(line,8, exam7);
        ui->tableWidget_stuexam->setItem(line,9, exam8);
        ui->tableWidget_stuexam->setItem(line,10,exam9);
        ui->tableWidget_stuexam->setItem(line,11,exam10);
        ui->tableWidget_stuexam->setItem(line,12,exam11);
        ui->tableWidget_stuexam->setItem(line,13,exam12);

        line++;

        }
    }
}

void ArLogin::init_tr(QString id_name)
{
    int line = 0;
    ui->tableWidget_tr->setRowCount(line);

    for (int i = 0; i < m_trinfolist.size(); i++){
        //如果输入框中的内容是学号的末尾或名字中包含
        if (id_name == "" ||  m_trinfolist[i].trid.startsWith(id_name) || m_trinfolist[i].trname.contains(id_name)){

            //学生信息添加到tablewidget
            ui->tableWidget_tr->setRowCount(line + 1);

            QTableWidgetItem *item0 = new QTableWidgetItem(m_trinfolist[i].trid);
            QTableWidgetItem *item1 = new QTableWidgetItem(m_trinfolist[i].trname);
            QTableWidgetItem *item2 = new QTableWidgetItem(m_trinfolist[i].sex);
            QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(m_trinfolist[i].age));
            QTableWidgetItem *item4 = new QTableWidgetItem(m_trinfolist[i].post);
            QTableWidgetItem *item5 = new QTableWidgetItem(m_trinfolist[i].phone);
            QTableWidgetItem *item6 = new QTableWidgetItem(m_trinfolist[i].intime);
            QTableWidgetItem *item7 = new QTableWidgetItem(m_trinfolist[i].remark);
            QTableWidgetItem *item8 = new QTableWidgetItem(m_trloglist[i].traccount);
            QTableWidgetItem *item9 = new QTableWidgetItem(m_trloglist[i].trpassword);

            ui->tableWidget_tr->setItem(line,1,item0);
            ui->tableWidget_tr->setItem(line,2,item1);
            ui->tableWidget_tr->setItem(line,3,item2);
            ui->tableWidget_tr->setItem(line,4,item3);
            ui->tableWidget_tr->setItem(line,5,item4);
            ui->tableWidget_tr->setItem(line,6,item5);
            ui->tableWidget_tr->setItem(line,7,item6);
            ui->tableWidget_tr->setItem(line,8,item7);
            ui->tableWidget_tr->setItem(line,9,item8);
            ui->tableWidget_tr->setItem(line,10,item9);

            line++;
        }
    }
}

void ArLogin::init_cls(QString name_id)
{
    int line = 0;
    ui->tableWidget_cls->setRowCount(line);

    for (int i = 0; i < m_clsinfolist.size(); i++){
        //如果输入框中的内容是学号的末尾或名字中包含
        if (name_id == "" ||  m_clsinfolist[i].classid.contains(name_id)){

            //学生信息添加到tablewidget
            ui->tableWidget_cls->setRowCount(line + 1);

            QTableWidgetItem *item0 = new QTableWidgetItem(m_clsinfolist[i].classid);
            QTableWidgetItem *item4 = new QTableWidgetItem(m_clsinfolist[i].teachername);
            QTableWidgetItem *item5 = new QTableWidgetItem(m_clsinfolist[i].teacherid);
            QTableWidgetItem *item6 = new QTableWidgetItem(m_clsinfolist[i].teacherphone);

            QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(m_clsinfolist[i].grade));
            QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(m_clsinfolist[i].uiclass));
            QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(m_clsinfolist[i].classsize));
            QTableWidgetItem *item7 = new QTableWidgetItem(QString::number(m_clsinfolist[i].remarks));

            ui->tableWidget_cls->setItem(line,0,item0);
            ui->tableWidget_cls->setItem(line,1,item1);
            ui->tableWidget_cls->setItem(line,2,item2);
            ui->tableWidget_cls->setItem(line,3,item3);
            ui->tableWidget_cls->setItem(line,4,item4);
            ui->tableWidget_cls->setItem(line,5,item5);
            ui->tableWidget_cls->setItem(line,6,item6);
            ui->tableWidget_cls->setItem(line,7,item7);

            line++;
        }
    }
}

void ArLogin::init_ar()
{
    int line = 0;
    ui->tableWidget_ar->setRowCount(line);

    for (int i = 0; i < m_arloglist.size(); i++){

            //学生信息添加到tablewidget
            ui->tableWidget_ar->setRowCount(line + 1);

            QTableWidgetItem *item0 = new QTableWidgetItem(m_arloglist[i].administrator);
            QTableWidgetItem *item1 = new QTableWidgetItem(m_arloglist[i].arpassword);

            ui->tableWidget_ar->setItem(line,0,item0);
            ui->tableWidget_ar->setItem(line,1,item1);

            line++;
    }
}

void ArLogin::on_treeWidget_clicked()
{
    //获取左边treewidget鼠标点击事件的行的文字内容
    QString txt = ui->treeWidget->currentItem()->text(0);


    //根据文字内容,右边stackwidget显示对应的窗口
    if (txt == "学生信息管理")
        ui->stackedWidget->setCurrentIndex(0);
    else if (txt == "学生成绩管理")
        ui->stackedWidget->setCurrentIndex(1);
    else if (txt == "班级管理")
        ui->stackedWidget->setCurrentIndex(2);
    else if (txt == "教师管理")
        ui->stackedWidget->setCurrentIndex(3);
    else if (txt == "管理员管理")
        ui->stackedWidget->setCurrentIndex(4);
    else if (txt == "其他操作")
        ui->stackedWidget->setCurrentIndex(5);


}

void ArLogin::on_btn_tr_cancel_clicked()
{
    init_tr();
    ui->le_tr_trid_name->clear();
}

void ArLogin::on_btn_tr_src_clicked()
{
    init_tr(ui->le_tr_trid_name->text());
}

void ArLogin::on_btn_stuinfo_canael_clicked()
{
    init_stuinfo();
    ui->le_stuinfo_id->clear();
}

void ArLogin::on_btn_stuinfo_src_clicked()
{
    init_stuinfo(ui->le_stuinfo_id->text());
}

void ArLogin::on_btn_stuexam_cancel_clicked()
{
    init_stuexam();
    ui->le_stuexam_id_name->clear();
    ui->cbb_stuexam_num->setCurrentIndex(0);
    ui->cbb_stuexam_term->setCurrentIndex(0);
    ui->cbb_stuexam_year->setCurrentIndex(0);
}

void ArLogin::on_btn_stuexam_src_clicked()
{
    QString term = QString(ui->cbb_stuexam_num->currentText() + ui->cbb_stuexam_year->currentText() + ui->cbb_stuexam_term->currentText());
    init_stuexam(term,ui->le_stuexam_id_name->text());
}

void ArLogin::on_btn_cls__cancel_clicked()
{
    init_cls();
    ui->le_cls_ses_cls->clear();
}

void ArLogin::on_btn_cls_src_clicked()
{
    init_cls(ui->le_cls_ses_cls->text());
}

void ArLogin::on_btn_exit_clicked()
{
    this->close();
}
