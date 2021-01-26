#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "ui_Canteen.h"
#include "LoginDialog.h"
#include "Orders.h"
#include "Users.h"
#include "Meal.h"
#include "Day.h"


class NumberOfMeals {
private:
    QString mealName;
    int number;
public:
    NumberOfMeals() { mealName = ""; number = 0; }
    NumberOfMeals(QString name, int n) { mealName = name; number = n; }

    void setMealName(QString name) { mealName = name; }
    void setNumber(int n) { number = n; }

    QString getMealName() { return mealName; }
    int getNumber() { return number; }

};

class Canteen : public QMainWindow
{
    Q_OBJECT

public:
    Canteen(QWidget* parent = Q_NULLPTR);

private:
    Ui::CanteenClass ui;
    LoginDialog* login;
    Orders* numberoforders;

    void SignIn(); 

    QString AdminName="admin";
    QString AdminPass="123";
    Administrator admin = Administrator(AdminName, AdminPass);

    void setAdmin(QString n, QString p);

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
    int menucount=0, loadMenuFileCount=0;
    void fillMenuData();

    Day mondayO, tuesdayO, wednesdayO, thursdayO, fridayO, saturdayO, sundayO;
       
    int findMealDay(QString s);

    NumberOfMeals nMonday, nTuesday, nWednesday, nThursday, nFriday, nSaturday, nSunday;
    QVector<QString> mealsName;
    QVector<QString> mealsNumber;

private slots:

    void DialogAccepted();

    void on_actionMenu_for_week_triggered(); 

    void on_actionChangePostEmployee_triggered();

    void on_actionNumber_of_Order_triggered();

    void on_showMenuButton_clicked();
    void on_orderButton_clicked();
    void on_ShowOrderButton_clicked();
    void on_cancelButton_clicked();

    void on_ShowCreditButton_clicked();
    void on_LogOutButton_clicked();


};
