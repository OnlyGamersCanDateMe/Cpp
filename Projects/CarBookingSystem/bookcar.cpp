#include "bookcar.h"
#include "ui_bookcar.h"
#include"QFile"
#include"QTextStream"
#include"QDebug"
#include"QMessageBox"

QVector<QString> getAlltheCarDetails();

bookCar::bookCar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookCar)
{
    ui->setupUi(this);
    QPixmap pix("/Users/shonty/Downloads/Audi rs6.jpeg");
    ui->label->setPixmap(pix);

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
    QVector<QString> bookCarDetails;
    bookCarDetails.append(ui->namelineedit->text());
    bookCarDetails.append(ui->agelineedit->text());
    bookCarDetails.append(ui->pickuplineedit->text());
    bookCarDetails.append(ui->destinationlineedit->text());

    bool male = ui->maleradiobutton->isChecked();
    bool female = ui->femaleradiobutton->isChecked();
    if(male){
        bookCarDetails.append("male");

    }
    else{
        bookCarDetails.append("female");
    }

    QListWidgetItem *selectedCar = ui->selectcarlistwidget->currentItem();
    QString selectedCarDetails= selectedCar -> text();

    bookCarDetails.append(selectedCarDetails);

    QFile file("BookCarData.txt");

    if(file.open(QIODevice::Append| QIODevice::Text)){
        QTextStream stream(&file);

        for(int i=0;i<bookCarDetails.size();i++){
            stream << bookCarDetails[i] << "";
        }
        stream << "\n";

    }
    file.close();


    QModelIndex currentIndex = ui->selectcarlistwidget -> currentIndex();
    int currentRow = currentIndex.row();

    QVector<QString> allcarData = getAlltheCarDetails();
    allcarData.remove(currentRow);

    QFile file2("CarData.txt");

    if(file2.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file2);

        for(int i=0;i<allcarData.size();i++){
            stream << allcarData[i] << "\n";
        }
        stream << "\n";

    }
    file2.close();
    QMessageBox::information(0,"Booking Status","Booking Successful");

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


void bookCar::on_exitbutton_clicked()
{
    QApplication::exit();
}

