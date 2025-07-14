#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    num1 = 0;
    symbol = "";
}

calculator::~calculator()
{
    delete ui;
}

void calculator::on_nine_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"9");
}


void calculator::on_clear_clicked()
{
    ui -> OutputlineEdit -> setText("");
}


void calculator::on_eight_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"8");
}


void calculator::on_seven_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"7");
}


void calculator::on_six_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"6");
}


void calculator::on_five_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"5");
}


void calculator::on_four_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"4");
}


void calculator::on_three_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"3");
}


void calculator::on_two_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"2");
}


void calculator::on_one_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"1");
}


void calculator::on_zero_clicked()
{
    QString num1 = ui -> OutputlineEdit -> text();
    ui -> OutputlineEdit -> setText(num1+"0");
}


void calculator::on_add_clicked()
{
     num1 = ui-> OutputlineEdit -> text().toDouble();
     symbol = "+";
     ui ->OutputlineEdit->setText("");
}


void calculator::on_subtract_clicked()
{
    num1 = ui-> OutputlineEdit -> text().toDouble();
    symbol = "-";
    ui ->OutputlineEdit->setText("");
}


void calculator::on_multiply_clicked()
{
    num1 = ui-> OutputlineEdit -> text().toDouble();
    symbol = "*";
    ui ->OutputlineEdit->setText("");
}


void calculator::on_divide_clicked()
{
    num1 = ui-> OutputlineEdit -> text().toDouble();
    symbol = "/";
    ui ->OutputlineEdit->setText("");
}


void calculator::on_equal_clicked()
{
    double num2 = ui ->OutputlineEdit->text().toDouble();
    double result = 0;
    if (symbol == "+"){
        result = num1+num2;
    }
    else if (symbol == "-"){
        result = num1-num2;
    }
    else if (symbol == "*"){
        result = num1*num2;
    }
    else if (symbol == "/"){
        result = num1/num2;
    }
    ui ->OutputlineEdit->setText(QString::number(result));

}

