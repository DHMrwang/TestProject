/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

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

class Ui_ContactUs
{
public:
    QGroupBox *ContactUsBox;
    QLabel *label;
    QPushButton *EnsuerButton;

    void setupUi(QDialog *ContactUs)
    {
        if (ContactUs->objectName().isEmpty())
            ContactUs->setObjectName(QStringLiteral("ContactUs"));
        ContactUs->resize(274, 195);
        ContactUsBox = new QGroupBox(ContactUs);
        ContactUsBox->setObjectName(QStringLiteral("ContactUsBox"));
        ContactUsBox->setGeometry(QRect(10, 0, 251, 181));
        label = new QLabel(ContactUsBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 111, 81));
        EnsuerButton = new QPushButton(ContactUsBox);
        EnsuerButton->setObjectName(QStringLiteral("EnsuerButton"));
        EnsuerButton->setGeometry(QRect(80, 110, 71, 23));

        retranslateUi(ContactUs);

        QMetaObject::connectSlotsByName(ContactUs);
    } // setupUi

    void retranslateUi(QDialog *ContactUs)
    {
        ContactUs->setWindowTitle(QApplication::translate("ContactUs", "Dialog", Q_NULLPTR));
        ContactUsBox->setTitle(QApplication::translate("ContactUs", "ContactInfo", Q_NULLPTR));
        label->setText(QApplication::translate("ContactUs", "QQ:995423094\n"
"\n"
"WeChat:wang0902\n"
"\n"
"Tel:15695576092", Q_NULLPTR));
        EnsuerButton->setText(QApplication::translate("ContactUs", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContactUs: public Ui_ContactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
