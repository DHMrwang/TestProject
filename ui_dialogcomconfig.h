/********************************************************************************
** Form generated from reading UI file 'dialogcomconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOMCONFIG_H
#define UI_DIALOGCOMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogComConfig
{
public:
    QGroupBox *UartConfMenu;
    QComboBox *PortSelect;
    QLabel *label;
    QComboBox *BaudSelect;
    QLabel *label_2;
    QComboBox *Stopbitselect;
    QLabel *label_3;
    QComboBox *Databitselect;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *Checkbitselect;
    QPushButton *SerialPortOn;
    QPushButton *SerialPortOff;

    void setupUi(QDialog *DialogComConfig)
    {
        if (DialogComConfig->objectName().isEmpty())
            DialogComConfig->setObjectName(QStringLiteral("DialogComConfig"));
        DialogComConfig->resize(231, 284);
        DialogComConfig->setSizeGripEnabled(false);
        UartConfMenu = new QGroupBox(DialogComConfig);
        UartConfMenu->setObjectName(QStringLiteral("UartConfMenu"));
        UartConfMenu->setGeometry(QRect(20, 10, 191, 241));
        PortSelect = new QComboBox(UartConfMenu);
        PortSelect->setObjectName(QStringLiteral("PortSelect"));
        PortSelect->setGeometry(QRect(100, 20, 61, 22));
        label = new QLabel(UartConfMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 54, 21));
        BaudSelect = new QComboBox(UartConfMenu);
        BaudSelect->setObjectName(QStringLiteral("BaudSelect"));
        BaudSelect->setGeometry(QRect(100, 50, 61, 22));
        label_2 = new QLabel(UartConfMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 54, 21));
        Stopbitselect = new QComboBox(UartConfMenu);
        Stopbitselect->setObjectName(QStringLiteral("Stopbitselect"));
        Stopbitselect->setGeometry(QRect(100, 80, 61, 22));
        label_3 = new QLabel(UartConfMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 80, 54, 21));
        Databitselect = new QComboBox(UartConfMenu);
        Databitselect->setObjectName(QStringLiteral("Databitselect"));
        Databitselect->setGeometry(QRect(100, 110, 61, 22));
        label_4 = new QLabel(UartConfMenu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 110, 54, 21));
        label_5 = new QLabel(UartConfMenu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 140, 54, 21));
        Checkbitselect = new QComboBox(UartConfMenu);
        Checkbitselect->setObjectName(QStringLiteral("Checkbitselect"));
        Checkbitselect->setGeometry(QRect(100, 140, 61, 22));
        SerialPortOn = new QPushButton(UartConfMenu);
        SerialPortOn->setObjectName(QStringLiteral("SerialPortOn"));
        SerialPortOn->setGeometry(QRect(10, 200, 71, 31));
        SerialPortOff = new QPushButton(UartConfMenu);
        SerialPortOff->setObjectName(QStringLiteral("SerialPortOff"));
        SerialPortOff->setGeometry(QRect(110, 200, 71, 31));

        retranslateUi(DialogComConfig);

        Stopbitselect->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogComConfig);
    } // setupUi

    void retranslateUi(QDialog *DialogComConfig)
    {
        DialogComConfig->setWindowTitle(QApplication::translate("DialogComConfig", "Dialog", Q_NULLPTR));
        UartConfMenu->setTitle(QApplication::translate("DialogComConfig", "UartConfig", Q_NULLPTR));
        PortSelect->clear();
        PortSelect->insertItems(0, QStringList()
         << QApplication::translate("DialogComConfig", "COM1", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM2", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM3", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM4", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM5", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM6", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM7", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM8", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM9", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "COM10", Q_NULLPTR)
        );
        label->setText(QApplication::translate("DialogComConfig", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        BaudSelect->clear();
        BaudSelect->insertItems(0, QStringList()
         << QApplication::translate("DialogComConfig", "2400", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "4800", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "9600", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "19200", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "115200", Q_NULLPTR)
        );
        BaudSelect->setCurrentText(QApplication::translate("DialogComConfig", "2400", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogComConfig", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        Stopbitselect->clear();
        Stopbitselect->insertItems(0, QStringList()
         << QApplication::translate("DialogComConfig", "1", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "2", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("DialogComConfig", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        Databitselect->clear();
        Databitselect->insertItems(0, QStringList()
         << QApplication::translate("DialogComConfig", "8", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "7", Q_NULLPTR)
        );
        Databitselect->setCurrentText(QApplication::translate("DialogComConfig", "8", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogComConfig", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("DialogComConfig", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        Checkbitselect->clear();
        Checkbitselect->insertItems(0, QStringList()
         << QApplication::translate("DialogComConfig", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "\345\245\207", Q_NULLPTR)
         << QApplication::translate("DialogComConfig", "\345\201\266", Q_NULLPTR)
        );
        SerialPortOn->setText(QApplication::translate("DialogComConfig", "Connect", Q_NULLPTR));
        SerialPortOff->setText(QApplication::translate("DialogComConfig", "Disconnect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogComConfig: public Ui_DialogComConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOMCONFIG_H
