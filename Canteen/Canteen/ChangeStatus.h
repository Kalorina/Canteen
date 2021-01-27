#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets>

#include "ui_ChangeStatus.h"

class ChangeStatus : public QDialog {

	Q_OBJECT

public:
	ChangeStatus(QWidget* parent = Q_NULLPTR) :QDialog(parent), changeStatusUi(new Ui::DialogChangeStatus) {
		changeStatusUi->setupUi(this);
	}

	QString getNewStatus() { return changeStatusUi->lineEditNewStatus->text(); }

private:
	Ui::DialogChangeStatus* changeStatusUi;

};