#ifndef BARBOTUSERMAINWINDOW_H
#define BARBOTUSERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class BarBotUserMainWindow;
}

class BarBotUserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BarBotUserMainWindow(QWidget *parent = 0);
    ~BarBotUserMainWindow();

private:
    Ui::BarBotUserMainWindow *ui;
};

#endif // BARBOTUSERMAINWINDOW_H
