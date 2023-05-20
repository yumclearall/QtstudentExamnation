#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    l(nullptr)
{
    ui->setupUi(this);

    //显示登录界面
    l.show();

}

Widget::~Widget()
{
    delete ui;


}
