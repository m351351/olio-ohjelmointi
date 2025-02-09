#include "seuraaja.h"



Seuraaja::Seuraaja(string seuraajanNimi)
{
    nimi = seuraajanNimi;
}



string Seuraaja::getNimi()
{
   // cout<<nimi<<endl;
    return nimi;

}

void Seuraaja::paivitys(string viesti)
{
    cout<<viesti<<nimi<<"lle: "<<endl;
    //tulosta konsolille saatu viesti
}
