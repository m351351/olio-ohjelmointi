#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *a = new Seuraaja("Meri aa");
    Seuraaja *b = new Seuraaja("Meri bee");
    Seuraaja *c = new Seuraaja("Meri cee");
    Seuraaja *d = new Seuraaja("Meri dee");


    Notifikaattori *n = new Notifikaattori();

    n->tulosta();
    n->lisaa(a);
    n->lisaa(b);
    n->lisaa(c);
    n->lisaa(d);
   n->tulosta();
    n->poista(b);
    n->poista(c);
    n->postita("tassa on viesti ");
    n->postita("plup ");
    n->tulosta();





    /* cout<<"loru illan vierahille:"<<endl<<endl;
    a->getNimi();
    b->getNimi();
    a->paivitys("oijoi");
    b->paivitys("ja joi voivoi");
    c->getNimi();
    c->paivitys("voisi viinii vilkuillakaan");
    d->getNimi();
    d->paivitys("tukkaraja tukalana voivottaa");
    cout<<endl;
    */

    /*
    a->next = b;
    b->next = c;
    c->next = d;
    */



    /*
    Seuraaja *alku = a;
    while(alku != nullptr)
    {
        cout<<"listassa nyt: "<<alku->getNimi()<<endl;
        alku->paivitys("lammin laikkyy lasissa, lempeasti kurkkua kutittelee");
        alku = alku->next;

        if (alku != nullptr)
        {
            cout<<"listassa seuraavana: "<<alku->getNimi()<<endl;
        }
        else
        {
            cout<<endl<<"viini loppui ja vieraat lahti"<<endl;
        }
    }

    cout<<endl;*/







    delete a;
    delete b;
    delete c;
    delete d;
    delete n;

    return 0;
}
