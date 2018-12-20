/********************************************************************************
** Form generated from reading UI file 'dialogabout.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QGroupBox *About;
    QLabel *label;
    QPushButton *EnsureButton;
    QLabel *label_2;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QStringLiteral("DialogAbout"));
        DialogAbout->resize(275, 237);
        About = new QGroupBox(DialogAbout);
        About->setObjectName(QStringLiteral("About"));
        About->setGeometry(QRect(10, 0, 251, 221));
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 91, 131));
        EnsureButton = new QPushButton(About);
        EnsureButton->setObjectName(QStringLiteral("EnsureButton"));
        EnsureButton->setGeometry(QRect(90, 180, 71, 21));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 111, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/aboutpic.jpg")));
        label_2->setScaledContents(true);

        retranslateUi(DialogAbout);

        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QApplication::translate("DialogAbout", "Dialog", Q_NULLPTR));
        About->setTitle(QApplication::translate("DialogAbout", "AboutBox", Q_NULLPTR));
        label->setText(QApplication::translate("DialogAbout", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213\n"
"\n"
"Version 1.0\n"
"\n"
"2018-04-27\n"
"\n"
"By DH_Mrwang", Q_NULLPTR));
        EnsureButton->setText(QApplication::translate("DialogAbout", "OK", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
