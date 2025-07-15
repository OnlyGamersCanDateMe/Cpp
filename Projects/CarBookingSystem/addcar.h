#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class addCar;
}

class addCar : public QDialog
{
    Q_OBJECT

public:
    explicit addCar(QWidget *parent = nullptr);
    ~addCar();

private slots:
    void on_farelistwidget_currentItemChanged();

    void on_addcarbutton_clicked();

private:
    Ui::addCar *ui;
};

#endif // ADDCAR_H
