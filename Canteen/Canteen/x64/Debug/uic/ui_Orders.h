/********************************************************************************
** Form generated from reading UI file 'Orders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERS_H
#define UI_ORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogOrders
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogOrders)
    {
        if (DialogOrders->objectName().isEmpty())
            DialogOrders->setObjectName(QString::fromUtf8("DialogOrders"));
        DialogOrders->resize(407, 485);
        verticalLayout = new QVBoxLayout(DialogOrders);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DialogOrders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(DialogOrders);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogOrders);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogOrders, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogOrders, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogOrders);
    } // setupUi

    void retranslateUi(QDialog *DialogOrders)
    {
        DialogOrders->setWindowTitle(QCoreApplication::translate("DialogOrders", "Dialog", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogOrders", "Meal", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogOrders", "Number of orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogOrders: public Ui_DialogOrders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERS_H
