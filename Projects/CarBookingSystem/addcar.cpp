#include "addcar.h"
#include "ui_addcar.h"
#include "QFile"
#include"QTextStream"
#include "QDebug"

addCar::addCar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addCar)
{
    ui->setupUi(this);
    QPixmap pix("/Users/shonty/Downloads/Audi rs6.jpeg");
    ui->label->setPixmap(pix);
    ui-> cartypelistwidget->addItem("Mini");
    ui-> cartypelistwidget->addItem("Sedan");
    ui-> cartypelistwidget->addItem("SUV");
    ui-> cartypelistwidget->addItem("XUV");
    ui-> cartypelistwidget->addItem("Premium");

}

addCar::~addCar()
{
    delete ui;
}

void addCar::on_addcarbutton_clicked()
{
    QVector<QString> cardata;
    cardata.append(ui->carnolineedit->text());
    cardata.append(ui->brandlineedit->text());
    cardata.append(ui->farelineedit->text());

    QListWidgetItem *selectedCarType = ui->cartypelistwidget->currentItem();
    cardata.append(selectedCarType->text());

    QFile file("cardata.txt");

    if(file.open(QIODevice::Append| QIODevice::Text)){
        QTextStream stream(&file);

        for(int i=0;i<cardata.size();i++){
                stream << cardata[i] << "";
            }
        stream << "\n";

    }
    file.close();

    qDebug() << "Data written into file successfully";
}
void addCar::on_farelistwidget_currentItemChanged()
{
    // Empty implementation — does nothing
}

void addCar::on_exitbutton_clicked()
{
    QApplication::exit();
}

