#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef c_olio("Gordon"); // tähän pitää laittaa kokin nimi koska .h:ssa on suluissa string

    int annoksia = c_olio.makeSalad(17);
    cout<< "valmiita salaattiannoksia: "
         <<annoksia
         <<endl;


    int k_annoksia = c_olio.makeSoup(215);
    cout<< "valmiita keittoannoksia: "
         <<k_annoksia
         <<endl;


    ItalianChef i_olio("Mario");
   i_olio.askSecret("pizza",10, 50);



    return 0;
}
