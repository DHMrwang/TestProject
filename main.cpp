#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置exe文件图标
    QString strPath = QApplication::applicationDirPath();
    strPath += "/img/logo1.png";
    a.setWindowIcon(QIcon(strPath));

    MainWindow w;
    w.show();

    return a.exec();
}
