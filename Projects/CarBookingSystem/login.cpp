#include "login.h"
#include "ui_login.h"
#include "QDebug"
#include"QMessageBox"
#include"QPixmap"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix("/Users/shonty/Downloads/Audi rs6.jpeg");
    ui->label->setPixmap(pix);
}

login::~login()
{
    delete ui;
}

void login::on_exitbutton_clicked()
{
    QApplication::exit();
}


void login::on_loginbutton_clicked()
{
    QString userid = ui->useridlineedit->text();
    QString password = ui->passwordlineedit->text();

    if(userid == "admin"){
        if(password == "admin123"){
            qDebug() << "Login Successfull";
            mainmenuUi.show();
            login::close();
        }
        else{
            QMessageBox::information(0,"Authentication", "Incorrect Password");
        }
    }
    else{
        QMessageBox::information(0,"Login Failed", "Incorrect User ID");
        }
}


