#ifndef DIALOGCOMCONFIG_H
#define DIALOGCOMCONFIG_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include <QDebug>

#include "User/combase.h"

#include "ui_mainwindow.h"

namespace Ui {
class DialogComConfig;
}

class DialogComConfig : public QDialog
{
    Q_OBJECT

public:
    explicit DialogComConfig(QWidget *parent = 0);
    ~DialogComConfig();

    QSerialPort *P_serialPort;//(实例化一个指向串口的指针，可以用于访问串口)
    QTimer *P_Timer;

private slots:
    void on_SerialPortOn_clicked();
    void ReadMyCom();

    void on_SerialPortOff_clicked();

private:
    Ui::DialogComConfig *ui;
    Ui::MainWindow *main_ui;
};

#endif // DIALOGCOMCONFIG_H
