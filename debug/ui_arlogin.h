/********************************************************************************
** Form generated from reading UI file 'arlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARLOGIN_H
#define UI_ARLOGIN_H

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

class Ui_ArLogin
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btn_exit;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *stuinfo;
    QGridLayout *gridLayout_5;
    QPushButton *btn_stuinfo_canael;
    QPushButton *btn_stuinfo_src;
    QTableWidget *tableWidget_stuinfo;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *le_stuinfo_id;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_stuinfo_addsome;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_72;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *btn_stuinfo_delsome;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_73;
    QPushButton *btn_stuinfo_add;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_stuinfo_del;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_stuinfo_upd;
    QSpacerItem *horizontalSpacer_4;
    QWidget *stuexam;
    QGridLayout *gridLayout_7;
    QLineEdit *le_stuexam_id_name;
    QLabel *lb_stuexam_num;
    QLabel *lb_stuexam_term;
    QLabel *lb_stuexam_year;
    QPushButton *btn_stuexam_cancel;
    QComboBox *cbb_stuexam_year;
    QComboBox *cbb_stuexam_num;
    QComboBox *cbb_stuexam_term;
    QTableWidget *tableWidget_stuexam;
    QPushButton *btn_stuexam_src;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *btn_stuexam_addsome;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *btn_stuexam_delsome;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *btn_stuexam_add;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *btn_stuexam_del;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *btn_stuexam_upd;
    QSpacerItem *horizontalSpacer_49;
    QSpacerItem *horizontalSpacer_22;
    QWidget *classmg;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_cls_addsome;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_cls_delsome;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_cls_add;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_cls_del;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btn_cls_upd;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *tableWidget_cls;
    QLineEdit *le_cls_ses_cls;
    QPushButton *btn_cls__cancel;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_cls_src;
    QWidget *tr_msg;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *le_tr_trid_name;
    QPushButton *btn_tr_cancel;
    QTableWidget *tableWidget_tr;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_74;
    QPushButton *btn_tr_add;
    QSpacerItem *horizontalSpacer_75;
    QPushButton *btn_tr_del;
    QSpacerItem *horizontalSpacer_77;
    QPushButton *btn_tr_upd;
    QSpacerItem *horizontalSpacer_76;
    QPushButton *btn_tr_src;
    QWidget *ar_msg;
    QGridLayout *gridLayout_3;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_84;
    QPushButton *btn_ar_add;
    QSpacerItem *horizontalSpacer_81;
    QPushButton *btn_ar_del;
    QSpacerItem *horizontalSpacer_82;
    QPushButton *btn_ar_upd;
    QSpacerItem *horizontalSpacer_83;
    QTableWidget *tableWidget_ar;
    QWidget *others;
    QGridLayout *gridLayout_6;
    QPushButton *btn_stu_grade_add;
    QPushButton *btn_addsome_4;
    QPushButton *btn_cls_remark_add;
    QPushButton *btn_clearall_2;
    QPushButton *btn_addsome;
    QPushButton *btn_clearall;
    QPushButton *btn_del_session;
    QPushButton *btn_exam_session;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *ArLogin)
    {
        if (ArLogin->objectName().isEmpty())
            ArLogin->setObjectName(QStringLiteral("ArLogin"));
        ArLogin->setEnabled(true);
        ArLogin->resize(1008, 800);
        gridLayout = new QGridLayout(ArLogin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ArLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 120));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        btn_exit = new QPushButton(ArLogin);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(btn_exit, 0, 2, 1, 1);

        treeWidget = new QTreeWidget(ArLogin);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        treeWidget->setIndentation(8);
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(ArLogin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stuinfo = new QWidget();
        stuinfo->setObjectName(QStringLiteral("stuinfo"));
        gridLayout_5 = new QGridLayout(stuinfo);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        btn_stuinfo_canael = new QPushButton(stuinfo);
        btn_stuinfo_canael->setObjectName(QStringLiteral("btn_stuinfo_canael"));
        btn_stuinfo_canael->setMinimumSize(QSize(0, 30));
        btn_stuinfo_canael->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(btn_stuinfo_canael, 1, 5, 1, 1);

        btn_stuinfo_src = new QPushButton(stuinfo);
        btn_stuinfo_src->setObjectName(QStringLiteral("btn_stuinfo_src"));
        btn_stuinfo_src->setMinimumSize(QSize(0, 30));
        btn_stuinfo_src->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(btn_stuinfo_src, 1, 4, 1, 1);

        tableWidget_stuinfo = new QTableWidget(stuinfo);
        if (tableWidget_stuinfo->columnCount() < 10)
            tableWidget_stuinfo->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_stuinfo->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget_stuinfo->setObjectName(QStringLiteral("tableWidget_stuinfo"));
        tableWidget_stuinfo->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(tableWidget_stuinfo, 3, 0, 1, 6);

        horizontalSpacer_9 = new QSpacerItem(439, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        le_stuinfo_id = new QLineEdit(stuinfo);
        le_stuinfo_id->setObjectName(QStringLiteral("le_stuinfo_id"));
        le_stuinfo_id->setMinimumSize(QSize(150, 30));

        gridLayout_5->addWidget(le_stuinfo_id, 1, 1, 1, 1);

        widget = new QWidget(stuinfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(780, 50));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        btn_stuinfo_addsome = new QPushButton(widget);
        btn_stuinfo_addsome->setObjectName(QStringLiteral("btn_stuinfo_addsome"));
        btn_stuinfo_addsome->setMinimumSize(QSize(0, 30));
        btn_stuinfo_addsome->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(btn_stuinfo_addsome);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        horizontalSpacer_72 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_72);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_29);

        horizontalSpacer_28 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_28);

        btn_stuinfo_delsome = new QPushButton(widget);
        btn_stuinfo_delsome->setObjectName(QStringLiteral("btn_stuinfo_delsome"));
        btn_stuinfo_delsome->setMinimumSize(QSize(0, 30));
        btn_stuinfo_delsome->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(btn_stuinfo_delsome);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        horizontalSpacer_16 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        horizontalSpacer_73 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_73);

        btn_stuinfo_add = new QPushButton(widget);
        btn_stuinfo_add->setObjectName(QStringLiteral("btn_stuinfo_add"));
        btn_stuinfo_add->setMinimumSize(QSize(0, 30));
        btn_stuinfo_add->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(btn_stuinfo_add);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_19);

        horizontalSpacer_18 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        btn_stuinfo_del = new QPushButton(widget);
        btn_stuinfo_del->setObjectName(QStringLiteral("btn_stuinfo_del"));
        btn_stuinfo_del->setMinimumSize(QSize(0, 30));
        btn_stuinfo_del->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(btn_stuinfo_del);

        horizontalSpacer = new QSpacerItem(163, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btn_stuinfo_upd = new QPushButton(widget);
        btn_stuinfo_upd->setObjectName(QStringLiteral("btn_stuinfo_upd"));
        btn_stuinfo_upd->setMinimumSize(QSize(0, 30));
        btn_stuinfo_upd->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(btn_stuinfo_upd);

        horizontalSpacer_4 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        gridLayout_5->addWidget(widget, 4, 0, 1, 6);

        stackedWidget->addWidget(stuinfo);
        stuexam = new QWidget();
        stuexam->setObjectName(QStringLiteral("stuexam"));
        gridLayout_7 = new QGridLayout(stuexam);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        le_stuexam_id_name = new QLineEdit(stuexam);
        le_stuexam_id_name->setObjectName(QStringLiteral("le_stuexam_id_name"));
        le_stuexam_id_name->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(le_stuexam_id_name, 0, 7, 1, 1);

        lb_stuexam_num = new QLabel(stuexam);
        lb_stuexam_num->setObjectName(QStringLiteral("lb_stuexam_num"));
        lb_stuexam_num->setMinimumSize(QSize(0, 30));
        lb_stuexam_num->setMaximumSize(QSize(40, 16777215));

        gridLayout_7->addWidget(lb_stuexam_num, 0, 1, 1, 1);

        lb_stuexam_term = new QLabel(stuexam);
        lb_stuexam_term->setObjectName(QStringLiteral("lb_stuexam_term"));
        lb_stuexam_term->setMinimumSize(QSize(0, 30));
        lb_stuexam_term->setMaximumSize(QSize(40, 16777215));

        gridLayout_7->addWidget(lb_stuexam_term, 0, 5, 1, 1);

        lb_stuexam_year = new QLabel(stuexam);
        lb_stuexam_year->setObjectName(QStringLiteral("lb_stuexam_year"));
        lb_stuexam_year->setMinimumSize(QSize(0, 30));
        lb_stuexam_year->setMaximumSize(QSize(40, 16777215));

        gridLayout_7->addWidget(lb_stuexam_year, 0, 3, 1, 1);

        btn_stuexam_cancel = new QPushButton(stuexam);
        btn_stuexam_cancel->setObjectName(QStringLiteral("btn_stuexam_cancel"));
        btn_stuexam_cancel->setMinimumSize(QSize(0, 30));
        btn_stuexam_cancel->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(btn_stuexam_cancel, 0, 9, 1, 1);

        cbb_stuexam_year = new QComboBox(stuexam);
        cbb_stuexam_year->setObjectName(QStringLiteral("cbb_stuexam_year"));
        cbb_stuexam_year->setMinimumSize(QSize(0, 30));
        cbb_stuexam_year->setMaximumSize(QSize(60, 16777215));

        gridLayout_7->addWidget(cbb_stuexam_year, 0, 4, 1, 1);

        cbb_stuexam_num = new QComboBox(stuexam);
        cbb_stuexam_num->setObjectName(QStringLiteral("cbb_stuexam_num"));
        cbb_stuexam_num->setMinimumSize(QSize(0, 30));
        cbb_stuexam_num->setMaximumSize(QSize(60, 16777215));

        gridLayout_7->addWidget(cbb_stuexam_num, 0, 2, 1, 1);

        cbb_stuexam_term = new QComboBox(stuexam);
        cbb_stuexam_term->setObjectName(QStringLiteral("cbb_stuexam_term"));
        cbb_stuexam_term->setMinimumSize(QSize(0, 30));
        cbb_stuexam_term->setMaximumSize(QSize(60, 16777215));

        gridLayout_7->addWidget(cbb_stuexam_term, 0, 6, 1, 1);

        tableWidget_stuexam = new QTableWidget(stuexam);
        if (tableWidget_stuexam->columnCount() < 14)
            tableWidget_stuexam->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(9, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(10, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(11, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(12, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_stuexam->setHorizontalHeaderItem(13, __qtablewidgetitem23);
        tableWidget_stuexam->setObjectName(QStringLiteral("tableWidget_stuexam"));
        tableWidget_stuexam->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidget_stuexam, 1, 0, 1, 11);

        btn_stuexam_src = new QPushButton(stuexam);
        btn_stuexam_src->setObjectName(QStringLiteral("btn_stuexam_src"));
        btn_stuexam_src->setMinimumSize(QSize(0, 30));
        btn_stuexam_src->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(btn_stuexam_src, 0, 8, 1, 1);

        widget_3 = new QWidget(stuexam);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(600, 50));
        widget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_21 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_21);

        horizontalSpacer_27 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_27);

        btn_stuexam_addsome = new QPushButton(widget_3);
        btn_stuexam_addsome->setObjectName(QStringLiteral("btn_stuexam_addsome"));
        btn_stuexam_addsome->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(btn_stuexam_addsome);

        horizontalSpacer_26 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_26);

        btn_stuexam_delsome = new QPushButton(widget_3);
        btn_stuexam_delsome->setObjectName(QStringLiteral("btn_stuexam_delsome"));
        btn_stuexam_delsome->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(btn_stuexam_delsome);

        horizontalSpacer_25 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_25);

        btn_stuexam_add = new QPushButton(widget_3);
        btn_stuexam_add->setObjectName(QStringLiteral("btn_stuexam_add"));
        btn_stuexam_add->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(btn_stuexam_add);

        horizontalSpacer_24 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_24);

        btn_stuexam_del = new QPushButton(widget_3);
        btn_stuexam_del->setObjectName(QStringLiteral("btn_stuexam_del"));
        btn_stuexam_del->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(btn_stuexam_del);

        horizontalSpacer_23 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_23);

        btn_stuexam_upd = new QPushButton(widget_3);
        btn_stuexam_upd->setObjectName(QStringLiteral("btn_stuexam_upd"));
        btn_stuexam_upd->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(btn_stuexam_upd);

        horizontalSpacer_49 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_49);

        horizontalSpacer_22 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_22);


        gridLayout_7->addWidget(widget_3, 2, 0, 1, 11);

        stackedWidget->addWidget(stuexam);
        classmg = new QWidget();
        classmg->setObjectName(QStringLiteral("classmg"));
        gridLayout_2 = new QGridLayout(classmg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_2 = new QWidget(classmg);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(600, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btn_cls_addsome = new QPushButton(widget_2);
        btn_cls_addsome->setObjectName(QStringLiteral("btn_cls_addsome"));
        btn_cls_addsome->setMinimumSize(QSize(0, 30));
        btn_cls_addsome->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_cls_addsome);

        horizontalSpacer_8 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        btn_cls_delsome = new QPushButton(widget_2);
        btn_cls_delsome->setObjectName(QStringLiteral("btn_cls_delsome"));
        btn_cls_delsome->setMinimumSize(QSize(0, 30));
        btn_cls_delsome->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_cls_delsome);

        horizontalSpacer_10 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        btn_cls_add = new QPushButton(widget_2);
        btn_cls_add->setObjectName(QStringLiteral("btn_cls_add"));
        btn_cls_add->setMinimumSize(QSize(0, 30));
        btn_cls_add->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_cls_add);

        horizontalSpacer_13 = new QSpacerItem(102, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        btn_cls_del = new QPushButton(widget_2);
        btn_cls_del->setObjectName(QStringLiteral("btn_cls_del"));
        btn_cls_del->setMinimumSize(QSize(0, 30));
        btn_cls_del->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_cls_del);

        horizontalSpacer_20 = new QSpacerItem(128, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        btn_cls_upd = new QPushButton(widget_2);
        btn_cls_upd->setObjectName(QStringLiteral("btn_cls_upd"));
        btn_cls_upd->setMinimumSize(QSize(0, 30));
        btn_cls_upd->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(btn_cls_upd);

        horizontalSpacer_14 = new QSpacerItem(102, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);


        gridLayout_2->addWidget(widget_2, 5, 0, 1, 7);

        tableWidget_cls = new QTableWidget(classmg);
        if (tableWidget_cls->columnCount() < 8)
            tableWidget_cls->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_cls->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        tableWidget_cls->setObjectName(QStringLiteral("tableWidget_cls"));
        tableWidget_cls->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget_cls, 4, 0, 1, 8);

        le_cls_ses_cls = new QLineEdit(classmg);
        le_cls_ses_cls->setObjectName(QStringLiteral("le_cls_ses_cls"));
        le_cls_ses_cls->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_cls_ses_cls, 1, 3, 1, 1);

        btn_cls__cancel = new QPushButton(classmg);
        btn_cls__cancel->setObjectName(QStringLiteral("btn_cls__cancel"));
        btn_cls__cancel->setMinimumSize(QSize(0, 30));
        btn_cls__cancel->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_cls__cancel, 1, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        btn_cls_src = new QPushButton(classmg);
        btn_cls_src->setObjectName(QStringLiteral("btn_cls_src"));
        btn_cls_src->setMinimumSize(QSize(0, 30));
        btn_cls_src->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_cls_src, 1, 4, 1, 2);

        stackedWidget->addWidget(classmg);
        tr_msg = new QWidget();
        tr_msg->setObjectName(QStringLiteral("tr_msg"));
        gridLayout_4 = new QGridLayout(tr_msg);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_12 = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        le_tr_trid_name = new QLineEdit(tr_msg);
        le_tr_trid_name->setObjectName(QStringLiteral("le_tr_trid_name"));
        le_tr_trid_name->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(le_tr_trid_name, 0, 1, 1, 1);

        btn_tr_cancel = new QPushButton(tr_msg);
        btn_tr_cancel->setObjectName(QStringLiteral("btn_tr_cancel"));
        btn_tr_cancel->setMinimumSize(QSize(0, 30));
        btn_tr_cancel->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(btn_tr_cancel, 0, 3, 1, 1);

        tableWidget_tr = new QTableWidget(tr_msg);
        if (tableWidget_tr->columnCount() < 10)
            tableWidget_tr->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(8, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_tr->setHorizontalHeaderItem(9, __qtablewidgetitem41);
        tableWidget_tr->setObjectName(QStringLiteral("tableWidget_tr"));
        tableWidget_tr->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget_tr, 1, 0, 1, 5);

        widget_10 = new QWidget(tr_msg);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(600, 50));
        horizontalLayout_9 = new QHBoxLayout(widget_10);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_74 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_74);

        btn_tr_add = new QPushButton(widget_10);
        btn_tr_add->setObjectName(QStringLiteral("btn_tr_add"));
        btn_tr_add->setMinimumSize(QSize(0, 30));
        btn_tr_add->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(btn_tr_add);

        horizontalSpacer_75 = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_75);

        btn_tr_del = new QPushButton(widget_10);
        btn_tr_del->setObjectName(QStringLiteral("btn_tr_del"));
        btn_tr_del->setMinimumSize(QSize(0, 30));
        btn_tr_del->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(btn_tr_del);

        horizontalSpacer_77 = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_77);

        btn_tr_upd = new QPushButton(widget_10);
        btn_tr_upd->setObjectName(QStringLiteral("btn_tr_upd"));
        btn_tr_upd->setMinimumSize(QSize(0, 30));
        btn_tr_upd->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(btn_tr_upd);

        horizontalSpacer_76 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_76);


        gridLayout_4->addWidget(widget_10, 2, 0, 1, 5);

        btn_tr_src = new QPushButton(tr_msg);
        btn_tr_src->setObjectName(QStringLiteral("btn_tr_src"));
        btn_tr_src->setMinimumSize(QSize(0, 30));
        btn_tr_src->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(btn_tr_src, 0, 2, 1, 1);

        stackedWidget->addWidget(tr_msg);
        ar_msg = new QWidget();
        ar_msg->setObjectName(QStringLiteral("ar_msg"));
        gridLayout_3 = new QGridLayout(ar_msg);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_11 = new QWidget(ar_msg);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(600, 50));
        horizontalLayout_10 = new QHBoxLayout(widget_11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_84 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_84);

        btn_ar_add = new QPushButton(widget_11);
        btn_ar_add->setObjectName(QStringLiteral("btn_ar_add"));
        btn_ar_add->setMinimumSize(QSize(0, 30));
        btn_ar_add->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_10->addWidget(btn_ar_add);

        horizontalSpacer_81 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_81);

        btn_ar_del = new QPushButton(widget_11);
        btn_ar_del->setObjectName(QStringLiteral("btn_ar_del"));
        btn_ar_del->setMinimumSize(QSize(0, 30));
        btn_ar_del->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_10->addWidget(btn_ar_del);

        horizontalSpacer_82 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_82);

        btn_ar_upd = new QPushButton(widget_11);
        btn_ar_upd->setObjectName(QStringLiteral("btn_ar_upd"));
        btn_ar_upd->setMinimumSize(QSize(0, 30));
        btn_ar_upd->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_10->addWidget(btn_ar_upd);

        horizontalSpacer_83 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_83);


        gridLayout_3->addWidget(widget_11, 1, 0, 1, 2);

        tableWidget_ar = new QTableWidget(ar_msg);
        if (tableWidget_ar->columnCount() < 2)
            tableWidget_ar->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_ar->setHorizontalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_ar->setHorizontalHeaderItem(1, __qtablewidgetitem43);
        tableWidget_ar->setObjectName(QStringLiteral("tableWidget_ar"));
        tableWidget_ar->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(tableWidget_ar, 0, 0, 1, 2);

        stackedWidget->addWidget(ar_msg);
        others = new QWidget();
        others->setObjectName(QStringLiteral("others"));
        gridLayout_6 = new QGridLayout(others);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        btn_stu_grade_add = new QPushButton(others);
        btn_stu_grade_add->setObjectName(QStringLiteral("btn_stu_grade_add"));
        btn_stu_grade_add->setMinimumSize(QSize(0, 30));
        btn_stu_grade_add->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_stu_grade_add, 1, 1, 1, 1);

        btn_addsome_4 = new QPushButton(others);
        btn_addsome_4->setObjectName(QStringLiteral("btn_addsome_4"));
        btn_addsome_4->setMinimumSize(QSize(0, 30));
        btn_addsome_4->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_addsome_4, 3, 0, 1, 1);

        btn_cls_remark_add = new QPushButton(others);
        btn_cls_remark_add->setObjectName(QStringLiteral("btn_cls_remark_add"));
        btn_cls_remark_add->setMinimumSize(QSize(0, 30));
        btn_cls_remark_add->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_cls_remark_add, 1, 0, 1, 1);

        btn_clearall_2 = new QPushButton(others);
        btn_clearall_2->setObjectName(QStringLiteral("btn_clearall_2"));
        btn_clearall_2->setMinimumSize(QSize(0, 30));
        btn_clearall_2->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_clearall_2, 3, 1, 1, 1);

        btn_addsome = new QPushButton(others);
        btn_addsome->setObjectName(QStringLiteral("btn_addsome"));
        btn_addsome->setMinimumSize(QSize(0, 30));
        btn_addsome->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_addsome, 0, 0, 1, 1);

        btn_clearall = new QPushButton(others);
        btn_clearall->setObjectName(QStringLiteral("btn_clearall"));
        btn_clearall->setMinimumSize(QSize(0, 30));
        btn_clearall->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_clearall, 0, 1, 1, 1);

        btn_del_session = new QPushButton(others);
        btn_del_session->setObjectName(QStringLiteral("btn_del_session"));
        btn_del_session->setMinimumSize(QSize(0, 30));
        btn_del_session->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_del_session, 2, 0, 1, 1);

        btn_exam_session = new QPushButton(others);
        btn_exam_session->setObjectName(QStringLiteral("btn_exam_session"));
        btn_exam_session->setMinimumSize(QSize(0, 30));
        btn_exam_session->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btn_exam_session, 2, 1, 1, 1);

        stackedWidget->addWidget(others);

        gridLayout->addWidget(stackedWidget, 1, 1, 2, 2);

        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 0, 1, 1);


        retranslateUi(ArLogin);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ArLogin);
    } // setupUi

    void retranslateUi(QWidget *ArLogin)
    {
        ArLogin->setWindowTitle(QApplication::translate("ArLogin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ArLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        btn_exit->setText(QApplication::translate("ArLogin", "\351\200\200\345\207\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ArLogin", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ArLogin", "\345\255\246\347\224\237\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ArLogin", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ArLogin", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ArLogin", "\347\217\255\347\272\247\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ArLogin", "\346\225\231\345\270\210\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ArLogin", "\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ArLogin", "\345\205\266\344\273\226\346\223\215\344\275\234", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        btn_stuinfo_canael->setText(QApplication::translate("ArLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        btn_stuinfo_src->setText(QApplication::translate("ArLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_stuinfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArLogin", "\345\261\212", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_stuinfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ArLogin", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_stuinfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ArLogin", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_stuinfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ArLogin", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_stuinfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ArLogin", "\345\271\264\351\276\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_stuinfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ArLogin", "\345\271\264\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_stuinfo->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ArLogin", "\347\217\255\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_stuinfo->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("ArLogin", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_stuinfo->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("ArLogin", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_stuinfo->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("ArLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        btn_stuinfo_addsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        btn_stuinfo_delsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_stuinfo_add->setText(QApplication::translate("ArLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_stuinfo_del->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_stuinfo_upd->setText(QApplication::translate("ArLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        le_stuexam_id_name->setPlaceholderText(QApplication::translate("ArLogin", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267/\345\247\223\345\220\215...", Q_NULLPTR));
        lb_stuexam_num->setText(QApplication::translate("ArLogin", "\347\254\254", Q_NULLPTR));
        lb_stuexam_term->setText(QApplication::translate("ArLogin", "\345\255\246\346\234\237", Q_NULLPTR));
        lb_stuexam_year->setText(QApplication::translate("ArLogin", "\345\255\246\345\271\264", Q_NULLPTR));
        btn_stuexam_cancel->setText(QApplication::translate("ArLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        cbb_stuexam_year->clear();
        cbb_stuexam_year->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ArLogin", "\344\270\212", Q_NULLPTR)
         << QApplication::translate("ArLogin", "\344\270\213", Q_NULLPTR)
        );
        cbb_stuexam_num->clear();
        cbb_stuexam_num->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ArLogin", "1", Q_NULLPTR)
         << QApplication::translate("ArLogin", "2", Q_NULLPTR)
         << QApplication::translate("ArLogin", "3", Q_NULLPTR)
        );
        cbb_stuexam_term->clear();
        cbb_stuexam_term->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ArLogin", "\346\234\237\344\270\255", Q_NULLPTR)
         << QApplication::translate("ArLogin", "\346\234\237\346\234\253", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_stuexam->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("ArLogin", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_stuexam->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("ArLogin", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_stuexam->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("ArLogin", "\345\255\246\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_stuexam->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("ArLogin", "\350\257\255\346\226\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_stuexam->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("ArLogin", "\346\225\260\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_stuexam->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QApplication::translate("ArLogin", "\350\213\261\350\257\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_stuexam->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QApplication::translate("ArLogin", "\346\224\277\346\262\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_stuexam->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QApplication::translate("ArLogin", "\345\216\206\345\217\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_stuexam->horizontalHeaderItem(9);
        ___qtablewidgetitem18->setText(QApplication::translate("ArLogin", "\345\234\260\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_stuexam->horizontalHeaderItem(10);
        ___qtablewidgetitem19->setText(QApplication::translate("ArLogin", "\347\224\237\347\211\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_stuexam->horizontalHeaderItem(11);
        ___qtablewidgetitem20->setText(QApplication::translate("ArLogin", "\347\211\251\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_stuexam->horizontalHeaderItem(12);
        ___qtablewidgetitem21->setText(QApplication::translate("ArLogin", "\345\214\226\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_stuexam->horizontalHeaderItem(13);
        ___qtablewidgetitem22->setText(QApplication::translate("ArLogin", "\346\200\273\345\210\206", Q_NULLPTR));
        btn_stuexam_src->setText(QApplication::translate("ArLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        btn_stuexam_addsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        btn_stuexam_delsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_stuexam_add->setText(QApplication::translate("ArLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_stuexam_del->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_stuexam_upd->setText(QApplication::translate("ArLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_cls_addsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        btn_cls_delsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_cls_add->setText(QApplication::translate("ArLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_cls_del->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_cls_upd->setText(QApplication::translate("ArLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_cls->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("ArLogin", "\347\217\255\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_cls->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("ArLogin", "\345\271\264\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_cls->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("ArLogin", "\347\217\255\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_cls->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("ArLogin", "\347\217\255\347\272\247\344\272\272\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_cls->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("ArLogin", "\347\217\255\344\270\273\344\273\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_cls->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("ArLogin", "\346\225\231\345\270\210\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_cls->horizontalHeaderItem(6);
        ___qtablewidgetitem29->setText(QApplication::translate("ArLogin", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_cls->horizontalHeaderItem(7);
        ___qtablewidgetitem30->setText(QApplication::translate("ArLogin", "\345\244\207\346\263\250", Q_NULLPTR));
        le_cls_ses_cls->setPlaceholderText(QApplication::translate("ArLogin", "\350\257\267\350\276\223\345\205\245\345\261\212/\347\217\255\347\272\247...", Q_NULLPTR));
        btn_cls__cancel->setText(QApplication::translate("ArLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        btn_cls_src->setText(QApplication::translate("ArLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        le_tr_trid_name->setPlaceholderText(QApplication::translate("ArLogin", "\350\257\267\350\276\223\345\205\245\346\225\231\345\270\210\345\267\245\345\217\267/\345\247\223\345\220\215...", Q_NULLPTR));
        btn_tr_cancel->setText(QApplication::translate("ArLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_tr->horizontalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("ArLogin", "\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_tr->horizontalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("ArLogin", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_tr->horizontalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("ArLogin", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_tr->horizontalHeaderItem(4);
        ___qtablewidgetitem34->setText(QApplication::translate("ArLogin", "\345\271\264\351\276\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_tr->horizontalHeaderItem(5);
        ___qtablewidgetitem35->setText(QApplication::translate("ArLogin", "\350\201\214\345\212\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_tr->horizontalHeaderItem(6);
        ___qtablewidgetitem36->setText(QApplication::translate("ArLogin", "\345\205\245\345\255\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_tr->horizontalHeaderItem(7);
        ___qtablewidgetitem37->setText(QApplication::translate("ArLogin", "\345\244\207\346\263\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_tr->horizontalHeaderItem(8);
        ___qtablewidgetitem38->setText(QApplication::translate("ArLogin", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_tr->horizontalHeaderItem(9);
        ___qtablewidgetitem39->setText(QApplication::translate("ArLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        btn_tr_add->setText(QApplication::translate("ArLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_tr_del->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_tr_upd->setText(QApplication::translate("ArLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_tr_src->setText(QApplication::translate("ArLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        btn_ar_add->setText(QApplication::translate("ArLogin", "\346\267\273\345\212\240", Q_NULLPTR));
        btn_ar_del->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_ar_upd->setText(QApplication::translate("ArLogin", "\344\277\256\346\224\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_ar->horizontalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("ArLogin", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_ar->horizontalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("ArLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        btn_stu_grade_add->setText(QApplication::translate("ArLogin", "\345\255\246\347\224\237\345\271\264\347\272\247\345\212\2401", Q_NULLPTR));
        btn_addsome_4->setText(QApplication::translate("ArLogin", "\347\217\255\347\272\247\350\277\233\345\272\246\345\212\2401", Q_NULLPTR));
        btn_cls_remark_add->setText(QApplication::translate("ArLogin", "\347\217\255\347\272\247\350\277\233\345\272\246\345\212\2401", Q_NULLPTR));
        btn_clearall_2->setText(QApplication::translate("ArLogin", "\345\205\250\351\203\250\345\210\240\351\231\244", Q_NULLPTR));
        btn_addsome->setText(QApplication::translate("ArLogin", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        btn_clearall->setText(QApplication::translate("ArLogin", "\345\205\250\351\203\250\345\210\240\351\231\244", Q_NULLPTR));
        btn_del_session->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244\346\237\220\345\261\212\345\255\246\347\224\237", Q_NULLPTR));
        btn_exam_session->setText(QApplication::translate("ArLogin", "\345\210\240\351\231\244\346\237\220\345\261\212\346\210\220\347\273\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ArLogin: public Ui_ArLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARLOGIN_H
