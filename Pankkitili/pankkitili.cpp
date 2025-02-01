#include "pankkitili.h"
#include "asiakas.h"



Pankkitili::~Pankkitili()
{
    // cout << "destruktori"<<endl<<endl;
}

Pankkitili::Pankkitili(string)
{
    // cout<<"konstruktori nimella"<<endl<<endl;
}

bool Pankkitili::withdraw(double summa)
{
    cout<<"alkuperainen saldo on: "<<saldo<<endl;
    cout <<"nostettava summa on: "<<summa<<endl<<endl;
    // 1. negatiivisia nostaja/talletuksia ei voi tehdä
    // jos summa on pienempi kuin 0 --> palautetaan false
    if (summa<0)
    {
        cout << "Et voi tallettaa negatiivista summaa"<<endl<<endl;
        return false;
    }

    //2. pankkitilin saldo ei saa mennä negatiiviseksi. Ei saa nostaa enempää kuin on saldoa.
    // jos summa on isompi kuin saldo --> palautetaan false

    if (summa > saldo)
    {
        cout <<"Ei voi nostaa enempaa kuin saldoa on"<<endl<<endl;
        return false;
    }


    // 3.nämä jäsenfunktiot palauttavat true/false sen mukaan onnistuiko talletus/nosto
    //päivitetään saldo: saldosta vähennetään nostettu summa --> palautetaan true
    else
    {
        cout << "nostettu summa: "<<summa<<endl;
        cout << "nykyinen saldo: "<<saldo-summa<<endl<<endl;
        saldo-=summa;
        return true;
    }


}

double Pankkitili::getBalance() const
{
    cout<<saldo<<endl;
    return saldo;
}

bool Pankkitili::deposit(double pano)
{

    cout<<"alkuperainen saldo on: "<<saldo<<endl;
    cout <<"lisattava summa on: "<<pano<<endl<<endl;

    if(pano<0)
    {
        cout << "et voi laittaa negatiivista summaa"<< endl<<endl;

    }
    else{
        cout << "lisatty summa: "<<pano<<endl;
        cout << "nykyinen saldo: "<<saldo+pano<<endl<<endl;
        saldo+=pano;
        return true;
    }



}
