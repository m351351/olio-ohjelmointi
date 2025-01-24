#include "chef.h"

Chef::Chef() {
    cout<<"tyhja konstruktori"<<endl;
}

Chef::Chef(string name)
{
    // halutaan tallentaa name muuttuja chefNameen:
    chefName = name;
    cout << "chef konstruktori, nimi on "
         <<chefName
         <<endl;
}

Chef::~Chef()
{
    cout << "chef destruktori"
         <<endl;
}

string Chef::getChefName() const
{
    return chefName;
}

// alussa täytyy aina kertoa minkä luokan alle makeSalad tässä tapauksessa kuuluu
int Chef::makeSalad(int aines)
{
    int annoksia = 0;

    //lisätään debuggia:
    cout << "aineksia "
         << aines
         << endl;

    // yhteen salaattiin tarvitaan viisi ainesta
    // palautuksena annosten määrä

    annoksia = aines/5;

    return annoksia;

}

int Chef::makeSoup(int aines)
{
    int k_annoksia = 0;

    //lisätään debuggia:
    cout << "aineksia "
         << aines
         << endl;

    // yhteen keittoon tarvitaan kolme ainesta
    // palautuksena annosten määrä

    k_annoksia = aines/3;

    return k_annoksia;
}

