#include "testservergui.h"
#include <QApplication>

int clntSock;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestServerGUI w;
    w.show();

    //

    return a.exec();
}
