#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<mainmenu.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_exitbutton_clicked();

    void on_loginbutton_clicked();

private:
    Ui::login *ui;
    mainmenu mainmenuUi;
};
#endif // LOGIN_H
