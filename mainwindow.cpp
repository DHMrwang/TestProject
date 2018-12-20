#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //窗口命名
    setWindowTitle(tr("串口调试助手"));

    //窗口资源建立
    P_About = NULL;

    P_About = new DialogAbout;
    P_Config = NULL;
    P_Config = new DialogComConfig;
    P_Contactus = NULL;
    P_Contactus = new ContactUs;
    /*菜单栏*/
    connect(ui->Exit,SIGNAL(triggered()),this,SLOT(mainwindow_Quit()));
    connect(ui->helpabout,SIGNAL(triggered()),this,SLOT(mainwindow_About()));
    connect(ui->actionConfig,SIGNAL(triggered()),this,SLOT(mainwindow_Config()));
    connect(ui->helpcontact,SIGNAL(triggered()),this,SLOT(mainwindow_Contactus()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mainwindow_About()
{
    P_About->show();
}

void MainWindow::mainwindow_Config()
{
    P_Config->show();
}

void MainWindow::mainwindow_Quit()
{
    this->close();
}

/*void MainWindow::on_ConnectButton_clicked(bool checked)
{

}*/

void MainWindow::on_UartConfigButton_clicked()
{
    P_Config->show();
}

void MainWindow::mainwindow_Contactus()
{
    P_Contactus->show();
}

void MainWindow::on_SendData_Button_clicked()
{
    //P_serialPort->write(ui->DataInput->text().toUtf8());
}
