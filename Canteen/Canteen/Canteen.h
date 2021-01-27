#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>

#include "ui_Canteen.h"
#include "LoginDialog.h"
#include "Orders.h"
#include "ChangeStatus.h"
#include "AdminDIalog.h"

#include "Users.h"
#include "Meal.h"
#include "Day.h"

class Canteen : public QMainWindow
{
    Q_OBJECT

public:
    Canteen(QWidget* parent = Q_NULLPTR);

private:
    Ui::CanteenClass ui;
    LoginDialog* login;
    Orders* ordersTable;
    ChangeStatus* statusChange;
    AdminDialog* adminField;

    QString hashPassword(QString pass);

    void SignIn(); 

    float discount=0.2;
    QString AdminName="admin";
    QString AdminPass="123";
    Administrator admin = Administrator(AdminName, AdminPass, discount);

    void setAdmin(QString n, QString p, float d);

    QVector<Employee> employees;
    QVector<Student> students;
    QVector<Staff> staff;

    Employee employer;
    Student student;
    Staff member;

    void fillEmployees();
    void fillStudents();
    void fillStaff();

    QString loginType;
    QString loginName;
    QString loginPassword;
    bool findLoginStudent(QString name, QString pass);
    bool findLoginEmployee(QString name, QString pass);
    bool findLoginStaff(QString name, QString pass);

    QVector<QString> menuData;
    QVector<QString> meals;
    QVector<Day> days = { Day(),Day(),Day(),Day(), Day(),Day(), Day()};
    void fillMenuData();

    int findMealDay(QString s);

    QMap<QString,int> numberOfOrders;


    QDate date;
    void usersOrdersOutput();

    void numerOfOrdersOutPut();

    void updateEmployeesData();
    void updateStudentData();
    void updateStaffData();


private slots:

    void DialogAccepted();
    void DialogOrdersAccepted();
    void DialogChangeStatusAccepted();
    void DialogAdmiAccepted();

    void on_actionMenu_for_week_triggered(); 
    void on_actionChange_Login_triggered();

    void on_actionChangePostEmployee_triggered();
    void on_actionChange_PositionStaff_triggered();
    void on_actionChange_Subject_triggered();

    void on_actionNumber_of_Order_triggered();

    void on_showMenuButton_clicked();
    void on_orderButton_clicked();
    void on_ShowOrderButton_clicked();
    void on_cancelButton_clicked();

    void on_ShowCreditButton_clicked();
    void on_LogOutButton_clicked();


};
