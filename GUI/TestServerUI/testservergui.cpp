#include "testservergui.h"
#include "ui_testservergui.h"

TestServerGUI::TestServerGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestServerGUI)
{
    ui->setupUi(this);
}

TestServerGUI::~TestServerGUI()
{
    delete ui;
}

void TestServerGUI::on_tbServerConnect_clicked()
{
    if(socket > 0)
    {
        int port = 1234;
        socket = CreateServerSocket(port);
        QMessageBox::warning(this,"Port", QString("Socketnumber is %1").arg(socket));
    }
    else
    {
        QMessageBox::warning(this,"Port", QString("Port is already opened!"));
    }
}

int TestServerGUI::getSocket()
{
    return socket;
}
