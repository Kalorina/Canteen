#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets>

#include "ui_AdminDialog.h"

class AdminDialog : public QDialog {

	Q_OBJECT

public:
	AdminDialog(QWidget* parent = Q_NULLPTR) :QDialog(parent), adminUi(new Ui::DialogAdmin) {
		adminUi->setupUi(this);
	}

	QString getloginType() { return adminUi->comboBoxLoginType->currentText(); }
	QString getActionUser() { return adminUi->comboBoxActionUser->currentText(); }
	QString getLoginName() { return adminUi->lineEditLoginName->text(); }
	QString getPassword() { return adminUi->lineEditLoginPassword->text(); }

	QString getNewLoginName() { return adminUi->lineEditNewLoginName->text(); }
	QString getNewPassword() { return adminUi->lineEditNewPassword->text(); }
	QString getNewCredit() { return adminUi->lineEditNewCredit->text(); }

	QString getNewDiscount() {return adminUi->lineEditStudentDiscount->text(); }

private:
	Ui::DialogAdmin* adminUi;

};