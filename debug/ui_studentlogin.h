/********************************************************************************
** Form generated from reading UI file 'studentlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGIN_H
#define UI_STUDENTLOGIN_H

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

class Ui_StudentLogin
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *stuexam;
    QGridLayout *gridLayout_2;
    QComboBox *cbb_year;
    QComboBox *cbb_mou;
    QComboBox *cbb_term;
    QPushButton *btn_search;
    QLabel *label_year;
    QLabel *label_term;
    QLabel *label_number;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *tableWidget;
    QPushButton *btn_cancel;
    QWidget *stuinfo;
    QGridLayout *gridLayout_3;
    QLabel *lb_tel;
    QLineEdit *le_age;
    QLabel *lb_passward;
    QLineEdit *le_account;
    QLabel *lb_class;
    QLabel *lb_age;
    QLineEdit *le_id;
    QLineEdit *le_tel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *le_grade;
    QLabel *lb_name;
    QLineEdit *le_passward;
    QLineEdit *le_name;
    QLabel *lb_id;
    QLineEdit *le_sex;
    QLineEdit *le_session;
    QLabel *lb_account;
    QLabel *lb_session;
    QLabel *lb_sex;
    QLabel *label_4;
    QLabel *lb_grade;
    QLineEdit *le_class;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_need_upd;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_update;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_exit;
    QLabel *lb_info;

    void setupUi(QWidget *StudentLogin)
    {
        if (StudentLogin->objectName().isEmpty())
            StudentLogin->setObjectName(QStringLiteral("StudentLogin"));
        StudentLogin->resize(1000, 800);
        StudentLogin->setMinimumSize(QSize(1000, 800));
        gridLayout = new QGridLayout(StudentLogin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(StudentLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 120));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        treeWidget = new QTreeWidget(StudentLogin);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        treeWidget->setIndentation(8);
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(StudentLogin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stuexam = new QWidget();
        stuexam->setObjectName(QStringLiteral("stuexam"));
        gridLayout_2 = new QGridLayout(stuexam);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbb_year = new QComboBox(stuexam);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setMinimumSize(QSize(0, 30));
        cbb_year->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_year, 0, 2, 1, 1);

        cbb_mou = new QComboBox(stuexam);
        cbb_mou->setObjectName(QStringLiteral("cbb_mou"));
        cbb_mou->setMinimumSize(QSize(0, 30));
        cbb_mou->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_mou, 0, 7, 1, 1);

        cbb_term = new QComboBox(stuexam);
        cbb_term->setObjectName(QStringLiteral("cbb_term"));
        cbb_term->setMinimumSize(QSize(0, 30));
        cbb_term->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(cbb_term, 0, 5, 1, 1);

        btn_search = new QPushButton(stuexam);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setMinimumSize(QSize(0, 30));
        btn_search->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_search, 0, 9, 1, 2);

        label_year = new QLabel(stuexam);
        label_year->setObjectName(QStringLiteral("label_year"));
        label_year->setMinimumSize(QSize(0, 30));
        label_year->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(label_year, 0, 3, 1, 2);

        label_term = new QLabel(stuexam);
        label_term->setObjectName(QStringLiteral("label_term"));
        label_term->setMinimumSize(QSize(0, 30));
        label_term->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(label_term, 0, 6, 1, 1);

        label_number = new QLabel(stuexam);
        label_number->setObjectName(QStringLiteral("label_number"));
        label_number->setMinimumSize(QSize(0, 30));
        label_number->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(label_number, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        tableWidget = new QTableWidget(stuexam);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem11);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setInputMethodHints(Qt::ImhNone);
        tableWidget->setLineWidth(1);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setDragEnabled(true);
        tableWidget->setDefaultDropAction(Qt::TargetMoveAction);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectColumns);
        tableWidget->setTextElideMode(Qt::ElideMiddle);
        tableWidget->setSortingEnabled(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 13);

        btn_cancel = new QPushButton(stuexam);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(0, 30));
        btn_cancel->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(btn_cancel, 0, 11, 1, 1);

        stackedWidget->addWidget(stuexam);
        stuinfo = new QWidget();
        stuinfo->setObjectName(QStringLiteral("stuinfo"));
        gridLayout_3 = new QGridLayout(stuinfo);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lb_tel = new QLabel(stuinfo);
        lb_tel->setObjectName(QStringLiteral("lb_tel"));
        lb_tel->setMinimumSize(QSize(0, 30));
        lb_tel->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_tel, 5, 4, 1, 1);

        le_age = new QLineEdit(stuinfo);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setMinimumSize(QSize(180, 30));
        le_age->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_age, 3, 5, 1, 2);

        lb_passward = new QLabel(stuinfo);
        lb_passward->setObjectName(QStringLiteral("lb_passward"));
        lb_passward->setMinimumSize(QSize(0, 30));
        lb_passward->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(lb_passward, 6, 4, 1, 1);

        le_account = new QLineEdit(stuinfo);
        le_account->setObjectName(QStringLiteral("le_account"));
        le_account->setMinimumSize(QSize(180, 30));
        le_account->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_account, 6, 2, 1, 1);

        lb_class = new QLabel(stuinfo);
        lb_class->setObjectName(QStringLiteral("lb_class"));
        lb_class->setMinimumSize(QSize(0, 30));
        lb_class->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_class, 4, 4, 1, 1);

        lb_age = new QLabel(stuinfo);
        lb_age->setObjectName(QStringLiteral("lb_age"));
        lb_age->setMinimumSize(QSize(0, 30));
        lb_age->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_age, 3, 4, 1, 1);

        le_id = new QLineEdit(stuinfo);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setMinimumSize(QSize(180, 30));
        le_id->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_id, 2, 5, 1, 2);

        le_tel = new QLineEdit(stuinfo);
        le_tel->setObjectName(QStringLiteral("le_tel"));
        le_tel->setMinimumSize(QSize(180, 30));
        le_tel->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_tel, 5, 5, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 9, 1, 1);

        le_grade = new QLineEdit(stuinfo);
        le_grade->setObjectName(QStringLiteral("le_grade"));
        le_grade->setMinimumSize(QSize(180, 30));
        le_grade->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_grade, 4, 2, 1, 1);

        lb_name = new QLabel(stuinfo);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_name, 2, 1, 1, 1);

        le_passward = new QLineEdit(stuinfo);
        le_passward->setObjectName(QStringLiteral("le_passward"));
        le_passward->setMinimumSize(QSize(180, 30));
        le_passward->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_passward, 6, 5, 1, 2);

        le_name = new QLineEdit(stuinfo);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setMinimumSize(QSize(180, 30));
        le_name->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_name, 2, 2, 1, 1);

        lb_id = new QLabel(stuinfo);
        lb_id->setObjectName(QStringLiteral("lb_id"));
        lb_id->setMinimumSize(QSize(0, 30));
        lb_id->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(lb_id, 2, 4, 1, 1);

        le_sex = new QLineEdit(stuinfo);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setMinimumSize(QSize(180, 30));
        le_sex->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_sex, 3, 2, 1, 1);

        le_session = new QLineEdit(stuinfo);
        le_session->setObjectName(QStringLiteral("le_session"));
        le_session->setMinimumSize(QSize(180, 30));
        le_session->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_session, 5, 2, 1, 1);

        lb_account = new QLabel(stuinfo);
        lb_account->setObjectName(QStringLiteral("lb_account"));
        lb_account->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_account, 6, 1, 1, 1);

        lb_session = new QLabel(stuinfo);
        lb_session->setObjectName(QStringLiteral("lb_session"));
        lb_session->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_session, 5, 1, 1, 1);

        lb_sex = new QLabel(stuinfo);
        lb_sex->setObjectName(QStringLiteral("lb_sex"));
        lb_sex->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_sex, 3, 1, 1, 1);

        label_4 = new QLabel(stuinfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 60));
        label_4->setMaximumSize(QSize(16777215, 60));

        gridLayout_3->addWidget(label_4, 1, 2, 1, 4);

        lb_grade = new QLabel(stuinfo);
        lb_grade->setObjectName(QStringLiteral("lb_grade"));
        lb_grade->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(lb_grade, 4, 1, 1, 1);

        le_class = new QLineEdit(stuinfo);
        le_class->setObjectName(QStringLiteral("le_class"));
        le_class->setMinimumSize(QSize(180, 30));
        le_class->setMaximumSize(QSize(240, 16777215));

        gridLayout_3->addWidget(le_class, 4, 5, 1, 2);

        widget = new QWidget(stuinfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(720, 0));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_need_upd = new QPushButton(widget);
        btn_need_upd->setObjectName(QStringLiteral("btn_need_upd"));
        btn_need_upd->setMinimumSize(QSize(150, 30));
        btn_need_upd->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(btn_need_upd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_update = new QPushButton(widget);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setMinimumSize(QSize(150, 30));
        btn_update->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(btn_update);

        horizontalSpacer = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addWidget(widget, 7, 0, 1, 10);

        stackedWidget->addWidget(stuinfo);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 5);

        btn_exit = new QPushButton(StudentLogin);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setMinimumSize(QSize(0, 30));
        btn_exit->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(btn_exit, 0, 5, 1, 1);

        lb_info = new QLabel(StudentLogin);
        lb_info->setObjectName(QStringLiteral("lb_info"));
        lb_info->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(lb_info, 0, 4, 1, 1);

        label->raise();
        treeWidget->raise();
        stackedWidget->raise();
        btn_exit->raise();
        lb_info->raise();

        retranslateUi(StudentLogin);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StudentLogin);
    } // setupUi

    void retranslateUi(QWidget *StudentLogin)
    {
        StudentLogin->setWindowTitle(QApplication::translate("StudentLogin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("StudentLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("StudentLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("StudentLogin", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("StudentLogin", "\345\255\246\347\224\237\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("StudentLogin", "\345\255\246\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        cbb_year->clear();
        cbb_year->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("StudentLogin", "1", Q_NULLPTR)
         << QApplication::translate("StudentLogin", "2", Q_NULLPTR)
         << QApplication::translate("StudentLogin", "3", Q_NULLPTR)
        );
        cbb_mou->clear();
        cbb_mou->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("StudentLogin", "\346\234\237\344\270\255", Q_NULLPTR)
         << QApplication::translate("StudentLogin", "\346\234\237\346\234\253", Q_NULLPTR)
        );
        cbb_term->clear();
        cbb_term->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("StudentLogin", "\344\270\212", Q_NULLPTR)
         << QApplication::translate("StudentLogin", "\344\270\213", Q_NULLPTR)
        );
        btn_search->setText(QApplication::translate("StudentLogin", "\346\220\234\347\264\242", Q_NULLPTR));
        label_year->setText(QApplication::translate("StudentLogin", "\345\255\246\345\271\264", Q_NULLPTR));
        label_term->setText(QApplication::translate("StudentLogin", "\345\255\246\346\234\237", Q_NULLPTR));
        label_number->setText(QApplication::translate("StudentLogin", "\347\254\254", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StudentLogin", "\345\255\246\345\271\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("StudentLogin", "\350\257\255\346\226\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("StudentLogin", "\346\225\260\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("StudentLogin", "\350\213\261\350\257\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("StudentLogin", "\346\224\277\346\262\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("StudentLogin", "\345\216\206\345\217\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("StudentLogin", "\345\234\260\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem7->setText(QApplication::translate("StudentLogin", "\347\224\237\347\211\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem8->setText(QApplication::translate("StudentLogin", "\347\211\251\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem9->setText(QApplication::translate("StudentLogin", "\345\214\226\345\255\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem10->setText(QApplication::translate("StudentLogin", "\346\200\273\345\210\206", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("StudentLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        lb_tel->setText(QApplication::translate("StudentLogin", "\345\256\266\351\225\277\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        lb_passward->setText(QApplication::translate("StudentLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lb_class->setText(QApplication::translate("StudentLogin", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        lb_age->setText(QApplication::translate("StudentLogin", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lb_name->setText(QApplication::translate("StudentLogin", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lb_id->setText(QApplication::translate("StudentLogin", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        lb_account->setText(QApplication::translate("StudentLogin", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        lb_session->setText(QApplication::translate("StudentLogin", "\345\261\212\357\274\232", Q_NULLPTR));
        lb_sex->setText(QApplication::translate("StudentLogin", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("StudentLogin", "\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        lb_grade->setText(QApplication::translate("StudentLogin", "\345\271\264\347\272\247\357\274\232", Q_NULLPTR));
        btn_need_upd->setText(QApplication::translate("StudentLogin", "\346\210\221\350\246\201\344\277\256\346\224\271", Q_NULLPTR));
        btn_update->setText(QApplication::translate("StudentLogin", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        btn_exit->setText(QApplication::translate("StudentLogin", "\351\200\200\345\207\272", Q_NULLPTR));
        lb_info->setText(QApplication::translate("StudentLogin", "\345\255\246\345\217\267\357\274\232\n"
"\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentLogin: public Ui_StudentLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGIN_H
