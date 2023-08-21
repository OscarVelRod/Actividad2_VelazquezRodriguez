#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
class Neurona{
private:
    int id;
    float voltaje;
    int pos_x,
        pos_y,
        red,
        blue,
        green;

public:
    Neurona():
        id(1),
        voltaje(122),
        pos_x(100),
        pos_y(100),
        red(1),
        blue(1),
        green(1){};

    void editar(){

    }

    void print()const{
        std::cout<<"Neurona: "<<id<<std::endl;
        std::cout<<"Voltaje: "<<voltaje<<std::endl;
        std::cout<<"Posicion en X: "<<pos_x<<std::endl;
        std::cout<<"Posicion en Y: "<<pos_y<<std::endl;
        std::cout<<"RED: "<<red<<std::endl;
        std::cout<<"BLUE "<<blue<<std::endl;
        std::cout<<"Green: "<<green<<std::endl;
    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Presiona_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
