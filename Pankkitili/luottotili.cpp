#include "luottotili.h"



Luottotili::Luottotili(string o, double lr)
    :Pankkitili(o)
{
    luottoraja = lr; //konstruktorissa annettu luottoraja on tallennettu lr:ään.

}

Luottotili::~Luottotili()
{

}

bool Luottotili::withdraw(double nosto)
{
    if (nosto < 0)
    {
        cout <<"Ei voi nostaa negatiivista lukua"<<endl<<endl;
        return false;
    }

    if (saldo+nosto > luottoraja)
    {
        cout<<"saldo: "<<saldo<< " + "<<"nosto: "<<nosto<<" on isompi kuin "<<luottoraja<<endl;
        cout << "nosto ylittaa luottorajan"<<endl<<endl;
        return false;
    }



    else
    {
        cout << "nostettu summa: "<<nosto<<endl;
        cout << "nykyinen velka: "<<saldo+nosto<<endl<<endl;
        saldo+= nosto;
        return true;
    }
}

bool Luottotili::deposit(double pano)
{
    cout<<"alkuperainen velka on: "<<saldo<<endl;
    cout <<"lisattava summa on: "<<pano<<endl<<endl;

    if(pano<0)
    {
        cout << "ei voi laittaa negatiivista summaa"<< endl<<endl;
        return false;

    }

    if(saldo-pano<0)
    {
        cout<<"yritat maksaa liikaa. Voit maksaa korkeintaan: "<<saldo<<endl<<endl;
        return false;
    }


    else{
        cout << "lisatty summa: "<<pano<<endl;
        cout << "nykyinen velka: "<<saldo-pano<<endl<<endl;
        saldo = saldo-pano;
        Luottotili::getBalance();
        return true;
    }

}

