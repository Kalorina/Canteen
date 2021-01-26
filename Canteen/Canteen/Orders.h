#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets>

#include "ui_Orders.h"

class Orders : public QDialog {

	Q_OBJECT

public:
	Orders(QWidget* parent = Q_NULLPTR) :QDialog(parent), ordersUi(new Ui::DialogOrders) {
		ordersUi->setupUi(this);
	}

	void setTable(QVector<QString> mealsName, QVector<QString> number) {

		ordersUi->tableWidget->setRowCount(mealsName.size());
		ordersUi->tableWidget->setColumnCount(2);

		for (int i = 0; i < mealsName.size(); i++)
		{
			QTableWidgetItem* meal1 = new QTableWidgetItem();
			meal1->setText(mealsName[i]);

			ordersUi->tableWidget->setItem(i, 0, meal1);

			QTableWidgetItem* number1 = new QTableWidgetItem();
			number1->setText(number[i]);
			ordersUi->tableWidget->setItem(i, 2, number1);

		}
	}

private:
	Ui::DialogOrders* ordersUi;

};