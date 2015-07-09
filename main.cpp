#include "schieb.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    schieb w;
    w.show();

    return a.exec();
}
