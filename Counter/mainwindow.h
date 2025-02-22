#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Lisaa_nappi_clicked();

    void on_Reset_nappi_clicked();

private:
    Ui::MainWindow *ui;
    // tämä ui-osoitin on tärkeä juttu
};
#endif // MAINWINDOW_H
