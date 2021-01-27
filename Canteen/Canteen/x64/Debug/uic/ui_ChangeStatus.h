/********************************************************************************
** Form generated from reading UI file 'ChangeStatus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESTATUS_H
#define UI_CHANGESTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogChangeStatus
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLineEdit *lineEditNewStatus;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogChangeStatus)
    {
        if (DialogChangeStatus->objectName().isEmpty())
            DialogChangeStatus->setObjectName(QString::fromUtf8("DialogChangeStatus"));
        DialogChangeStatus->resize(419, 262);
        verticalLayout = new QVBoxLayout(DialogChangeStatus);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DialogChangeStatus);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEditNewStatus = new QLineEdit(groupBox);
        lineEditNewStatus->setObjectName(QString::fromUtf8("lineEditNewStatus"));

        verticalLayout_2->addWidget(lineEditNewStatus);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(DialogChangeStatus);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogChangeStatus);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogChangeStatus, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogChangeStatus, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogChangeStatus);
    } // setupUi

    void retranslateUi(QDialog *DialogChangeStatus)
    {
        DialogChangeStatus->setWindowTitle(QCoreApplication::translate("DialogChangeStatus", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("DialogChangeStatus", "Change School Status", nullptr));
        label_2->setText(QCoreApplication::translate("DialogChangeStatus", "Enter New Status", nullptr));
        lineEditNewStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogChangeStatus: public Ui_DialogChangeStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESTATUS_H
