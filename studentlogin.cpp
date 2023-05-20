#include "studentlogin.h"
#include "ui_studentlogin.h"

StudentLogin::StudentLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentLogin)
{
    ui->setupUi(this);
}

StudentLogin::~StudentLogin()
{
    delete ui;
}

void StudentLogin::init()
{
    //获取一个连接数据库的类
    m_ptrStuExamMySql = StuExamMysql::GetInstance();

    //学生id
    QString stuid = m_stulog.studentid;
    //获取学生信息
    m_stuinfo = m_ptrStuExamMySql->SelStulnfo(stuid);
    //获取学生所有成绩
    m_stuexamlist = m_ptrStuExamMySql->SelAnStuExam(stuid);


    update_info();
    update_exam("");
    ui->lb_info->setText(QString("学号： " + m_stuinfo.studentid + "\n姓名： " + m_stuinfo.name));


    //左边treewidget

    //设置默认全部展开
    ui->treeWidget->expandAll();



    //右边stackwidget的设置
    ui->stackedWidget->setCurrentIndex(0);//默认显示0页面

    //设置为不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //使列完全填充并平分( 自适应)
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
//    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);




    QFile f;
    f.setFileName("://Debug/debug/stuqss.css");
    f.open(QIODevice::ReadOnly);
    QString s = f.readAll();
    this->setStyleSheet(s);
    f.close();
}

void StudentLogin::on_treeWidget_clicked(const QModelIndex &index)
{
    int row = index.row();
    ui->stackedWidget->setCurrentIndex(row);
//    qDebug() << index.row();
//    //获取左边treewidget鼠标点击事件的行的文字内容
//    auto item = ui->treeWidget->currentItem();
//    QString txt = item->text(0);
//    //根据文字内容,右边stackwidget显示对应的窗口
//    if (txt == "学生成绩查询")
//        ui->stackedWidget->setCurrentIndex(0);
//    else if (txt == "学生信息查询")
//        ui->stackedWidget->setCurrentIndex(1);
}

void StudentLogin::on_btn_search_clicked()
{
    QString term = ui->cbb_year->currentText() + ui->cbb_term->currentText() + ui->cbb_mou->currentText();
    update_exam(term);
}

void StudentLogin::update_exam(QString term)
{

    QList<int> examl = m_ptrStuExamMySql->examlist(term);
    int line = 0;
    ui->tableWidget->setColumnCount(line);
    for (int val = 0, i = 0; val < m_stuexamlist.size() && i < examl.size(); val++) {
        if (m_stuexamlist[val].remark == examl[i]){
        i++;
        ui->tableWidget->setColumnCount(line+1);
//        QTableWidgetItem *exam0   = new QTableWidgetItem(  m_stuexaminfolist[i-1].studentid  )   ;
//        QTableWidgetItem *exam1   = new QTableWidgetItem(  m_stuexaminfolist[i-1].name       )   ;

        int p = m_stuexamlist[val].remark;
        QList<QString> intp = m_ptrStuExamMySql->ReTerm(p);
        QTableWidgetItem *exam2   = new QTableWidgetItem(intp[0]);
        QTableWidgetItem *exam1   = new QTableWidgetItem(intp[1]);
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

        ui->tableWidget->setItem(0, line,exam2);
        ui->tableWidget->setItem(1, line,exam1);
        ui->tableWidget->setItem(2, line,exam3);
        ui->tableWidget->setItem(3, line,exam4);
        ui->tableWidget->setItem(4, line,exam5);
        ui->tableWidget->setItem(5, line,exam6);
        ui->tableWidget->setItem(6, line,exam7);
        ui->tableWidget->setItem(7, line,exam8);
        ui->tableWidget->setItem(8, line,exam9);
        ui->tableWidget->setItem(9, line,exam10);
        ui->tableWidget->setItem(10,line,exam11);
        ui->tableWidget->setItem(11,line,exam12);

        line++;

        }
    }
}

void StudentLogin::update_info()
{
    //加载信息
    ui->le_id->setText(m_stuinfo.studentid);
    ui->le_sex->setText(m_stuinfo.sex);
    ui->le_tel->setText(m_stuinfo.telephone);
    ui->le_name->setText(m_stuinfo.name);
    ui->le_age->setText(QString("%1").arg(m_stuinfo.age));
    ui->le_class->setText(QString("%1").arg(m_stuinfo.uiclass));
    ui->le_grade->setText(QString("%1").arg(m_stuinfo.grade));
    ui->le_session->setText(QString("%1").arg(m_stuinfo.session));
    ui->le_account->setText(m_stulog.account);
    ui->le_passward->setText(m_stulog.password);

    //设置学生信息界面默认不可修改
    ui->le_id->setEnabled(false);
    ui->le_sex-> setEnabled(false);
    ui->le_tel-> setEnabled(false);
    ui->le_name-> setEnabled(false);
    ui->le_age-> setEnabled(false);
    ui->le_class-> setEnabled(false);
    ui->le_grade-> setEnabled(false);
    ui->le_session-> setEnabled(false);
    ui->le_account-> setEnabled(false);
    ui->le_passward-> setEnabled(false);


}

void StudentLogin::on_btn_cancel_clicked()
{
    ui->cbb_term->setCurrentIndex(0);
    ui->cbb_mou->setCurrentIndex(0);
    ui->cbb_year->setCurrentIndex(0);
    update_exam("");
}

void StudentLogin::on_btn_need_upd_clicked()
{
    ui->le_sex->  setEnabled(true);
    ui->le_tel->  setEnabled(true);
    ui->le_name-> setEnabled(true);
    ui->le_age->  setEnabled(true);
    ui->le_account-> setEnabled(true);
    ui->le_passward->setEnabled(true);
}

void StudentLogin::on_btn_update_clicked()
{
    m_stuinfo.sex =       ui->le_sex->     text();
    m_stuinfo.telephone = ui->le_tel->     text();
    m_stuinfo.name =      ui->le_name->    text();
    m_stuinfo.age =       ui->le_age->     text().toInt();
    m_stulog.account =    ui->le_account-> text();
    m_stulog.password =   ui->le_passward->text();

    m_ptrStuExamMySql->Updstulnfo(m_stuinfo);
    m_ptrStuExamMySql->Updstulog(m_stulog);
    update_info();
}

void StudentLogin::on_btn_exit_clicked()
{
    this->close();
}
