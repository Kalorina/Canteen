/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *welcomeGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *loginType;
    QGroupBox *loginGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *loginNameLine;
    QLineEdit *LoginPasswordLine;
    QGroupBox *bottonGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(610, 430);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        welcomeGroupBox = new QGroupBox(Dialog);
        welcomeGroupBox->setObjectName(QString::fromUtf8("welcomeGroupBox"));
        verticalLayout = new QVBoxLayout(welcomeGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(welcomeGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        loginType = new QComboBox(welcomeGroupBox);
        loginType->addItem(QString());
        loginType->addItem(QString());
        loginType->addItem(QString());
        loginType->addItem(QString());
        loginType->setObjectName(QString::fromUtf8("loginType"));
        loginType->setMaximumSize(QSize(16777215, 16777215));
        loginType->setFrame(true);

        verticalLayout->addWidget(loginType);


        verticalLayout_3->addWidget(welcomeGroupBox);

        loginGroupBox = new QGroupBox(Dialog);
        loginGroupBox->setObjectName(QString::fromUtf8("loginGroupBox"));
        verticalLayout_2 = new QVBoxLayout(loginGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loginNameLine = new QLineEdit(loginGroupBox);
        loginNameLine->setObjectName(QString::fromUtf8("loginNameLine"));

        verticalLayout_2->addWidget(loginNameLine);

        LoginPasswordLine = new QLineEdit(loginGroupBox);
        LoginPasswordLine->setObjectName(QString::fromUtf8("LoginPasswordLine"));

        verticalLayout_2->addWidget(LoginPasswordLine);


        verticalLayout_3->addWidget(loginGroupBox);

        bottonGroupBox = new QGroupBox(Dialog);
        bottonGroupBox->setObjectName(QString::fromUtf8("bottonGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(bottonGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(172, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(bottonGroupBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(bottonGroupBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        welcomeGroupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Dialog", "Welcome", nullptr));
        loginType->setItemText(0, QCoreApplication::translate("Dialog", "Employee", nullptr));
        loginType->setItemText(1, QCoreApplication::translate("Dialog", "Staff", nullptr));
        loginType->setItemText(2, QCoreApplication::translate("Dialog", "Student", nullptr));
        loginType->setItemText(3, QCoreApplication::translate("Dialog", "Admin", nullptr));

        loginType->setCurrentText(QCoreApplication::translate("Dialog", "Employee", nullptr));
        loginGroupBox->setTitle(QString());
        loginNameLine->setText(QCoreApplication::translate("Dialog", "Login Name", nullptr));
        LoginPasswordLine->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
        bottonGroupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
