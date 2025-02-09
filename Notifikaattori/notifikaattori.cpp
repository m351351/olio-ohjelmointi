#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori() {}




void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    // a->next =b

    uusiSeur->next = seuraajat;
    //cout<<"lisataan seuraajat "<<endl;


    // alku = a
    seuraajat = uusiSeur;
    //  cout<<"seuraajaksi maaratty uusi(next) seuraaja"<<endl;
}






void Notifikaattori::poista(Seuraaja *poistaSeur)
{
    //alku = a
    // a->next = b
    // a->next = c
    // b:n poisto: a -> next = c

    // silmukka käy läpi listaa

    Seuraaja *alku = seuraajat;
    // jos *alku = d
    // alku = alku ->next
    // poistu funktiosta: return

    while(alku != nullptr)
    {
        cout<<endl;
        if(alku->next == poistaSeur){
            cout<<alku->getNimi()<<(", olet heikoin lenkki. hyvasti.")<<endl;
            //testaa onko alku->next=d
            alku->next = poistaSeur->next;
        }
        //      jos on: alku->next =pois->next
        //      poistu funktiosta return
        //      jos ei ole: mene seuraavaan

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
