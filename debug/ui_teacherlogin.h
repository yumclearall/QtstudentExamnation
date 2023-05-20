/********************************************************************************
** Form generated from reading UI file 'teacherlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERLOGIN_H
#define UI_TEACHERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherLogin
{
public:
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *stuexam;
    QGridLayout *gridLayout_2;
    QComboBox *cbb_num;
    QComboBox *cbb_year;
    QLabel *lb_num;
    QLabel *lb_year;
    QComboBox *cbb_mouth;
    QPushButton *btn_src;
    QPushButton *btn_cel;
    QLabel *lb_muoth;
    QTableWidget *tableWidget_exam;
    QLineEdit *le_src_name;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_add_some;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btn_del_some;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_del;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_edit;
    QSpacerItem *horizontalSpacer_9;
    QWidget *stuinfo;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QPushButton *btn_cancel;
    QTableWidget *tableWidget_info;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *btn_exit_2;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *btn_reaccount;
    QSpacerItem *horizontalSpacer_25;
    QWidget *trinfo;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *btn_want_exit;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer_29;
    QLineEdit *le_name;
    QLineEdit *le_sex;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *le_age;
    QLineEdit *le_id;
    QLineEdit *le_account;
    QLineEdit *le_intime;
    QLineEdit *le_post;
    QLineEdit *le_remark;
    QLabel *label_4;
    QLineEdit *le_phone;
    QLineEdit *le_password;
    QLabel *lb_account;
    QLabel *lb_name;
    QLabel *lb_password;
    QLabel *lb_id;
    QLabel *lb_port;
    QLabel *lb_intime;
    QLabel *lb_sex;
    QLabel *lb_age;
    QLabel *lb_remark;
    QLabel *lb_phone;
    QLabel *lb_remarks;
    QLabel *lb__remarks;
    QLabel *lb_clssize;
    QLabel *lb__clssize;
    QLabel *label;
    QSpacerItem *horizontalSpacer_30;
    QTreeWidget *treeWidget;
    QPushButton *btn_m_exit;
    QLabel *lb_class;

    void setupUi(QWidget *TeacherLogin)
    {
        if (TeacherLogin->objectName().isEmpty())
            TeacherLogin->setObjectName(QStringLiteral("TeacherLogin"));
        TeacherLogin->resize(1000, 800);
        TeacherLogin->setMinimumSize(QSize(1000, 800));
        gridLayout_4 = new QGridLayout(TeacherLogin);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        stackedWidget = new QStackedWidget(TeacherLogin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stuexam = new QWidget();
        stuexam->setObjectName(QStringLiteral("stuexam"));
        gridLayout_2 = new QGridLayout(stuexam);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbb_num = new QComboBox(stuexam);
        cbb_num->setObjectName(QStringLiteral("cbb_num"));
        cbb_num->setMinimumSize(QSize(0, 30));
        cbb_num->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_num, 0, 2, 1, 1);

        cbb_year = new QComboBox(stuexam);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setMinimumSize(QSize(0, 30));
        cbb_year->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_year, 0, 4, 1, 1);

        lb_num = new QLabel(stuexam);
        lb_num->setObjectName(QStringLiteral("lb_num"));
        lb_num->setMinimumSize(QSize(0, 30));
        lb_num->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lb_num, 0, 1, 1, 1);

        lb_year = new QLabel(stuexam);
        lb_year->setObjectName(QStringLiteral("lb_year"));
        lb_year->setMinimumSize(QSize(0, 30));
        lb_year->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lb_year, 0, 3, 1, 1);

        cbb_mouth = new QComboBox(stuexam);
        cbb_mouth->setObjectName(QStringLiteral("cbb_mouth"));
        cbb_mouth->setMinimumSize(QSize(0, 30));
        cbb_mouth->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_mouth, 0, 6, 1, 1);

        btn_src = new QPushButton(stuexam);
        btn_src->setObjectName(QStringLiteral("btn_src"));
        btn_src->setMinimumSize(QSize(0, 30));
        btn_src->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_src, 0, 9, 1, 1);

        btn_cel = new QPushButton(stuexam);
        btn_cel->setObjectName(QStringLiteral("btn_cel"));
        btn_cel->setMinimumSize(QSize(0, 30));
        btn_cel->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_cel, 0, 10, 1, 1);

        lb_muoth = new QLabel(stuexam);
        lb_muoth->setObjectName(QStringLiteral("lb_muoth"));
        lb_muoth->setMinimumSize(QSize(0, 30));
        lb_muoth->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lb_muoth, 0, 5, 1, 1);

        tableWidget_exam = new QTableWidget(stuexam);
        if (tableWidget_exam->columnCount() < 14)
            tableWidget_exam->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_exam->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        tableWidget_exam->setObjectName(QStringLiteral("tableWidget_exam"));
        tableWidget_exam->setFocusPolicy(Qt::StrongFocus);
        tableWidget_exam->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget_exam->setDragEnabled(true);
        tableWidget_exam->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget_exam, 1, 0, 1, 11);

        le_src_name = new QLineEdit(stuexam);
        le_src_name->setObjectName(QStringLiteral("le_src_name"));
        le_src_name->setMinimumSize(QSize(150, 30));

        gridLayout_2->addWidget(le_src_name, 0, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget_2 = new QWidget(stuexam);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(720, 50));
        widget_2->setSizeIncrement(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btn_add_some = new QPushButton(widget_2);
        btn_add_some->setObjectName(QStringLiteral("btn_add_some"));
        btn_add_some->setMinimumSize(QSize(0, 30));
        btn_add_some->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_add_some);

        horizontalSpacer_11 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        btn_del_some = new QPushButton(widget_2);
        btn_del_some->setObjectName(QStringLiteral("btn_del_some"));
        btn_del_some->setMinimumSize(QSize(0, 30));
        btn_del_some->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_del_some);

        horizontalSpacer_7 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        btn_add = new QPushButton(widget_2);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setMinimumSize(QSize(0, 30));
        btn_add->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_add);

        horizontalSpacer_8 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        btn_del = new QPushButton(widget_2);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setMinimumSize(QSize(0, 30));
        btn_del->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_del);

        horizontalSpacer_12 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        btn_edit = new QPushButton(widget_2);
        btn_edit->setObjectName(QStringLiteral("btn_edit"));
        btn_edit->setMinimumSize(QSize(0, 30));
        btn_edit->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_edit);

        horizontalSpacer_9 = new QSpacerItem(143, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        gridLayout_2->addWidget(widget_2, 2, 0, 1, 11);

        stackedWidget->addWidget(stuexam);
        stuinfo = new QWidget();
        stuinfo->setObjectName(QStringLiteral("stuinfo"));
        gridLayout = new QGridLayout(stuinfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        le_search = new QLineEdit(stuinfo);
        le_search->setObjectName(QStringLiteral("le_search"));
        le_search->setMinimumSize(QSize(180, 30));

        gridLayout->addWidget(le_search, 0, 2, 1, 1);

        btn_search = new QPushButton(stuinfo);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setMinimumSize(QSize(0, 30));
        btn_search->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btn_search, 0, 3, 1, 1);

        btn_cancel = new QPushButton(stuinfo);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(0, 30));
        btn_cancel->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btn_cancel, 0, 4, 1, 1);

        tableWidget_info = new QTableWidget(stuinfo);
        if (tableWidget_info->columnCount() < 7)
            tableWidget_info->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_info->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        tableWidget_info->setObjectName(QStringLiteral("tableWidget_info"));
        tableWidget_info->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_info, 1, 0, 1, 5);

        widget_3 = new QWidget(stuinfo);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(600, 50));
        widget_3->setSizeIncrement(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_26 = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_26);

        btn_exit_2 = new QPushButton(widget_3);
        btn_exit_2->setObjectName(QStringLiteral("btn_exit_2"));
        btn_exit_2->setMinimumSize(QSize(0, 30));
        btn_exit_2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btn_exit_2);

        horizontalSpacer_24 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_24);

        btn_reaccount = new QPushButton(widget_3);
        btn_reaccount->setObjectName(QStringLiteral("btn_reaccount"));
        btn_reaccount->setMinimumSize(QSize(0, 30));
        btn_reaccount->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btn_reaccount);

        horizontalSpacer_25 = new QSpacerItem(143, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_25);


        gridLayout->addWidget(widget_3, 2, 0, 1, 5);

        stackedWidget->addWidget(stuinfo);
        trinfo = new QWidget();
        trinfo->setObjectName(QStringLiteral("trinfo"));
        gridLayout_3 = new QGridLayout(trinfo);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new QWidget(trinfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(720, 0));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_27);

        btn_want_exit = new QPushButton(widget);
        btn_want_exit->setObjectName(QStringLiteral("btn_want_exit"));
        btn_want_exit->setMinimumSize(QSize(150, 30));
        btn_want_exit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(btn_want_exit);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_28);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setMinimumSize(QSize(150, 30));
        btn_exit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(btn_exit);

        horizontalSpacer_29 = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_29);


        gridLayout_3->addWidget(widget, 11, 0, 1, 10);

        le_name = new QLineEdit(trinfo);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setMinimumSize(QSize(180, 30));
        le_name->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_name, 6, 2, 1, 1);

        le_sex = new QLineEdit(trinfo);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setMinimumSize(QSize(180, 30));
        le_sex->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_sex, 7, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 9, 3, 1);

        horizontalSpacer_4 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        le_age = new QLineEdit(trinfo);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setMinimumSize(QSize(180, 30));
        le_age->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_age, 7, 8, 1, 1);

        le_id = new QLineEdit(trinfo);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setMinimumSize(QSize(180, 30));
        le_id->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_id, 6, 8, 1, 1);

        le_account = new QLineEdit(trinfo);
        le_account->setObjectName(QStringLiteral("le_account"));
        le_account->setMinimumSize(QSize(180, 30));
        le_account->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_account, 10, 2, 1, 1);

        le_intime = new QLineEdit(trinfo);
        le_intime->setObjectName(QStringLiteral("le_intime"));
        le_intime->setMinimumSize(QSize(180, 30));
        le_intime->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_intime, 9, 2, 1, 1);

        le_post = new QLineEdit(trinfo);
        le_post->setObjectName(QStringLiteral("le_post"));
        le_post->setMinimumSize(QSize(180, 30));
        le_post->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_post, 8, 2, 1, 1);

        le_remark = new QLineEdit(trinfo);
        le_remark->setObjectName(QStringLiteral("le_remark"));
        le_remark->setMinimumSize(QSize(180, 30));
        le_remark->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_remark, 9, 8, 1, 1);

        label_4 = new QLabel(trinfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 60));
        label_4->setMaximumSize(QSize(16777215, 60));

        gridLayout_3->addWidget(label_4, 0, 1, 1, 3);

        le_phone = new QLineEdit(trinfo);
        le_phone->setObjectName(QStringLiteral("le_phone"));
        le_phone->setMinimumSize(QSize(180, 30));
        le_phone->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_phone, 8, 8, 1, 1);

        le_password = new QLineEdit(trinfo);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setMinimumSize(QSize(180, 30));
        le_password->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_password, 10, 8, 1, 1);

        lb_account = new QLabel(trinfo);
        lb_account->setObjectName(QStringLiteral("lb_account"));
        lb_account->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_account, 10, 1, 1, 1);

        lb_name = new QLabel(trinfo);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_name, 6, 1, 1, 1);

        lb_password = new QLabel(trinfo);
        lb_password->setObjectName(QStringLiteral("lb_password"));
        lb_password->setMinimumSize(QSize(0, 30));
        lb_password->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(lb_password, 10, 5, 1, 1);

        lb_id = new QLabel(trinfo);
        lb_id->setObjectName(QStringLiteral("lb_id"));
        lb_id->setMinimumSize(QSize(0, 30));
        lb_id->setMaximumSize(QSize(100, 1666));

        gridLayout_3->addWidget(lb_id, 6, 5, 1, 1);

        lb_port = new QLabel(trinfo);
        lb_port->setObjectName(QStringLiteral("lb_port"));
        lb_port->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_port, 8, 1, 1, 1);

        lb_intime = new QLabel(trinfo);
        lb_intime->setObjectName(QStringLiteral("lb_intime"));
        lb_intime->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_intime, 9, 1, 1, 1);

        lb_sex = new QLabel(trinfo);
        lb_sex->setObjectName(QStringLiteral("lb_sex"));
        lb_sex->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_sex, 7, 1, 1, 1);

        lb_age = new QLabel(trinfo);
        lb_age->setObjectName(QStringLiteral("lb_age"));
        lb_age->setMinimumSize(QSize(0, 30));
        lb_age->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_age, 7, 5, 1, 1);

        lb_remark = new QLabel(trinfo);
        lb_remark->setObjectName(QStringLiteral("lb_remark"));
        lb_remark->setMinimumSize(QSize(0, 30));
        lb_remark->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(lb_remark, 9, 5, 1, 1);

        lb_phone = new QLabel(trinfo);
        lb_phone->setObjectName(QStringLiteral("lb_phone"));
        lb_phone->setMinimumSize(QSize(0, 30));
        lb_phone->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_phone, 8, 5, 1, 1);

        lb_remarks = new QLabel(trinfo);
        lb_remarks->setObjectName(QStringLiteral("lb_remarks"));
        lb_remarks->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_remarks, 3, 1, 1, 1);

        lb__remarks = new QLabel(trinfo);
        lb__remarks->setObjectName(QStringLiteral("lb__remarks"));
        lb__remarks->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb__remarks, 3, 2, 1, 1);

        lb_clssize = new QLabel(trinfo);
        lb_clssize->setObjectName(QStringLiteral("lb_clssize"));
        lb_clssize->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_clssize, 3, 5, 1, 1);

        lb__clssize = new QLabel(trinfo);
        lb__clssize->setObjectName(QStringLiteral("lb__clssize"));
        lb__clssize->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb__clssize, 3, 8, 1, 1);

        stackedWidget->addWidget(trinfo);

        gridLayout_4->addWidget(stackedWidget, 1, 1, 2, 4);

        label = new QLabel(TeacherLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 120));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(200, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_30, 2, 0, 1, 1);

        treeWidget = new QTreeWidget(TeacherLogin);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        treeWidget->setIndentation(8);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setHighlightSections(true);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_4->addWidget(treeWidget, 1, 0, 1, 1);

        btn_m_exit = new QPushButton(TeacherLogin);
        btn_m_exit->setObjectName(QStringLiteral("btn_m_exit"));
        btn_m_exit->setMinimumSize(QSize(0, 30));
        btn_m_exit->setMaximumSize(QSize(60, 60));

        gridLayout_4->addWidget(btn_m_exit, 0, 4, 1, 1);

        lb_class = new QLabel(TeacherLogin);
        lb_class->setObjectName(QStringLiteral("lb_class"));
        lb_class->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(lb_class, 0, 3, 1, 1);


        retranslateUi(TeacherLogin);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TeacherLogin);
    } // setupUi

    void retranslateUi(QWidget *TeacherLogin)
    {
        TeacherLogin->setWindowTitle(QApplication::translate("TeacherLogin", "Form", Q_NULLPTR));
        cbb_num->clear();
        cbb_num->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("TeacherLogin", "1", Q_NULLPTR)
         << QApplication::translate("TeacherLogin", "2", Q_NULLPTR)
         << QApplication::translate("TeacherLogin", "3", Q_NULLPTR)
        );
        cbb_year->clear();
        cbb_year->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("TeacherLogin", "\344\270\212", Q_NULLPTR)
         << QApplication::translate("TeacherLogin", "\344\270\213", Q_NULLPTR)
        );
        lb_num->setText(QApplication::translate("TeacherLogin", "\347\254\254", Q_NULLPTR));
        lb_year->setText(QApplication::translate("TeacherLogin", "\345\255\246\345\271\264", Q_NULLPTR));
        cbb_mouth->clear();
        cbb_mouth->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("TeacherLogin", "\346\234\237\344\270\255", Q_NULLPTR)
         << QApplication::translate("TeacherLogin", "\346\234\237\346\234\253", Q_NULLPTR)
        );
        btn_src->setText(QApplication::translate("TeacherLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        btn_cel->setText(QApplication::translate("TeacherLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        lb_muoth->setText(QApplication::translate("TeacherLogin", "\345\255\246\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_exam->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TeacherLogin", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_exam->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TeacherLogin", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_exam->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TeacherLogin", "\345\255\246\345\271\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_exam->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("TeacherLogin", "\350\257\255\346\226\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_exam->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("TeacherLogin", "\346\225\260\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_exam->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("TeacherLogin", "\350\213\261\350\257\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_exam->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("TeacherLogin", "\346\224\277\346\262\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_exam->horizontalHeaderItem(8);
        ___qtablewidgetitem7->setText(QApplication::translate("TeacherLogin", "\345\216\206\345\217\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_exam->horizontalHeaderItem(9);
        ___qtablewidgetitem8->setText(QApplication::translate("TeacherLogin", "\345\234\260\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_exam->horizontalHeaderItem(10);
        ___qtablewidgetitem9->setText(QApplication::translate("TeacherLogin", "\347\224\237\347\211\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_exam->horizontalHeaderItem(11);
        ___qtablewidgetitem10->setText(QApplication::translate("TeacherLogin", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_exam->horizontalHeaderItem(12);
        ___qtablewidgetitem11->setText(QApplication::translate("TeacherLogin", "\345\214\226\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_exam->horizontalHeaderItem(13);
        ___qtablewidgetitem12->setText(QApplication::translate("TeacherLogin", "\346\200\273\345\210\206", Q_NULLPTR));
        le_src_name->setPlaceholderText(QApplication::translate("TeacherLogin", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215/\345\255\246\345\217\267\345\220\216\344\270\244\344\275\215...", Q_NULLPTR));
        btn_add_some->setText(QApplication::translate("TeacherLogin", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        btn_del_some->setText(QApplication::translate("TeacherLogin", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_add->setText(QApplication::translate("TeacherLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_del->setText(QApplication::translate("TeacherLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_edit->setText(QApplication::translate("TeacherLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        le_search->setPlaceholderText(QApplication::translate("TeacherLogin", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215/\345\255\246\345\217\267\345\220\216\344\270\244\344\275\215...", Q_NULLPTR));
        btn_search->setText(QApplication::translate("TeacherLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("TeacherLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_info->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("TeacherLogin", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_info->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("TeacherLogin", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_info->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("TeacherLogin", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_info->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("TeacherLogin", "\345\271\264\351\276\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_info->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("TeacherLogin", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_info->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("TeacherLogin", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_info->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("TeacherLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        btn_exit_2->setText(QApplication::translate("TeacherLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_reaccount->setText(QApplication::translate("TeacherLogin", "\351\207\215\347\275\256\345\257\206\347\240\201", Q_NULLPTR));
        btn_want_exit->setText(QApplication::translate("TeacherLogin", "\346\210\221\350\246\201\344\277\256\346\224\271", Q_NULLPTR));
        btn_exit->setText(QApplication::translate("TeacherLogin", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("TeacherLogin", "\346\225\231\345\270\210\344\277\241\346\201\257", Q_NULLPTR));
        lb_account->setText(QApplication::translate("TeacherLogin", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        lb_name->setText(QApplication::translate("TeacherLogin", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lb_password->setText(QApplication::translate("TeacherLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lb_id->setText(QApplication::translate("TeacherLogin", "\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        lb_port->setText(QApplication::translate("TeacherLogin", "\345\262\227\344\275\215\357\274\232", Q_NULLPTR));
        lb_intime->setText(QApplication::translate("TeacherLogin", "\345\205\245\345\255\246\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        lb_sex->setText(QApplication::translate("TeacherLogin", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lb_age->setText(QApplication::translate("TeacherLogin", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lb_remark->setText(QApplication::translate("TeacherLogin", "\345\244\207\346\263\250\357\274\232", Q_NULLPTR));
        lb_phone->setText(QApplication::translate("TeacherLogin", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", Q_NULLPTR));
        lb_remarks->setText(QApplication::translate("TeacherLogin", "\346\225\231\345\255\246\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
        lb__remarks->setText(QString());
        lb_clssize->setText(QApplication::translate("TeacherLogin", "\347\217\255\347\272\247\344\272\272\346\225\260:", Q_NULLPTR));
        lb__clssize->setText(QString());
        label->setText(QApplication::translate("TeacherLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TeacherLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("TeacherLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("TeacherLogin", "\345\255\246\347\224\237\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("TeacherLogin", "\345\255\246\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("TeacherLogin", "\346\225\231\345\270\210\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        btn_m_exit->setText(QApplication::translate("TeacherLogin", "\351\200\200\345\207\272", Q_NULLPTR));
        lb_class->setText(QApplication::translate("TeacherLogin", "\347\254\254 \345\261\212\n"
" \345\271\264 \347\217\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TeacherLogin: public Ui_TeacherLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERLOGIN_H
