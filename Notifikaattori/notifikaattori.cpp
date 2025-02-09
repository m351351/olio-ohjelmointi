#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori() {}




void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    // a->next =b

    uusiSeur->next = seuraajat;


    // alku = a
    seuraajat = uusiSeur;
}






void Notifikaattori::poista(Seuraaja *poistaSeur)
{


    Seuraaja *alku = seuraajat;


    while(alku != nullptr)
    {
        cout<<endl;
        cout<<"kaydaan listaa lapi"<<endl;
        if(alku->next == poistaSeur){
            cout<<"poistellaan: ";
            cout<<alku->next->getNimi()<<(", olet heikoin lenkki. hyvasti.")<<endl;
            alku->next = poistaSeur->next;
        //return;
        }

        alku = alku->next;


    }
}






void Notifikaattori::tulosta()
{
    cout<<endl;
    cout<<"seuraajat: "<<endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
        cout
            //<<"listassa nyt: "
            <<alku->getNimi()<<endl;

        alku = alku->next;

    }
}




void Notifikaattori::postita(string viesti)
{
    cout<<endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
        alku->paivitys(viesti);
        alku = alku->next;

    }
}
