#include "mainmenu.h"
#include "ui_mainmenu.h"

mainmenu::mainmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainmenu)
{
    ui->setupUi(this);
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

