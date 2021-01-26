#include "Canteen.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Canteen w;
    w.show();
    return a.exec();
}
