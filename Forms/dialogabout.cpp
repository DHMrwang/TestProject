#include "dialogabout.h"
#include "ui_dialogabout.h"

DialogAbout::DialogAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAbout)
{
    ui->setupUi(this);
    //窗口命名
    setWindowTitle(tr("关于"));
}

DialogAbout::~DialogAbout()
{
    delete ui;
}

void DialogAbout::on_EnsureButton_clicked()
{
    this->close();
}
