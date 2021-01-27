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

	void setTable(QList<QString> mealsName, QList<int> number) {

		ordersUi->tableWidget->setRowCount(21);
		ordersUi->tableWidget->setColumnCount(2);

		QString n;

		for (int i = 0; i < 21; i++)
		{
			
			QTableWidgetItem* meal1 = new QTableWidgetItem();
			meal1->setText(mealsName[i]);

			ordersUi->tableWidget->setItem(i, 0, meal1);
			n.setNum(number[i]);

			QTableWidgetItem* number1 = new QTableWidgetItem();
			number1->setText(n);
			ordersUi->tableWidget->setItem(i, 1, number1);

		}
	}

private:
	Ui::DialogOrders* ordersUi;

};