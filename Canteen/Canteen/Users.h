#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "Meal.h"


class Administrator {
private:
    QString loginName;
    QString password;

public:
    Administrator() { loginName = ""; password = ""; }
    Administrator(QString login, QString pass) { loginName = login; password = pass; }

    void setLoginName(QString login) { loginName = login; }
    void setPassword(QString pass) { password = pass; }
    QString getLoginName() { return loginName; }
    QString getPassword() { return password; }
};

class Employee : public Administrator {
private:
    QString post;
    float credit;
    QMap<int, Meal> orders;

public:
    Employee() : Administrator("", ""), post(""), credit(0.0) {}
    Employee(QString login, QString pass, QString pos, float c) : Administrator(login, pass), post(pos), credit(c) {}

    void setPost(QString pos) { post = pos; }
    void setCredit(float c) { credit = c; }
    void setOrder(int day, Meal m) { orders.insert(day, m); }

    QString getPost() { return post; }
    float getCredit() { return credit; }
    Meal getOrder(int day) { return orders.value(day); }

    void removeOrder(int day) { orders.remove(day); }

};

class Student : public Administrator {
private:
    QString subject;
    float credit;
    float sale;
    QMap<int, Meal> orders;

public:
    Student() : Administrator("", ""), subject(""), credit(0.0), sale(0.0) {}
    Student(QString login, QString pass, QString pos, float c, float s) : Administrator(login, pass), subject(pos), credit(c), sale(s) {}

    void setSubject(QString pos) { subject = pos; }
    void setCredit(float c) { credit = c; }
    void setSale(float s) { sale = s; }
    void setOrder(int day, Meal m) { orders.insert(day, m); }


    QString getSubject() { return subject; }
    float getCredit() { return credit; }
    float getSale() { return sale; }
    Meal getOrder(int day) { return orders.value(day); }

    void removeOrder(int day) { orders.remove(day); }
};

class Staff : public Administrator {
private:
    QString post;
public:
    Staff() : Administrator("", ""), post("") {}
    Staff(QString login, QString pass, QString pos) : Administrator(login, pass), post(pos) {}

    void setPost(QString pos) { post = pos; }
    QString getPost() { return post; }

};