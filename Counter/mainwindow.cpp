#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Lisaa_nappi_clicked()
{
    // 1. lue numero elementistä
    QString str = ui ->NumeroNaytto->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    // 2. kasvata numeroa yhdellä
    num++;

    // 3. aseta numero takaisin elementtiin
    qDebug() << "Kasvatettu numero = " <<num;
    QString uusiStr = QString::number(num);
    ui->NumeroNaytto->setText(uusiStr);

}


void MainWindow::on_Reset_nappi_clicked()
{
   /* QString str = ui ->NumeroNaytto->text();
    int num = str.toInt();

    // 1. aseta nolla elementtiin
    num = 0;
    qDebug() << "Nollataan!! "<<num;
    QString uusiStr = QString::number(num);*/

    ui->NumeroNaytto->setText("0");


}

