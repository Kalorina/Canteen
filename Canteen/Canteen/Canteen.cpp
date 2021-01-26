#include "Canteen.h"

Canteen::Canteen(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.menuAdmin->setDisabled(true);
    ui.menuEmployee->setDisabled(true);
    ui.menuStaff->setDisabled(true);
    ui.menuStudent->setDisabled(true);
    ui.menuGroupBox->setDisabled(true);
    ui.ShowCreditButton->setDisabled(true);
    ui.LogOutButton->setDisabled(true);

    fillEmployees();
    fillStudents();
    fillStaff();

    SignIn();
}

void Canteen::SignIn()
{
    login = new LoginDialog(this);
    connect(login, SIGNAL(accepted()), this, SLOT(DialogAccepted()));
    login->exec();
}

void Canteen::setAdmin(QString n, QString p)
{
    admin.setLoginName(n);
    admin.setPassword(p);
}

void Canteen::fillEmployees()
{
    QVector<QString> fileLines;
    QString fileName = "Employees.csv";

    if (fileName.isEmpty()) {
        qDebug() << "file is empty";
        return;
    }

    QFileInfo Finfo(fileName);

    if (Finfo.suffix() == "csv") {

        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            fileLines.push_back(line);
        }

        file.close();
    }

    if (fileLines.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Data did not load.");
        msgBox.exec();
    }

    for (int i = 0; i < fileLines.size(); i++)
    {
        Employee e;
        QStringList list1 = fileLines[i].split(QLatin1Char(','));
        e.setLoginName(list1.at(0));
        e.setPassword(list1.at(1));
        e.setPost(list1.at(2));
        e.setCredit(list1.at(3).toFloat());

        employees.push_back(e);
    }
}

void Canteen::fillStudents()
{
    QVector<QString> fileLines;
    QString fileName = "Students.csv";

    if (fileName.isEmpty()) {
        qDebug() << "file is empty";
        return;
    }

    QFileInfo Finfo(fileName);

    if (Finfo.suffix() == "csv") {

        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            fileLines.push_back(line);
        }

        file.close();
    }

    if (fileLines.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Data did not load.");
        msgBox.exec();
    }

    for (int i = 0; i < fileLines.size(); i++)
    {
        Student e;
        QStringList list1 = fileLines[i].split(QLatin1Char(','));
        e.setLoginName(list1.at(0));
        e.setPassword(list1.at(1));
        e.setSubject(list1.at(2));
        e.setCredit(list1.at(3).toFloat());

        students.push_back(e);
    }
}

void Canteen::fillStaff()
{
    QVector<QString> fileLines;
    QString fileName = "Staff.csv";

    if (fileName.isEmpty()) {
        qDebug() << "file is empty";
        return;
    }

    QFileInfo Finfo(fileName);

    if (Finfo.suffix() == "csv") {

        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            fileLines.push_back(line);
        }

        file.close();
    }

    if (fileLines.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Data did not load.");
        msgBox.exec();
    }

    for (int i = 0; i < fileLines.size(); i++)
    {
        Staff e;
        QStringList list1 = fileLines[i].split(QLatin1Char(','));
        e.setLoginName(list1.at(0));
        e.setPassword(list1.at(1));
        e.setPost(list1.at(2));

        staff.push_back(e);
    }
/*
    for (int i = 0; i < staff.size(); i++)
    {
        qDebug() << staff[i].getLoginName();
        qDebug() << staff[i].getPassword();
        qDebug() << staff[i].getPost();
    }
*/
}



bool Canteen::findLoginStudent(QString name, QString pass)
{
    bool a=false;
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getLoginName() == name) {
            if (students[i].getPassword() == pass) {
                a = true;
                student.setLoginName(name);
                student.setPassword(pass);
                student.setCredit(students[i].getCredit());
                student.setSubject(students[i].getSubject());

                return true;
            }
        }
    }
    if (a != true) {
        return false;
    }
}

bool Canteen::findLoginEmployee(QString name, QString pass)
{
    bool a;
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].getLoginName() == name) {
            if (employees[i].getPassword() == pass) {
                employer.setLoginName(name);
                employer.setPassword(pass);
                employer.setCredit(employees[i].getCredit());
                employer.setPost(employees[i].getPost());

                a = true;
                return true;
            }
        }
    }
    if (a != true) {
        return false;
    }
}

bool Canteen::findLoginStaff(QString name, QString pass)
{
    bool a;
    for (int i = 0; i < staff.size(); i++)
    {
        if (staff[i].getLoginName() == name) {
            if (staff[i].getPassword() == pass) {
                member.setLoginName(name);
                member.setPassword(pass);
                member.setPost(staff[i].getPost());

                a = true;
                return true;
            }
        }
    }
    if (a != true) {
        return false;
    }
    
}

void Canteen::fillMenuData() {

    QVector<QString> dayNames = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    QString p, d;

    for (int i = 0; i < 7; i++)
    {
        QStringList list1 = menuData[i * 3 + 0].split(QLatin1Char(','));
        QStringList list2 = menuData[i * 3 + 1].split(QLatin1Char(','));
        QStringList list3 = menuData[i * 3 + 2].split(QLatin1Char(','));
        days[i].setMeal(list1.at(0), list1.at(1).toFloat(), 0.2, 0);
        days[i].setMeal(list2.at(0), list2.at(1).toFloat(), 0.2, 1);
        days[i].setMeal(list3.at(0), list3.at(1).toFloat(), 0.2, 2);
        days[i].setDayName(dayNames[i]);

    }

    for (int i = 0; i < 7; i++)
    {
        QTreeWidgetItem* parent = new QTreeWidgetItem(ui.treeMenu);
        parent->setText(0, days[i].getDayName());

        for (int j = 0; j < 3; j++)
        {
            QTreeWidgetItem* childItem = new QTreeWidgetItem();
            childItem->setText(1, days[i].getMealName(j));
            childItem->setText(2, p.setNum(days[i].getMealPrice(j)));
            childItem->setText(3, d.setNum(days[i].getMealPrice(j) - days[i].getMealPrice(j) * days[i].getMealDiscount(j)));

            parent->addChild(childItem);
        }
    }

    for (int i = 0; i < menuData.size(); i++)
    {
        QStringList list1 = menuData[i].split(QLatin1Char(','));
        meals.push_back(list1.at(0));
    }
}

int Canteen::findMealDay(QString str)
{
    for (int i = 0; i < meals.size(); i++)
    {
        if (meals[i] == str) {
            return i / 3;
        }
    }
}

//Login

void Canteen::DialogAccepted() {

    QMessageBox msgBox;

    loginType = login->getLoginType();
    loginName = login->getName();
    loginPassword = login->getPassword();
    
    LoginDialog* login = static_cast<LoginDialog*>(sender());
    

    if (loginType == "Student"){
        int i = 0;
        do {
            
            if (findLoginStudent(loginName, loginPassword) == false) {
               
                msgBox.setText("Wrong name or password.");
                msgBox.exec();
                qDebug() << "Nespravny login";
                break;
            }
            else {
                ui.menuStudent->setEnabled(true);
                ui.menuGroupBox->setEnabled(true);
                ui.treeMenu->clear();
                ui.treeOrder->clear();
                ui.ShowCreditButton->setEnabled(true);
                ui.LogOutButton->setEnabled(true);
                qDebug() << "Spravny login";
            
                break;
            }
        } while (i < students.size());
    }

    if (loginType == "Employee") {
        int i = 0;
        do {
            if (findLoginEmployee(loginName, loginPassword) == false) {
                msgBox.setText("Wrong name or password.");
                msgBox.exec();
                qDebug() << "Nespravny login";
                break;
            }
            else {
                ui.menuEmployee->setEnabled(true);
                ui.menuGroupBox->setEnabled(true);
                ui.treeMenu->clear();
                ui.treeOrder->clear();
                ui.ShowCreditButton->setEnabled(true);
                ui.LogOutButton->setEnabled(true);
                qDebug() << "Spravny login";
                break;
            }
        } while (i < employees.size());
    }

    if (loginType == "Staff") {
        int i = 0;
        do {
            if (findLoginStaff(loginName, loginPassword) == false) {
                msgBox.setText("Wrong name or password.");
                msgBox.exec();
                qDebug() << "Nespravny login";
                break;
            }
            else {
                ui.menuStaff->setEnabled(true);
                ui.treeMenu->clear();
                ui.treeOrder->clear();
                ui.LogOutButton->setEnabled(true);
                qDebug() << "Spravny login";
                break;
            }
        } while (i < staff.size());
    }

    if (loginType == "Admin") {
        int i = 0;
        do {
            if (loginName!=admin.getLoginName()) {
                if (loginPassword!=admin.getPassword()) {
                    msgBox.setText("Wrong name or password.");
                    msgBox.exec();
                    qDebug() << "Nespravny login";
                    break;
                }
            }
            else {
                ui.menuAdmin->setEnabled(true);
                ui.treeMenu->clear();
                ui.treeOrder->clear();
                ui.LogOutButton->setEnabled(true);
                qDebug() << "Spravny login";
                break;
            }
        } while (i < staff.size());
    }


}

//MenuBar

void Canteen::on_actionMenu_for_week_triggered() {

    qDebug() << "Menu for week active!";
    menuData.clear();

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"), "", tr("csv Files (*.csv);;All files (*.)"));
    
    if (fileName.isEmpty()) {
        qDebug() << "file is empty";
        return;
    }
    
    QFileInfo Finfo(fileName);

    if (Finfo.suffix() == "csv") {

        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            menuData.push_back(line);
        }

        file.close();
    }
    
    if (!menuData.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Data did load.");
        msgBox.exec();
    }
     
    ui.treeMenu->clear();

    fillMenuData();  

}

void Canteen::on_actionChangePostEmployee_triggered()
{
    
}

void Canteen::on_actionNumber_of_Order_triggered()
{
    numberoforders = new Orders(this);
    connect(numberoforders, SIGNAL(accepted()), this, SLOT(DialogAccepted()));

    QString name;
    int number;
    QString n;

    name = nMonday.getMealName();
    number = nMonday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nTuesday.getMealName();
    number = nTuesday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nWednesday.getMealName();
    number = nWednesday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nThursday.getMealName();
    number = nThursday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nFriday.getMealName();
    number = nFriday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nSaturday.getMealName();
    number = nSaturday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    name = nSunday.getMealName();
    number = nSunday.getNumber();
    n.setNum(number);
    mealsName.push_back(name);
    mealsNumber.push_back(n);

    numberoforders->setTable(mealsName, mealsNumber);
    numberoforders->exec();

}

//Employyes + Students 

void Canteen::on_showMenuButton_clicked()
{
    ui.treeMenu->clear();

    QString fileName = "Menu.csv";

    if (fileName.isEmpty()) {
        qDebug() << "file is empty";
        return;
    }

    QFileInfo Finfo(fileName);

    if (Finfo.suffix() == "csv") {

        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            menuData.push_back(line);
        }

        file.close();
    }

    if (menuData.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Data did not load.");
        msgBox.exec();
    }

    fillMenuData();
}

void Canteen::on_orderButton_clicked()
{
    QString name = ui.treeMenu->currentItem()->text(1);
    QString price = ui.treeMenu->currentItem()->text(2);
    QString studentPrice = ui.treeMenu->currentItem()->text(3);

    float discount = (price.toFloat() - studentPrice.toFloat()) / price.toFloat();

    Meal currentMeal = Meal(name, price.toFloat(), discount);

    int day = findMealDay(name);
    QMessageBox msgBox;

    if (loginType == "Student") {

        Meal existingOrder = student.getOrder(day);

        if (existingOrder.getName() == currentMeal.getName()) {
            return;
        }

        if (studentPrice.toFloat() > student.getCredit()) {
            msgBox.setText("Not enough credit.");
            msgBox.exec();
        }
        student.setOrder(day, currentMeal);
        student.setCredit(student.getCredit() - studentPrice.toFloat());
    }
    else if (loginType == "Employee") {

        Meal existingOrder = employer.getOrder(day);

        if (existingOrder.getName() == currentMeal.getName()) {
            return;
        }

        if (price.toFloat() > employer.getCredit()) {
            msgBox.setText("Not enough credit.");
            msgBox.exec();
        }
        employer.setOrder(day, currentMeal);
        employer.setCredit(employer.getCredit() - price.toFloat());
    }
}

void Canteen::on_ShowOrderButton_clicked()
{
    ui.treeOrder->clear();
    QString p;

    if (loginType == "Student") {
        for (int i = 0; i < 7; i++)
        {
            QTreeWidgetItem* parent = new QTreeWidgetItem(ui.treeOrder);
            parent->setText(0, days[i].getDayName());

            QTreeWidgetItem* childItem = new QTreeWidgetItem();
            childItem->setText(1, student.getOrder(i).getName());
            childItem->setText(2, p.setNum(student.getOrder(i).getPrice()));

            parent->addChild(childItem);
        }
        
    }
    else if (loginType == "Employee") {
        for (int i = 0; i < 7; i++)
        {
            QTreeWidgetItem* parent = new QTreeWidgetItem(ui.treeOrder);
            parent->setText(0, days[i].getDayName());

            QTreeWidgetItem* childItem = new QTreeWidgetItem();
            childItem->setText(1, employer.getOrder(i).getName());
            childItem->setText(2, p.setNum(employer.getOrder(i).getPrice()));

            parent->addChild(childItem);
        }
    }
}

void Canteen::on_cancelButton_clicked()
{
    QString name = ui.treeOrder->currentItem()->text(1);
    QString price = ui.treeOrder->currentItem()->text(2);
    QString studentPrice = ui.treeOrder->currentItem()->text(3);

    float discount = (price.toFloat() - studentPrice.toFloat()) / price.toFloat();

    Meal currentMeal = Meal(name, price.toFloat(), discount);

    int day = findMealDay(name);
    QMessageBox msgBox;

    if (loginType == "Student") {

        Meal existingOrder = student.getOrder(day);

        if (existingOrder.getName() != currentMeal.getName()) {
            return;
        }
        student.removeOrder(day);
        student.setCredit(student.getCredit() + studentPrice.toFloat());
       
    }
    else if (loginType == "Employee") {

        Meal existingOrder = employer.getOrder(day);

        if (existingOrder.getName() != currentMeal.getName()) {
            return;
        }
        employer.removeOrder(day);
        employer.setCredit(employer.getCredit() + price.toFloat());
        
    }

    on_ShowOrderButton_clicked();
}

void Canteen::on_ShowCreditButton_clicked()
{
    QMessageBox msgBox;
    QString p, text;
    
    if (loginType == "Student") {
        p.setNum(student.getCredit());
        text = QString("Current credit is: %1").arg(p);
        msgBox.setText(text);
        msgBox.exec();
        
    }
    if (loginType == "Employee") {
        p.setNum(employer.getCredit());
        text = QString("Current credit is: %1").arg(p);
        msgBox.setText(text);
        msgBox.exec();
    }
}

void Canteen::on_LogOutButton_clicked()
{
    ui.menuAdmin->setDisabled(true);
    ui.menuEmployee->setDisabled(true);
    ui.menuStaff->setDisabled(true);
    ui.menuStudent->setDisabled(true);
    ui.menuGroupBox->setDisabled(true);
    ui.ShowCreditButton->setDisabled(true);
    ui.LogOutButton->setDisabled(true);

    SignIn();
}