#include <QCoreApplication>
#include "chocolateboiler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ChocolateBoiler *boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    return a.exec();
}
