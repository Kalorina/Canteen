#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>

class Meal {
private:
    QString name;
    float price;
    float discount;
public:
    Meal() { name = ""; price = 0.0; discount = 0.0; }
    Meal(QString n, float p, float d) { name = n; price = p; discount = d; }

    void setName(QString n) { name = n; }
    void setPrice(float p) { price = p; }
    void setDiscount(float d) { discount = d; }

    QString getName() { return name; }
    float getPrice() { return price; }
    float getDiscount() { return discount; }
};