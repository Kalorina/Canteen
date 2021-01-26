#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "Meal.h"

class Day {
private:
    QString dayName;
    Meal meals[3] = {Meal(),Meal(),Meal()};
public:
    Day() { dayName = ""; }
    Day(QString dn) { dayName = dn; }

    void setDayName(QString dn) { dayName = dn; }
    QString getDayName() { return dayName; }

    void setMeal(QString n, float p, float d, int id) { meals[id].setName(n); meals[id].setPrice(p); meals[id].setDiscount(d); }
    QString getMealName(int id) { return meals[id].getName(); }
    float getMealPrice(int id) { return meals[id].getPrice(); }
    float getMealDiscount(int id) { return meals[id].getDiscount(); }
};