#include "barbotusermainwindow.h"
#include "ui_barbotusermainwindow.h"

BarBotUserMainWindow::BarBotUserMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BarBotUserMainWindow)
{
    ui->setupUi(this);
}

BarBotUserMainWindow::~BarBotUserMainWindow()
{
    delete ui;
}
