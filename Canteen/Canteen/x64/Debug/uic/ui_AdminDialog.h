/********************************************************************************
** Form generated from reading UI file 'AdminDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAdmin
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxAdmin;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBoxLoginType;
    QComboBox *comboBoxActionUser;
    QGroupBox *groupBoxLogin_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditLoginName;
    QLabel *label_3;
    QLineEdit *lineEditLoginPassword;
    QGroupBox *groupBoxNew;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditNewLoginName;
    QLabel *label_6;
    QLineEdit *lineEditNewPassword;
    QLabel *label_4;
    QLineEdit *lineEditNewCredit;
    QLabel *label_7;
    QLineEdit *lineEditStudentDiscount;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAdmin)
    {
        if (DialogAdmin->objectName().isEmpty())
            DialogAdmin->setObjectName(QString::fromUtf8("DialogAdmin"));
        DialogAdmin->resize(400, 569);
        verticalLayout = new QVBoxLayout(DialogAdmin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxAdmin = new QGroupBox(DialogAdmin);
        groupBoxAdmin->setObjectName(QString::fromUtf8("groupBoxAdmin"));
        verticalLayout_2 = new QVBoxLayout(groupBoxAdmin);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBoxAdmin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        comboBoxLoginType = new QComboBox(groupBoxAdmin);
        comboBoxLoginType->addItem(QString());
        comboBoxLoginType->addItem(QString());
        comboBoxLoginType->setObjectName(QString::fromUtf8("comboBoxLoginType"));

        verticalLayout_2->addWidget(comboBoxLoginType);

        comboBoxActionUser = new QComboBox(groupBoxAdmin);
        comboBoxActionUser->addItem(QString());
        comboBoxActionUser->addItem(QString());
        comboBoxActionUser->addItem(QString());
        comboBoxActionUser->setObjectName(QString::fromUtf8("comboBoxActionUser"));

        verticalLayout_2->addWidget(comboBoxActionUser);

        groupBoxLogin_2 = new QGroupBox(groupBoxAdmin);
        groupBoxLogin_2->setObjectName(QString::fromUtf8("groupBoxLogin_2"));
        verticalLayout_3 = new QVBoxLayout(groupBoxLogin_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(groupBoxLogin_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEditLoginName = new QLineEdit(groupBoxLogin_2);
        lineEditLoginName->setObjectName(QString::fromUtf8("lineEditLoginName"));

        verticalLayout_3->addWidget(lineEditLoginName);

        label_3 = new QLabel(groupBoxLogin_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEditLoginPassword = new QLineEdit(groupBoxLogin_2);
        lineEditLoginPassword->setObjectName(QString::fromUtf8("lineEditLoginPassword"));

        verticalLayout_3->addWidget(lineEditLoginPassword);


        verticalLayout_2->addWidget(groupBoxLogin_2);

        groupBoxNew = new QGroupBox(groupBoxAdmin);
        groupBoxNew->setObjectName(QString::fromUtf8("groupBoxNew"));
        verticalLayout_4 = new QVBoxLayout(groupBoxNew);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(groupBoxNew);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEditNewLoginName = new QLineEdit(groupBoxNew);
        lineEditNewLoginName->setObjectName(QString::fromUtf8("lineEditNewLoginName"));

        verticalLayout_4->addWidget(lineEditNewLoginName);

        label_6 = new QLabel(groupBoxNew);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        lineEditNewPassword = new QLineEdit(groupBoxNew);
        lineEditNewPassword->setObjectName(QString::fromUtf8("lineEditNewPassword"));

        verticalLayout_4->addWidget(lineEditNewPassword);

        label_4 = new QLabel(groupBoxNew);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        lineEditNewCredit = new QLineEdit(groupBoxNew);
        lineEditNewCredit->setObjectName(QString::fromUtf8("lineEditNewCredit"));

        verticalLayout_4->addWidget(lineEditNewCredit);


        verticalLayout_2->addWidget(groupBoxNew);

        label_7 = new QLabel(groupBoxAdmin);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        lineEditStudentDiscount = new QLineEdit(groupBoxAdmin);
        lineEditStudentDiscount->setObjectName(QString::fromUtf8("lineEditStudentDiscount"));

        verticalLayout_2->addWidget(lineEditStudentDiscount);


        verticalLayout->addWidget(groupBoxAdmin);

        buttonBox = new QDialogButtonBox(DialogAdmin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogAdmin);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAdmin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAdmin, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAdmin);
    } // setupUi

    void retranslateUi(QDialog *DialogAdmin)
    {
        DialogAdmin->setWindowTitle(QCoreApplication::translate("DialogAdmin", "Dialog", nullptr));
        groupBoxAdmin->setTitle(QString());
        label->setText(QCoreApplication::translate("DialogAdmin", "Admin Field", nullptr));
        comboBoxLoginType->setItemText(0, QCoreApplication::translate("DialogAdmin", "Employee", nullptr));
        comboBoxLoginType->setItemText(1, QCoreApplication::translate("DialogAdmin", "Student", nullptr));

        comboBoxActionUser->setItemText(0, QCoreApplication::translate("DialogAdmin", "Edit User", nullptr));
        comboBoxActionUser->setItemText(1, QCoreApplication::translate("DialogAdmin", "Delete User", nullptr));
        comboBoxActionUser->setItemText(2, QCoreApplication::translate("DialogAdmin", "New User", nullptr));

        groupBoxLogin_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("DialogAdmin", "Login Name ", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAdmin", "Password", nullptr));
        groupBoxNew->setTitle(QString());
        label_5->setText(QCoreApplication::translate("DialogAdmin", "New Login Name", nullptr));
        label_6->setText(QCoreApplication::translate("DialogAdmin", "New Password", nullptr));
        label_4->setText(QCoreApplication::translate("DialogAdmin", "New Credit", nullptr));
        label_7->setText(QCoreApplication::translate("DialogAdmin", "Student Discount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdmin: public Ui_DialogAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
