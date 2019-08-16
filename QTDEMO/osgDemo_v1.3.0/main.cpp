#include <QApplication>

#include "OsgWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    OsgWidget w;
    w.resize(800, 640);
    w.show();

    return a.exec();
}
