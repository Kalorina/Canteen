/********************************************************************************
** Form generated from reading UI file 'Canteen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANTEEN_H
#define UI_CANTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CanteenClass
{
public:
    QAction *actionOpen_file;
    QAction *actionChange_Subject;
    QAction *actionChangePostEmployee;
    QAction *actionPosition;
    QAction *actionMenu_for_week;
    QAction *actionOrders_for_Monday;
    QAction *actionOrder_fot_Tuesday;
    QAction *actionOrder_for_Wednesday;
    QAction *actionOrder_for_Thursday;
    QAction *actionOrder_for_Friday;
    QAction *actionOrder_for_Saturday;
    QAction *actionOrder_for_Sunday;
    QAction *actionLogin_for_Staff;
    QAction *actionLogin_for_Students;
    QAction *actionNumber_of_Order;
    QAction *actionChange_PositionStaff;
    QAction *actionChange_Login;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *logInGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *menuGroupBox;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *showMenuButton;
    QPushButton *orderButton;
    QPushButton *ShowOrderButton;
    QPushButton *cancelButton;
    QTreeWidget *treeOrder;
    QTreeWidget *treeMenu;
    QGroupBox *orderGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ShowCreditButton;
    QPushButton *LogOutButton;
    QMenuBar *menuBar;
    QMenu *menuAdmin;
    QMenu *menuEmployee;
    QMenu *menuStaff;
    QMenu *menuStudent;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CanteenClass)
    {
        if (CanteenClass->objectName().isEmpty())
            CanteenClass->setObjectName(QString::fromUtf8("CanteenClass"));
        CanteenClass->resize(754, 541);
        actionOpen_file = new QAction(CanteenClass);
        actionOpen_file->setObjectName(QString::fromUtf8("actionOpen_file"));
        actionChange_Subject = new QAction(CanteenClass);
        actionChange_Subject->setObjectName(QString::fromUtf8("actionChange_Subject"));
        actionChangePostEmployee = new QAction(CanteenClass);
        actionChangePostEmployee->setObjectName(QString::fromUtf8("actionChangePostEmployee"));
        actionPosition = new QAction(CanteenClass);
        actionPosition->setObjectName(QString::fromUtf8("actionPosition"));
        actionMenu_for_week = new QAction(CanteenClass);
        actionMenu_for_week->setObjectName(QString::fromUtf8("actionMenu_for_week"));
        actionOrders_for_Monday = new QAction(CanteenClass);
        actionOrders_for_Monday->setObjectName(QString::fromUtf8("actionOrders_for_Monday"));
        actionOrder_fot_Tuesday = new QAction(CanteenClass);
        actionOrder_fot_Tuesday->setObjectName(QString::fromUtf8("actionOrder_fot_Tuesday"));
        actionOrder_for_Wednesday = new QAction(CanteenClass);
        actionOrder_for_Wednesday->setObjectName(QString::fromUtf8("actionOrder_for_Wednesday"));
        actionOrder_for_Thursday = new QAction(CanteenClass);
        actionOrder_for_Thursday->setObjectName(QString::fromUtf8("actionOrder_for_Thursday"));
        actionOrder_for_Friday = new QAction(CanteenClass);
        actionOrder_for_Friday->setObjectName(QString::fromUtf8("actionOrder_for_Friday"));
        actionOrder_for_Saturday = new QAction(CanteenClass);
        actionOrder_for_Saturday->setObjectName(QString::fromUtf8("actionOrder_for_Saturday"));
        actionOrder_for_Sunday = new QAction(CanteenClass);
        actionOrder_for_Sunday->setObjectName(QString::fromUtf8("actionOrder_for_Sunday"));
        actionLogin_for_Staff = new QAction(CanteenClass);
        actionLogin_for_Staff->setObjectName(QString::fromUtf8("actionLogin_for_Staff"));
        actionLogin_for_Students = new QAction(CanteenClass);
        actionLogin_for_Students->setObjectName(QString::fromUtf8("actionLogin_for_Students"));
        actionNumber_of_Order = new QAction(CanteenClass);
        actionNumber_of_Order->setObjectName(QString::fromUtf8("actionNumber_of_Order"));
        actionChange_PositionStaff = new QAction(CanteenClass);
        actionChange_PositionStaff->setObjectName(QString::fromUtf8("actionChange_PositionStaff"));
        actionChange_Login = new QAction(CanteenClass);
        actionChange_Login->setObjectName(QString::fromUtf8("actionChange_Login"));
        centralWidget = new QWidget(CanteenClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logInGroupBox = new QGroupBox(centralWidget);
        logInGroupBox->setObjectName(QString::fromUtf8("logInGroupBox"));
        verticalLayout_2 = new QVBoxLayout(logInGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(logInGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(logInGroupBox);

        menuGroupBox = new QGroupBox(centralWidget);
        menuGroupBox->setObjectName(QString::fromUtf8("menuGroupBox"));
        gridLayout = new QGridLayout(menuGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(menuGroupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        showMenuButton = new QPushButton(groupBox_2);
        showMenuButton->setObjectName(QString::fromUtf8("showMenuButton"));

        verticalLayout_3->addWidget(showMenuButton);

        orderButton = new QPushButton(groupBox_2);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));

        verticalLayout_3->addWidget(orderButton);

        ShowOrderButton = new QPushButton(groupBox_2);
        ShowOrderButton->setObjectName(QString::fromUtf8("ShowOrderButton"));

        verticalLayout_3->addWidget(ShowOrderButton);

        cancelButton = new QPushButton(groupBox_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout_3->addWidget(cancelButton);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        treeOrder = new QTreeWidget(menuGroupBox);
        treeOrder->setObjectName(QString::fromUtf8("treeOrder"));

        gridLayout->addWidget(treeOrder, 0, 3, 1, 1);

        treeMenu = new QTreeWidget(menuGroupBox);
        treeMenu->setObjectName(QString::fromUtf8("treeMenu"));

        gridLayout->addWidget(treeMenu, 0, 1, 1, 1);


        verticalLayout->addWidget(menuGroupBox);

        orderGroupBox = new QGroupBox(centralWidget);
        orderGroupBox->setObjectName(QString::fromUtf8("orderGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(orderGroupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ShowCreditButton = new QPushButton(orderGroupBox);
        ShowCreditButton->setObjectName(QString::fromUtf8("ShowCreditButton"));

        horizontalLayout_2->addWidget(ShowCreditButton);

        LogOutButton = new QPushButton(orderGroupBox);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));

        horizontalLayout_2->addWidget(LogOutButton);


        verticalLayout->addWidget(orderGroupBox);

        CanteenClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CanteenClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 21));
        menuAdmin = new QMenu(menuBar);
        menuAdmin->setObjectName(QString::fromUtf8("menuAdmin"));
        menuEmployee = new QMenu(menuBar);
        menuEmployee->setObjectName(QString::fromUtf8("menuEmployee"));
        menuStaff = new QMenu(menuBar);
        menuStaff->setObjectName(QString::fromUtf8("menuStaff"));
        menuStudent = new QMenu(menuBar);
        menuStudent->setObjectName(QString::fromUtf8("menuStudent"));
        CanteenClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CanteenClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CanteenClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CanteenClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CanteenClass->setStatusBar(statusBar);

        menuBar->addAction(menuAdmin->menuAction());
        menuBar->addAction(menuEmployee->menuAction());
        menuBar->addAction(menuStaff->menuAction());
        menuBar->addAction(menuStudent->menuAction());
        menuAdmin->addAction(actionMenu_for_week);
        menuAdmin->addSeparator();
        menuAdmin->addAction(actionChange_Login);
        menuEmployee->addAction(actionChangePostEmployee);
        menuStaff->addAction(actionNumber_of_Order);
        menuStaff->addSeparator();
        menuStaff->addAction(actionChange_PositionStaff);
        menuStudent->addAction(actionChange_Subject);

        retranslateUi(CanteenClass);

        QMetaObject::connectSlotsByName(CanteenClass);
    } // setupUi

    void retranslateUi(QMainWindow *CanteenClass)
    {
        CanteenClass->setWindowTitle(QCoreApplication::translate("CanteenClass", "Canteen", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("CanteenClass", "SetUp Employees", nullptr));
        actionChange_Subject->setText(QCoreApplication::translate("CanteenClass", "Change Subject", nullptr));
        actionChangePostEmployee->setText(QCoreApplication::translate("CanteenClass", "Change Position", nullptr));
        actionPosition->setText(QCoreApplication::translate("CanteenClass", "Position", nullptr));
        actionMenu_for_week->setText(QCoreApplication::translate("CanteenClass", "Menu for week", nullptr));
        actionOrders_for_Monday->setText(QCoreApplication::translate("CanteenClass", "Orders for Monday", nullptr));
        actionOrder_fot_Tuesday->setText(QCoreApplication::translate("CanteenClass", "Order fot Tuesday", nullptr));
        actionOrder_for_Wednesday->setText(QCoreApplication::translate("CanteenClass", "Order for Wednesday", nullptr));
        actionOrder_for_Thursday->setText(QCoreApplication::translate("CanteenClass", "Order for Thursday", nullptr));
        actionOrder_for_Friday->setText(QCoreApplication::translate("CanteenClass", "Order for Friday", nullptr));
        actionOrder_for_Saturday->setText(QCoreApplication::translate("CanteenClass", "Order for Saturday", nullptr));
        actionOrder_for_Sunday->setText(QCoreApplication::translate("CanteenClass", "Order for Sunday", nullptr));
        actionLogin_for_Staff->setText(QCoreApplication::translate("CanteenClass", "SetUp Staff", nullptr));
        actionLogin_for_Students->setText(QCoreApplication::translate("CanteenClass", "SetUp Students", nullptr));
        actionNumber_of_Order->setText(QCoreApplication::translate("CanteenClass", "Number of Order", nullptr));
        actionChange_PositionStaff->setText(QCoreApplication::translate("CanteenClass", "Change Position", nullptr));
        actionChange_Login->setText(QCoreApplication::translate("CanteenClass", "Change Login", nullptr));
        logInGroupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("CanteenClass", " Welcome to Canteen", nullptr));
        menuGroupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        showMenuButton->setText(QCoreApplication::translate("CanteenClass", "Show Menu", nullptr));
        orderButton->setText(QCoreApplication::translate("CanteenClass", "Order", nullptr));
        ShowOrderButton->setText(QCoreApplication::translate("CanteenClass", "Show Order", nullptr));
        cancelButton->setText(QCoreApplication::translate("CanteenClass", "Cancel Meal", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeOrder->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("CanteenClass", "Student Price", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("CanteenClass", "Price", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("CanteenClass", "Meal", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("CanteenClass", "Day", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeMenu->headerItem();
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("CanteenClass", "Student Price", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("CanteenClass", "Price", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("CanteenClass", "Meal", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("CanteenClass", "Day", nullptr));
        orderGroupBox->setTitle(QString());
        ShowCreditButton->setText(QCoreApplication::translate("CanteenClass", "Show Credit", nullptr));
        LogOutButton->setText(QCoreApplication::translate("CanteenClass", "Log Out", nullptr));
        menuAdmin->setTitle(QCoreApplication::translate("CanteenClass", "Admin", nullptr));
        menuEmployee->setTitle(QCoreApplication::translate("CanteenClass", "Employee", nullptr));
        menuStaff->setTitle(QCoreApplication::translate("CanteenClass", "Staff", nullptr));
        menuStudent->setTitle(QCoreApplication::translate("CanteenClass", "Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CanteenClass: public Ui_CanteenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANTEEN_H
