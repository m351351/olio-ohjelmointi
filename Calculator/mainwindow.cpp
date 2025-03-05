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

void MainWindow::on_plussaNappi_clicked()
{
    if (tila==3){

        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1 + num2;

        qDebug() << "Plussaus: "<< num1<< "+"<<num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);
        qDebug()<<"laskun jalkeen tila...";
        tila =1;
    }

    else {
        qDebug()<<"ei syotetty kaikkia numeroita";
    }
}


void MainWindow::on_miinus_clicked()
{
    if (tila==3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1 - num2;

        qDebug() << "Miinustelu: "<< num1<< "-"<<num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);

        tila =1;
    }

    else {
        qDebug()<<"ei syotetty kaikkia numeroita";
    }
}


void MainWindow::on_kerto_clicked()
{
    if (tila==3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1 * num2;

        qDebug() << "Kertoillaan: "<< num1<< "*"<<num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);

        tila =1;
    }

    else {
        qDebug()<<"ei syotetty kaikkia numeroita";
    }

}


void MainWindow::on_jako_clicked()
{
    if (tila==3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1 / num2;

        qDebug() << "Jaellaan: "<< num1<< "/"<<num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);

        tila =1;
    }

    else {
        qDebug()<<"ei syotetty kaikkia numeroita";
    }

}


void MainWindow::on_N1_clicked()
{
    // 1. lue numero elementistä
    QString str = ui ->N1->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);



}


void MainWindow::on_N2_clicked()
{
    QString str = ui ->N2->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);

}




void MainWindow::on_N3_clicked()
{
    QString str = ui ->N3->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);

}


void MainWindow::on_N4_clicked()
{
    QString str = ui ->N4->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui ->N5->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui ->N6->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui ->N7->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui ->N8->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui ->N9->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui ->N0->text();
    int num = str.toInt(); // <--muutetaan string intiksi
    qDebug() << "Numero = " <<num;
    numberClickHandler(num);
}

void MainWindow::numberClickHandler(int num)
{
    qDebug()<<"valittu numero on: "<<num;

    QString uusiStr = QString::number(num);

    if (tila ==1)
    {
        //laita num -> num1
        qDebug()<<"TILA 1";
        ui->num1->setText(uusiStr);

    }

    else if (tila ==2)
    {
        //laita num -> num2
        qDebug()<<"TILA 2";
        ui->num2->setText(uusiStr);
    }

}


void MainWindow::on_ENTER_clicked()
{


    if(tila>3){
        tila =3;
        qDebug()<<"TILA 3";

    }
    else{
        tila++;

    }

    qDebug()<<"siirrytaan seuraavaan tilaan...";
}


void MainWindow::on_CLEAR_clicked()
{
    if(nollaus ==0 && tila ==3){
        ui->num1->setText("hohhohhoo");
        ui->num2->setText("hahhahhaa");
        ui->result->setText("hihhihhii");
        nollaus++;
    }
    else{
        ui->num1->setText("0");
        ui->num2->setText("0");
        ui->result->setText("0");
        nollaus=0;
    }
}

