#include "mainmenu.h"
#include "ui_mainmenu.h"

mainmenu::mainmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainmenu)
{
    ui->setupUi(this);
    QPixmap pix("/Users/shonty/Downloads/Audi rs6.jpeg");
    ui->label->setPixmap(pix);
}

mainmenu::~mainmenu()
{
    delete ui;
}

void mainmenu::on_addcarbutton_clicked()
{
    addCarUi.show();
}


void mainmenu::on_bookcarbutton_clicked()
{
    bookCarUi.show();
}


void mainmenu::on_exitbutton_clicked()
{
    QApplication::exit();
}

