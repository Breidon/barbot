#include "barbotusermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BarBotUserMainWindow w;
    w.show();

    return a.exec();
}
