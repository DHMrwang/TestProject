#include "dialogcomconfig.h"
#include "ui_dialogcomconfig.h"

DialogComConfig::DialogComConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogComConfig)
{
    ui->setupUi(this);
    //窗口命名
    setWindowTitle(tr("串口参数配置"));

    P_serialPort = NULL;
    P_serialPort = new QSerialPort;
    P_Timer = NULL;
    P_Timer = new QTimer;
}

DialogComConfig::~DialogComConfig()
{
    delete ui;
}

void DialogComConfig::on_SerialPortOn_clicked()
{
    QString portName = ui->PortSelect->currentText();//获取串口名
    P_serialPort->open(QIODevice::ReadWrite);//以读写方式打开串口
    P_serialPort->setBaudRate(ui->BaudSelect->currentText().toInt());//设置波特率

    //设置数据位
    if(ui->Databitselect->currentText() == tr("8"))
        P_serialPort->setDataBits(QSerialPort::Data8);
    else if(ui->Databitselect->currentText() == tr("7"))
        P_serialPort->setDataBits(QSerialPort::Data7);

    //设置奇偶校验位
    if(ui->Checkbitselect->currentText() == tr("无"))
        P_serialPort->setParity(QSerialPort::NoParity);
    else if(ui->Checkbitselect->currentText() == tr("奇"))
        P_serialPort->setParity(QSerialPort::OddParity);
    else if(ui->Checkbitselect->currentText() == tr("偶"))
        P_serialPort->setParity(QSerialPort::EvenParity);

    //设置停止位
    if(ui->Stopbitselect->currentText() == tr("1"))
        P_serialPort->setStopBits(QSerialPort::OneStop);
    else if(ui->Stopbitselect->currentText() == tr("2"))
        P_serialPort->setStopBits(QSerialPort::TwoStop);
    //设置为无数据流控制
    P_serialPort->setFlowControl(QSerialPort::NoFlowControl);

    connect( P_Timer, SIGNAL( timeout() ), this, SLOT( ReadMyCom() ) );
    P_Timer->start(500);    //500ms读一次
    connect(P_serialPort,SIGNAL(readyRead()),this,SLOT(ReadMyCom()));

    ui->SerialPortOn->setEnabled(false);
    ui->SerialPortOff->setEnabled(true);
    main_ui->SendData_Button->setEnabled(true);
}

void DialogComConfig::ReadMyCom()
{
    QByteArray temp = P_serialPort->readAll();
    main_ui->DataRecDisplay->insertPlainText(temp);
}

void DialogComConfig::on_SerialPortOff_clicked()
{
    P_serialPort->close();
    ui->SerialPortOff->setEnabled(false);
    ui->SerialPortOn->setEnabled(true);
    main_ui->SendData_Button->setEnabled(false);
}
