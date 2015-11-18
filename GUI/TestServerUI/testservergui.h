#ifndef TESTSERVERGUI_H
#define TESTSERVERGUI_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include "socket.h"

namespace Ui {
class TestServerGUI;
}

class TestServerGUI : public QMainWindow
{
    Q_OBJECT

public:
    int getSocket();
    explicit TestServerGUI(QWidget *parent = 0);
    ~TestServerGUI();

private slots:
    void on_tbServerConnect_clicked();

private:
    Ui::TestServerGUI *ui;
    int socket;
};

#endif // TESTSERVERGUI_H
