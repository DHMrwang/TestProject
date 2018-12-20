#include "contactus.h"
#include "ui_contactus.h"

ContactUs::ContactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUs)
{
    ui->setupUi(this);
    //窗口命名
    setWindowTitle(tr("联系我们"));
}

ContactUs::~ContactUs()
{
    delete ui;
}

void ContactUs::on_pushButton_clicked()
{
    this->close();
}

void ContactUs::on_EnsuerButton_clicked()
{
    this->close();
}
