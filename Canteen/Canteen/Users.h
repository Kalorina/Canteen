#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "Meal.h"

class User {
private:
    QString loginName;
    QString password;
public:
    User() { loginName = ""; password = ""; }
    User(QString login, QString pass) { loginName = login; password = pass; }

    void setLoginName(QString login) { loginName = login; }
    void setPassword(QString pass) { password = pass; }

    QString getLoginName() { return loginName; }
    QString getPassword() { return password; }
};

class Administrator : public User {
private:
    float discount;
public:
    Administrator() : User(), discount(0) {}
    Administrator(QString login, QString pass, float d) : User(login, pass), discount(d) {}

    void setDiscount(float d) { discount = d; }
    float getDiscount() { return discount; }

};

class Employee : public User {
private:
    QString post;
    float credit;
    QMap<int, Meal> orders;

public:
    Employee() : User(), post(""), credit(0.0) {}
    Employee(QString login, QString pass, QString pos, float c) : User(login, pass), post(pos), credit(c) {}

    void setPost(QString pos) { post = pos; }
    void setCredit(float c) { credit = c; }
    void setOrder(int day, Meal m) { orders.insert(day, m); }

    QString getPost() { return post; }
    float getCredit() { return credit; }
    Meal getOrder(int day) { return orders.value(day); }

    void removeOrder(int day) { orders.remove(day); }

};

class Student : public User {
private:
    QString subject;
    float credit;
    QMap<int, Meal> orders;

public:
    Student() : User(), subject(""), credit(0.0) {}
    Student(QString login, QString pass, QString pos, float c) : User(login, pass), subject(pos), credit(c) {}

    void setSubject(QString pos) { subject = pos; }
    void setCredit(float c) { credit = c; }
    void setOrder(int day, Meal m) { orders.insert(day, m); }

    QString getSubject() { return subject; }
    float getCredit() { return credit; }
    Meal getOrder(int day) { return orders.value(day); }

    void removeOrder(int day) { orders.remove(day); }

};

class Staff : public User {
private:
    QString post;
public:
    Staff() : User(), post("") {}
    Staff(QString login, QString pass, QString pos) : User(login, pass), post(pos) {}

    void setPost(QString pos) { post = pos; }
    QString getPost() { return post; }

};