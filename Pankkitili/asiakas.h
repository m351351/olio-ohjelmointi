#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;


class Asiakas
{
public:
    Asiakas(string n, double lr);
    bool talletus (double summa);
    bool nosto (double nosto);
    bool luotonMaksu(double pano);
    bool luotonNosto(double nosto);
    bool tilinsiirto(double summa, Asiakas &saaja);
    void ShowSaldo();
    string getName();


private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;


};

#endif // ASIAKAS_H
