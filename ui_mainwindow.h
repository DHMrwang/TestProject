/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Open;
    QAction *Save;
    QAction *connect;
    QAction *disconnect;
    QAction *actionabout;
    QAction *helpprotocol;
    QAction *helpabout;
    QAction *Exit;
    QAction *actionopen;
    QAction *actionConfig;
    QAction *helpcontact;
    QWidget *centralWidget;
    QGroupBox *SendgroupBox;
    QLineEdit *DataInput;
    QCheckBox *HexSelect;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *SendData_Button;
    QGroupBox *ReceiveaData;
    QTextBrowser *DataRecDisplay;
    QGroupBox *ParamSet;
    QPushButton *ConnectButton;
    QPushButton *UartConfigButton;
    QMenuBar *menuBar;
    QMenu *File;
    QMenu *Communication;
    QMenu *Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(647, 401);
        Open = new QAction(MainWindow);
        Open->setObjectName(QStringLiteral("Open"));
        Save = new QAction(MainWindow);
        Save->setObjectName(QStringLiteral("Save"));
        connect = new QAction(MainWindow);
        connect->setObjectName(QStringLiteral("connect"));
        disconnect = new QAction(MainWindow);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QStringLiteral("actionabout"));
        helpprotocol = new QAction(MainWindow);
        helpprotocol->setObjectName(QStringLiteral("helpprotocol"));
        helpabout = new QAction(MainWindow);
        helpabout->setObjectName(QStringLiteral("helpabout"));
        Exit = new QAction(MainWindow);
        Exit->setObjectName(QStringLiteral("Exit"));
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName(QStringLiteral("actionConfig"));
        helpcontact = new QAction(MainWindow);
        helpcontact->setObjectName(QStringLiteral("helpcontact"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SendgroupBox = new QGroupBox(centralWidget);
        SendgroupBox->setObjectName(QStringLiteral("SendgroupBox"));
        SendgroupBox->setGeometry(QRect(0, 0, 421, 171));
        DataInput = new QLineEdit(SendgroupBox);
        DataInput->setObjectName(QStringLiteral("DataInput"));
        DataInput->setGeometry(QRect(80, 20, 321, 31));
        HexSelect = new QCheckBox(SendgroupBox);
        HexSelect->setObjectName(QStringLiteral("HexSelect"));
        HexSelect->setGeometry(QRect(80, 60, 81, 31));
        spinBox = new QSpinBox(SendgroupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(170, 60, 42, 31));
        spinBox->setValue(10);
        label = new QLabel(SendgroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 61, 31));
        SendData_Button = new QPushButton(SendgroupBox);
        SendData_Button->setObjectName(QStringLiteral("SendData_Button"));
        SendData_Button->setGeometry(QRect(230, 60, 81, 31));
        ReceiveaData = new QGroupBox(centralWidget);
        ReceiveaData->setObjectName(QStringLiteral("ReceiveaData"));
        ReceiveaData->setGeometry(QRect(0, 170, 421, 151));
        DataRecDisplay = new QTextBrowser(ReceiveaData);
        DataRecDisplay->setObjectName(QStringLiteral("DataRecDisplay"));
        DataRecDisplay->setGeometry(QRect(70, 10, 341, 141));
        ParamSet = new QGroupBox(centralWidget);
        ParamSet->setObjectName(QStringLiteral("ParamSet"));
        ParamSet->setGeometry(QRect(420, 0, 191, 321));
        ConnectButton = new QPushButton(ParamSet);
        ConnectButton->setObjectName(QStringLiteral("ConnectButton"));
        ConnectButton->setGeometry(QRect(50, 70, 75, 31));
        UartConfigButton = new QPushButton(ParamSet);
        UartConfigButton->setObjectName(QStringLiteral("UartConfigButton"));
        UartConfigButton->setGeometry(QRect(50, 30, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 23));
        File = new QMenu(menuBar);
        File->setObjectName(QStringLiteral("File"));
        Communication = new QMenu(menuBar);
        Communication->setObjectName(QStringLiteral("Communication"));
        Help = new QMenu(menuBar);
        Help->setObjectName(QStringLiteral("Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(File->menuAction());
        menuBar->addAction(Communication->menuAction());
        menuBar->addAction(Help->menuAction());
        File->addAction(actionopen);
        File->addAction(Save);
        File->addAction(Exit);
        Communication->addAction(disconnect);
        Communication->addAction(connect);
        Communication->addAction(actionConfig);
        Help->addAction(helpprotocol);
        Help->addAction(helpabout);
        Help->addAction(helpcontact);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Open->setText(QApplication::translate("MainWindow", "open", Q_NULLPTR));
        Save->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        connect->setText(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
        disconnect->setText(QApplication::translate("MainWindow", "disconnect", Q_NULLPTR));
        actionabout->setText(QApplication::translate("MainWindow", "about", Q_NULLPTR));
        helpprotocol->setText(QApplication::translate("MainWindow", "protocol", Q_NULLPTR));
        helpabout->setText(QApplication::translate("MainWindow", "about", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "open", Q_NULLPTR));
        actionConfig->setText(QApplication::translate("MainWindow", "Config", Q_NULLPTR));
        helpcontact->setText(QApplication::translate("MainWindow", "contact", Q_NULLPTR));
        SendgroupBox->setTitle(QApplication::translate("MainWindow", "SendData", Q_NULLPTR));
        DataInput->setText(QString());
        HexSelect->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "DataInput", Q_NULLPTR));
        SendData_Button->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        ReceiveaData->setTitle(QApplication::translate("MainWindow", "RecData", Q_NULLPTR));
        ParamSet->setTitle(QApplication::translate("MainWindow", "ParamSet", Q_NULLPTR));
        ConnectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        UartConfigButton->setText(QApplication::translate("MainWindow", "UartConfig", Q_NULLPTR));
        File->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        Communication->setTitle(QApplication::translate("MainWindow", "\351\200\232\350\256\257", Q_NULLPTR));
        Help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
