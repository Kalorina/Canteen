#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets>

#include "ui_LoginDialog.h"

class LoginDialog : public QDialog {
	
	Q_OBJECT

public:
	LoginDialog(QWidget* parent = Q_NULLPTR) :QDialog(parent), loginUi(new Ui::Dialog) {
		loginUi->setupUi(this);
	}

	QString getLoginType() { return loginUi->loginType->currentText(); }
	QString getName() { return loginUi->loginNameLine->text(); }
	QString getPassword() { return loginUi->LoginPasswordLine->text(); }

private:
	Ui::Dialog* loginUi;

};