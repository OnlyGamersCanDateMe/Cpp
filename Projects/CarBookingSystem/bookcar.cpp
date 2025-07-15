#include "bookcar.h"
#include "ui_bookcar.h"
#include"QFile"
#include"QTextStream"
#include"QDebug"

QVector<QString> getAlltheCarDetails();

bookCar::bookCar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookCar)
{
    ui->setupUi(this);
    QVector<QString> carData = getAlltheCarDetails();

    for (int i=0; i<carData.size(); i++){

        ui->selectcarlistwidget->addItem(carData[i]);
    }
}

bookCar::~bookCar()
{
    delete ui;
}

void bookCar::on_bookcarbutton_clicked()
{

}

QVector<QString> getAlltheCarDetails(){

    QVector<QString> getData;

    QFile file("carData.txt");

    if(file.open(QIODevice:: ReadOnly | QIODevice:: Text)){

    QTextStream in(&file);

    while(!in.atEnd()){
        QString line = in.readLine();
        getData.append(line);
        qDebug() <<line;
    }


    }
    file.close();
    return getData;
}

