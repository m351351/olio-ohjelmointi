#include "asiakas.h"



Asiakas::Asiakas(string asiakkaanNimi, double lr)
    :kayttotili(asiakkaanNimi), luottotili(asiakkaanNimi, lr) //näin alustettu asiakasluokka ja jäsenfunktiot yhdellä konstruktorilla

{
    nimi = asiakkaanNimi;
    cout<<"Pankkitili luotu asiakkaalle "<<asiakkaanNimi<<endl;
    cout<<"Luottotili luotu asiakkaalle "<<asiakkaanNimi<<endl;
    cout<<"Luottoraja on: "<<lr<<endl;
    cout<<"Nykyinen pankkitilin saldo on: ";
    ShowSaldo();
    cout<<endl;
    cout<<endl;
}

bool Asiakas::talletus(double summa)
{
    cout<<"Kasitellaan pankkitapahtumaa kayttajalta: ";
    cout<<nimi<<endl;
    bool ret = kayttotili.deposit(summa);
    if(ret == false)
    {
        cout << "eipa onnistunu pano" <<endl;
    }
    else
    {
        cout<<"Asiakkaan "<<nimi;
        cout<<" talletus onnistui"<<endl;
        cout << "Tilille laitettu: "<< summa << endl;
        cout<<"Nykyinen saldo: ";
        ShowSaldo();
        cout<<endl;
        return ret;
    }

    // return kayttotili.deposit(summa); <-- tämä on toinen vaihtoehto
}

bool Asiakas::nosto(double nosto)
{
    cout<<"Kasitellaan pankkitapahtumaa kayttajalta: ";
    cout<<nimi<<endl;
    bool ret = kayttotili.withdraw(nosto);
    if(ret == false)
    {
        cout << "eipa onnistunu nosto" <<endl;
    }
    else
    {
        cout<<"Asiakkaan "<<nimi;
        cout<<" nosto onnistui"<<endl;
        cout << "Tililta otettu: "<< nosto << endl;
        cout<<"Nykyinen saldo: ";
        ShowSaldo();
        return ret;
    }
}

bool Asiakas::luotonMaksu(double pano)
{
    cout<<"Kasitellaan pankkitapahtumaa kayttajalta: ";
    cout<<nimi<<endl;
    bool ret = luottotili.deposit(pano);
    if(ret == false)
    {
        cout << "eipa onnistunu luotonmaksu" <<endl;
    }
    else
    {
        cout << "luotonmaksu onnistui"<<endl;
        return ret;

    }
}


bool Asiakas::luotonNosto(double nosto)
{
    cout<<"Kasitellaan pankkitapahtumaa kayttajalta: ";
    cout<<nimi<<endl;
    bool ret = luottotili.withdraw(nosto);
    if(ret == false)
    {
        cout << "eipa onnistunu luotonnosto" <<endl;
    }

    else
    {
        cout<<"luotonnosto onnistui"<<endl;
        return ret;
    }
}

bool Asiakas::tilinsiirto(double summa, Asiakas &saaja)
{
    cout<<"Kasitellaan pankkitapahtumaa kayttajalta: ";
    cout<<nimi<<endl;

    // 1. nosta omalta tililtä

    bool onnistuiko = kayttotili.withdraw(summa);
    if(onnistuiko == false)
    {
        cout<<"na-aa. Ei onnistu ei.. Ei ole mista ottaa"<<endl;
    }

    //jos onnistui true --> talletus saajan tilille

    // 2. talleta saajan tilille

    else
    {
        cout<<"kayttaja "<<nimi<< " siirtaa rahaa "<<endl;

        saaja.talletus(summa);
    }

}

void Asiakas::ShowSaldo()
{
    cout<<"Saldotietokysely kayttajalta: ";
    cout<<nimi<<endl;
    cout<<"Kayttotilin saldo on: ";
    kayttotili.getBalance();
    cout<<endl;
}

string Asiakas::getName()
{
    return nimi;
}









