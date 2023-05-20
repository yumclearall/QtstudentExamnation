#include "teacherlogin.h"
#include "ui_teacherlogin.h"

TeacherLogin::TeacherLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeacherLogin)
{
    ui->setupUi(this);
}

TeacherLogin::~TeacherLogin()
{
    delete ui;
}

void TeacherLogin::init()
{
    //获取一个连接数据库的类
    m_ptrStuExamMySql = StuExamMysql::GetInstance();


    //获得班级类
    QString clsinfo = m_trlog.classinfo;
    m_clsinfo = m_ptrStuExamMySql->SelClasslnfo(clsinfo);

    //获得教师类
    QString trid = m_trlog.teacherid;
    m_trinfo = m_ptrStuExamMySql->SelTeacherinfo(trid);

    //获得学生信息类
    m_stuinfolist = m_ptrStuExamMySql->SelClassStulnfo(clsinfo);

    //获得学生登录信息类
    for (auto stu:m_stuinfolist){
        QString stuid = stu.studentid;
        StuLogin stulog = m_ptrStuExamMySql->SelStuLogin(stuid);
        m_stuloglist.append(stulog);
    }
    //获得学生成绩类
    m_stuexamlist = m_ptrStuExamMySql->SelClassStuExam(clsinfo);

    //右上角显示班级信息
    ui->lb_class->setText(QString("班号：%1\n%2年%3班")
                          .arg(m_clsinfo.classid).arg(m_clsinfo.grade).arg(m_clsinfo.uiclass));

    //初始化界面
    init_trinfo();
    init_stuinfo();
    init_stuexam();



    //左边treewidget

    //设置默认全部展开
    ui->treeWidget->expandAll();



    //右边stackwidget的设置
    ui->stackedWidget->setCurrentIndex(0);//默认显示0页面

    //设置tablewedgit
    //不可编辑
    ui->tableWidget_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //水平默认铺满
    ui->tableWidget_info->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置选中整行
    ui->tableWidget_info->setSelectionBehavior(QAbstractItemView::SelectRows);
    //设置只能选中一个目标
    ui->tableWidget_info->setSelectionMode(QAbstractItemView::SingleSelection);


    //不可编辑
    ui->tableWidget_exam->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //水平默认铺满
    ui->tableWidget_exam->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置选中整行
    ui->tableWidget_exam->setSelectionBehavior(QAbstractItemView::SelectRows);
    //设置只能选中一个目标
    ui->tableWidget_exam->setSelectionMode(QAbstractItemView::SingleSelection);

    QFile f;
    f.setFileName("://Debug/debug/stuqss.css");
    f.open(QIODevice::ReadOnly);
    QString s = f.readAll();
    this->setStyleSheet(s);
    f.close();

}

void TeacherLogin::init_stuinfo(QString name_id)
{
    int line = 0;
    ui->tableWidget_info->setRowCount(line);

    for (int i = 0; i < m_stuinfolist.size(); i++){
        //如果输入框中的内容是学号的末尾或名字中包含
        if (name_id == "" ||  m_stuinfolist[i].studentid.endsWith(name_id) || m_stuinfolist[i].name.contains(name_id)){

            //学生信息添加到tablewidget
            ui->tableWidget_info->setRowCount(line + 1);

            QTableWidgetItem *item0 = new QTableWidgetItem(m_stuinfolist[i].name);
            QTableWidgetItem *item1 = new QTableWidgetItem(m_stuinfolist[i].studentid);
            QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(m_stuinfolist[i].age));
            QTableWidgetItem *item3 = new QTableWidgetItem(m_stuinfolist[i].telephone);
            QTableWidgetItem *item4 = new QTableWidgetItem(m_stuinfolist[i].sex);
            QTableWidgetItem *item5 = new QTableWidgetItem(m_stuloglist[i].account);
            QTableWidgetItem *item6 = new QTableWidgetItem(m_stuloglist[i].password);

            ui->tableWidget_info->setItem(line,0,item0);
            ui->tableWidget_info->setItem(line,1,item1);
            ui->tableWidget_info->setItem(line,2,item2);
            ui->tableWidget_info->setItem(line,3,item3);
            ui->tableWidget_info->setItem(line,4,item4);
            ui->tableWidget_info->setItem(line,5,item5);
            ui->tableWidget_info->setItem(line,6,item6);

            line++;
        }
    }
}

void TeacherLogin::init_stuexam(QString term,QString nm_id)
{
    QList<int> examl = m_ptrStuExamMySql->examlist(term);
    int line = 0;
    ui->tableWidget_exam->setRowCount(line);
    for (int val = 0, i = 0; val < m_stuexamlist.size() && i < examl.size(); val++) {
        if (examl.contains(m_stuexamlist[val].remark) &&
                (nm_id == "" || m_stuexamlist[val].name.contains(nm_id) || m_stuexamlist[val].studentid.endsWith(nm_id)) ){
        ui->tableWidget_exam->setRowCount(line + 1);
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
        QTableWidgetItem *exam13   = new QTableWidgetItem(m_stuexamlist[val].studentid);
        QTableWidgetItem *exam14   = new QTableWidgetItem(m_stuexamlist[val].name);

        ui->tableWidget_exam->setItem(line,0, exam13);
        ui->tableWidget_exam->setItem(line,1, exam14);
        ui->tableWidget_exam->setItem(line,2, exam1);
        ui->tableWidget_exam->setItem(line,3, exam2);
        ui->tableWidget_exam->setItem(line,4, exam3);
        ui->tableWidget_exam->setItem(line,5, exam4);
        ui->tableWidget_exam->setItem(line,6, exam5);
        ui->tableWidget_exam->setItem(line,7, exam6);
        ui->tableWidget_exam->setItem(line,8, exam7);
        ui->tableWidget_exam->setItem(line,9, exam8);
        ui->tableWidget_exam->setItem(line,10,exam9);
        ui->tableWidget_exam->setItem(line,11,exam10);
        ui->tableWidget_exam->setItem(line,12,exam11);
        ui->tableWidget_exam->setItem(line,13,exam12);

        line++;

        }
    }
}

void TeacherLogin::init_trinfo()
{

    //教师信息及账号密码显示到教师信息界面
    ui->le_id      ->setText(m_trinfo.trid);
    ui->le_age     ->setText(QString::number(m_trinfo.age));
    ui->le_sex     ->setText(m_trinfo.sex);
    ui->le_name    ->setText(m_trinfo.trname);
    ui->le_post    ->setText(m_trinfo.post);
    ui->le_phone   ->setText(m_trinfo.phone);
    ui->le_intime  ->setText(m_trinfo.intime);
    ui->le_remark  ->setText(m_trinfo.remark);
    ui->le_account ->setText(m_trlog.traccount);
    ui->le_password->setText(m_trlog.trpassword);

    //显示班级信息
    ui->lb__clssize ->setText(QString::number(m_clsinfo.classsize));

    //班级进度
    if (m_clsinfo.remarks == 0)
        ui->lb__remarks->setText("未完成");
    else {
        QList<QString> exm = m_ptrStuExamMySql->ReTerm(m_clsinfo.remarks);
        ui->lb__remarks->setText(QString("第%1%2已完成").arg(exm[0]).arg(exm[1]));
    }

    //设置不可修改
    ui->le_id      ->setEnabled(false);
    ui->le_age     ->setEnabled(false);
    ui->le_sex     ->setEnabled(false);
    ui->le_name    ->setEnabled(false);
    ui->le_post    ->setEnabled(false);
    ui->le_phone   ->setEnabled(false);
    ui->le_intime  ->setEnabled(false);
    ui->le_remark  ->setEnabled(false);
    ui->le_account ->setEnabled(false);
    ui->le_password->setEnabled(false);
}

void TeacherLogin::on_treeWidget_clicked(const QModelIndex &index)
{

    int row = index.row();
    ui->stackedWidget->setCurrentIndex(row);
//    //获取左边treewidget鼠标点击事件的行的文字内容
//    auto item = ui->treeWidget->currentItem();
//    QString txt = item->text(0);
//    //根据文字内容,右边stackwidget显示对应的窗口
//    if (txt == "学生成绩查询")
//        ui->stackedWidget->setCurrentIndex(0);
//    else if (txt == "学生信息查询")
//        ui->stackedWidget->setCurrentIndex(1);
//    else if (txt == "教师信息查询")
//        ui->stackedWidget->setCurrentIndex(2);
}

void TeacherLogin::on_btn_want_exit_clicked()
{
    //设置为可修改
    ui->le_age     ->setEnabled(true);
    ui->le_sex     ->setEnabled(true);
    ui->le_name    ->setEnabled(true);
    ui->le_post    ->setEnabled(true);
    ui->le_phone   ->setEnabled(true);
    ui->le_account ->setEnabled(true);
    ui->le_password->setEnabled(true);
}

void TeacherLogin::on_btn_exit_clicked()
{

   //获得修改后的信息
   m_trinfo.age = ui->le_age    ->text().toInt()   ;
   m_trinfo.sex = ui->le_sex    ->text()   ;
   m_trinfo.trname = ui->le_name->text()   ;
   m_trinfo.post = ui->le_post  ->text()   ;
   m_trinfo.phone = ui->le_phone->text()   ;

   m_trlog.teachername = ui->le_name   ->text() ;
   m_trlog.traccount = ui->le_account  ->text() ;
   m_trlog.trpassword = ui->le_password->text() ;

   m_ptrStuExamMySql->UpdTeacherlnfo(m_trinfo);
   m_ptrStuExamMySql->UpdTeacherLogin(m_trlog);

   init_trinfo();
}

void TeacherLogin::on_btn_cancel_clicked()
{
     init_stuinfo();
     ui->le_search->clear();
}

void TeacherLogin::on_btn_search_clicked()
{
    //获取输入框中的内容
    init_stuinfo(ui->le_search->text());
}

void TeacherLogin::on_btn_reaccount_clicked()
{
    //获取被选中的行，修改他的账号密码
    int row = ui->tableWidget_info->currentRow();
    if (row < 0 || row > m_stuloglist.size())
        return;
    //获取学生id
    QString stuid = ui->tableWidget_info->model()->index(row,1).data().toString();

    for(auto & stu:m_stuloglist)
        if (stu.studentid == stuid){
            stu.account = stu.studentid;
            stu.password = "123456";

            //修改数据库中这个学生的登录信息
            StuLogin stulog = stu;
            m_ptrStuExamMySql->Updstulog(stulog);
            init_stuinfo(ui->le_search->text());
            return;
        }
}

void TeacherLogin::on_btn_cel_clicked()
{
    init_stuexam();
    ui->le_src_name->clear();
    ui->cbb_num->setCurrentIndex(0);
    ui->cbb_year->setCurrentIndex(0);
    ui->cbb_mouth->setCurrentIndex(0);

}

void TeacherLogin::on_btn_src_clicked()
{
    QString term =ui->cbb_num->currentText() + ui->cbb_year->currentText() + ui->cbb_mouth->currentText();
    init_stuexam(term,ui->le_src_name->text());
}

void TeacherLogin::on_btn_m_exit_clicked()
{
    this->close();
}
