#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_nine_clicked();

    void on_clear_clicked();

    void on_eight_clicked();

    void on_seven_clicked();

    void on_six_clicked();

    void on_five_clicked();

    void on_four_clicked();

    void on_three_clicked();

    void on_two_clicked();

    void on_one_clicked();

    void on_zero_clicked();

    void on_add_clicked();

    void on_subtract_clicked();

    void on_multiply_clicked();

    void on_divide_clicked();

    void on_equal_clicked();

private:
    Ui::calculator *ui;
    double num1;
    QString symbol;
};
#endif // CALCULATOR_H
