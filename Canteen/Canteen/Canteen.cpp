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


void Canteen::setAdmin(QString n, QString p,float d)
{
    admin.setLoginName(n);
    admin.setPassword(p);
    admin.setDiscount(d);
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
}

bool Canteen::findLoginStudent(QString name, QString pass)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getLoginName() == name && students[i].getPassword() == pass) {
            student.setLoginName(name);
            student.setPassword(pass);
            student.setCredit(students[i].getCredit());
            student.setSubject(students[i].getSubject());

            return true;
        }
    }
    return false;
}

bool Canteen::findLoginEmployee(QString name, QString pass)
{
   
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].getLoginName() == name && employees[i].getPassword() == pass) {
            employer.setLoginName(name);
            employer.setPassword(pass);
            employer.setCredit(employees[i].getCredit());
            employer.setPost(employees[i].getPost());
            return true;
        }
    }
    return false;
}

bool Canteen::findLoginStaff(QString name, QString pass)
{
   
    for (int i = 0; i < staff.size(); i++)
    {
        if (staff[i].getLoginName() == name && staff[i].getPassword() == pass) {
            member.setLoginName(name);
            member.setPassword(pass);
            member.setPost(staff[i].getPost());
            return true;
        }
    }
    return false;
}

void Canteen::fillMenuData() {

    QVector<QString> dayNames = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    QString p, d;

    for (int i = 0; i < 7; i++)
    {
        QStringList list1 = menuData[i * 3 + 0].split(QLatin1Char(','));
        QStringList list2 = menuData[i * 3 + 1].split(QLatin1Char(','));
        QStringList list3 = menuData[i * 3 + 2].split(QLatin1Char(','));
        days[i].setMeal(list1.at(0), list1.at(1).toFloat(), discount, 0);
        days[i].setMeal(list2.at(0), list2.at(1).toFloat(), discount, 1);
        days[i].setMeal(list3.at(0), list3.at(1).toFloat(), discount, 2);
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
            childItem->setText(3, d.setNum(days[i].getMealPrice(j) - days[i].getMealPrice(j) * discount));

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

void Canteen::usersOrdersOutput()
{
    QString day = date.currentDate().toString("dd.MM.yyyy");

    QString fileName = "UsersOrders.csv";
    
    QFile orders(fileName);

    //orders.setPermissions(QFileDevice::WriteUser);

    if (orders.open(QIODevice::WriteOnly)) {
        QTextStream out(&orders);

        out << day << "\n";

        if (loginType == "Student") {
            out << student.getLoginName(); 
            for (int i = 0; i < 7; i++)
            {
                if (student.getOrder(i).getName() != "") {
                    out << "," << student.getOrder(i).getName();
                }

            }
            out << "\n";

        }else if (loginType == "Employee") {
            out << employer.getLoginName();
            for (int i = 0; i < 7; i++)
            {
                if (employer.getOrder(i).getName() != "") {
                    out << "," << employer.getOrder(i).getName();
                }

            }
            out << "\n";
        }

        orders.close();

        qDebug() << "users orders are in file.";
    }
    else {
        qDebug() << "file did not open.";
        qDebug() << orders.errorString();
        return;
    }
        

    
   
}

void Canteen::numerOfOrdersOutPut()
{
    QString day = date.currentDate().toString("dd.MM.yyyy");
    QString n;

    QString fileName = "NumberOfOrders.csv";

    QFile numberOrders(fileName);

    //orders.setPermissions(QFileDevice::WriteUser);

    if (numberOrders.open(QIODevice::WriteOnly)) {
        QTextStream out(&numberOrders);

        out << day << "\n";
        for (int i = 0; i < numberOfOrders.size(); i++) 
        {
            out << meals[i] << "," << n.setNum(numberOfOrders.value(meals[i])) << "\n";
        }
        numberOrders.close();

        qDebug() << "numbers of orders are in file.";
    }
    else {
        qDebug() << "file did not open.";
        qDebug() << numberOrders.errorString();
        return;
    }
}

void Canteen::updateEmployeesData()
{
    QString fileName = "Employees.csv";

    QFile employeesFile(fileName);

    //orders.setPermissions(QFileDevice::WriteUser);

    employeesFile.remove();

    if (employeesFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&employeesFile);

        for (int i = 0; i < employees.size(); i++)
        {
            out << employees[i].getLoginName() << "," << employees[i].getPassword() << "," << employees[i].getPost() << "," << employees[i].getCredit() << "\n";
        }

        employeesFile.close();

        qDebug() << "employees data updated.";
    }
    else {
        qDebug() << "file did not open.";
        qDebug() << employeesFile.errorString();
        return;
    }

}

void Canteen::updateStudentData()
{
    QString fileName = "Students.csv";

    QFile studentsFile(fileName);

    //orders.setPermissions(QFileDevice::WriteUser);

    studentsFile.remove();

    if (studentsFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&studentsFile);

        for (int i = 0; i < students.size(); i++)
        {
            out << students[i].getLoginName() << "," << students[i].getPassword() << "," << students[i].getSubject() << "," << students[i].getCredit() << "\n";
        }

        studentsFile.close();

        qDebug() << "students data updated.";
    }
    else {
        qDebug() << "file did not open.";
        qDebug() << studentsFile.errorString();
        return;
    }
}

void Canteen::updateStaffData()
{
    QString fileName = "Staff.csv";

    QFile staffFile(fileName);

    //orders.setPermissions(QFileDevice::WriteUser);

    staffFile.remove();

    if (staffFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&staffFile);

        for (int i = 0; i < students.size(); i++)
        {
            out << staff[i].getLoginName() << "," << staff[i].getPassword() << "," << staff[i].getPost() << "\n";
        }

        staffFile.close();

        qDebug() << "staff data updated.";
    }
    else {
        qDebug() << "file did not open.";
        qDebug() << staffFile.errorString();
        return;
    }
}

//Login

void Canteen::SignIn()
{
    login = new LoginDialog(this);
    connect(login, SIGNAL(accepted()), this, SLOT(DialogAccepted()));
    login->exec();
}

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
                SignIn();
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
                SignIn();
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
                SignIn();
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
                    SignIn();
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

void Canteen::DialogOrdersAccepted()
{
    for (int i = 0; i < 21; i++)
    {
        int number = 0;

        if (meals[i] == student.getOrder(i / 3).getName()) {
            number++;
        }
        else if (meals[i] == employer.getOrder(i / 3).getName()) {
            number++;
        }
        numberOfOrders.insert(meals[i], number);
    }
    ordersTable->setTable(numberOfOrders.keys(), numberOfOrders.values());
}

void Canteen::DialogChangeStatusAccepted() 
{
    QString newStatus = statusChange->getNewStatus();

    if (loginType == "Student") {
        student.setSubject(newStatus);
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getLoginName() == student.getLoginName() && students[i].getPassword() == student.getPassword()) {
                students[i].setSubject(newStatus);
            }
        }
        updateStudentData();
    }
    else if (loginType == "Employee") {
        employer.setPost(newStatus);
        for (int i = 0; i < employees.size(); i++)
        {
            if (employees[i].getLoginName() == employer.getLoginName() && employees[i].getPassword() == employer.getPassword()) {

                employees[i].setPost(newStatus);
            }
        }
        updateEmployeesData();
    }
    else if (loginType == "Staff") {
        member.setPost(newStatus);
        for (int i = 0; i < staff.size(); i++)
        {
            if (staff[i].getLoginName() == member.getLoginName() && staff[i].getPassword() == member.getPassword()) {

                staff[i].setPost(newStatus);
            }
        }
        updateStaffData();
    }
}

void Canteen::DialogAdmiAccepted()
{
    QString currentAction = adminField->getActionUser();

    QString currentUserType = adminField->getloginType();

    QString currentLoginName = adminField->getLoginName();
    QString currentPassword = adminField->getPassword();

    QString newLoginName = adminField->getNewLoginName();
    QString newPassword = adminField->getNewPassword();
    QString newCredit = adminField->getNewCredit();

    QString newDiscount = adminField->getNewDiscount();
    discount = newDiscount.toFloat();

    if (currentAction == "Edit User") {
        if (currentUserType == "Student") {
            int i = 0;
            do {
                if (findLoginStudent(currentLoginName, currentPassword) == true) {
                    students[i].setLoginName(newLoginName);
                    students[i].setPassword(newPassword);
                    students[i].setCredit(newCredit.toFloat());
                }
                i++;
            } while (i < students.size());
        }
        else if (currentUserType == "Employee") {
            int i = 0;
            do {
                if (findLoginStudent(currentLoginName, currentPassword) == true) {
                    employees[i].setLoginName(newLoginName);
                    employees[i].setPassword(newPassword);
                    employees[i].setCredit(newCredit.toFloat());
                }
                i++;
            } while (i < employees.size());
        }
    }
    else if (currentAction == "Delete User") {
        if (currentUserType == "Student") {
            int i = 0;
            do {
                if (findLoginStudent(currentLoginName, currentPassword)) {
                    students.removeAt(i);
                }
                i++;
            } while (i < students.size());
        }
        else if (currentUserType == "Employee") {
            int i = 0;
            do {
                if (findLoginStudent(currentLoginName, currentPassword)) {
                    employees.removeAt(i);
                }
                i++;
            } while (i < employees.size());
        }
    }
    else if (currentAction == "New User") {
        if (currentUserType == "Student") {
            Student s = Student(newLoginName, newPassword, "", newCredit.toFloat());
            students.push_back(s);
        }
        else if (currentUserType == "Employee") {
            Employee e = Employee(newLoginName, newPassword, "", newCredit.toFloat());
            employees.push_back(e);
        }
    }

    updateEmployeesData();
    updateStudentData();
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

void Canteen::on_actionChange_Login_triggered()
{
    adminField = new AdminDialog(this);
    connect(adminField, SIGNAL(accepted()), this, SLOT(DialogAdmiAccepted()));
    adminField->exec();
}

void Canteen::on_actionChangePostEmployee_triggered()
{
    statusChange = new ChangeStatus(this);
    connect(statusChange, SIGNAL(accepted()), this, SLOT(DialogChangeStatusAccepted()));
    statusChange->exec();

}

void Canteen::on_actionChange_PositionStaff_triggered()
{
    statusChange = new ChangeStatus(this);
    connect(statusChange, SIGNAL(accepted()), this, SLOT(DialogChangeStatusAccepted()));
    statusChange->exec();
}

void Canteen::on_actionChange_Subject_triggered()
{
    statusChange = new ChangeStatus(this);
    connect(statusChange, SIGNAL(accepted()), this, SLOT(DialogChangeStatusAccepted()));
    statusChange->exec();
}

void Canteen::on_actionNumber_of_Order_triggered()
{
    ordersTable = new Orders(this);
    connect(ordersTable, SIGNAL(accepted()), this, SLOT(DialogOrdersAccepted()));
    ordersTable->exec();
    numerOfOrdersOutPut();
}

//Employyes + Students 

void Canteen::on_showMenuButton_clicked()
{
    ui.treeMenu->clear();

    QString fileName = "Menu.csv";

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
            childItem->setText(2, p.setNum(student.getOrder(i).getPrice()*discount));
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
    usersOrdersOutput();
   
    ui.menuAdmin->setDisabled(true);
    ui.menuEmployee->setDisabled(true);
    ui.menuStaff->setDisabled(true);
    ui.menuStudent->setDisabled(true);
    ui.menuGroupBox->setDisabled(true);
    ui.ShowCreditButton->setDisabled(true);
    ui.LogOutButton->setDisabled(true);

    SignIn();

}
