#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout<<"tyhja italian konrtruktori"<<endl;
}

ItalianChef::ItalianChef(string name)
    :Chef(name) //nimen välitys aliluokasta yliluokkaan
{
    chefName = name;
    cout << "ITALIAN chef konstruktori, nimi on "
         <<chefName
         <<endl;

}

ItalianChef::~ItalianChef()
{
    cout<<"italianChef destruktori"
         <<endl;
}

bool ItalianChef::askSecret(string pw, int w, int f)
{
    if(pw == password)
    {
        cout << "salasana oikein!"
             <<endl;
        salasanaOikein= true;
    }
    else
    {
        cout << "salasana vaarin!"
             <<endl;
    }

    if (salasanaOikein){
        flour = f;
        water = w;
        makePizza();

        salasanaOikein = false;
    }
}

int ItalianChef::makePizza()
{
    int pizzoja = 0;
    cout<<"olen makePizzassa"<<endl;
    cout << "jauhoja on: " << flour << endl;
    cout << "vetta on: " << water << endl;
    // 5 vettä ja 5 jauhoja yhteen pizzaan

    cout << min(water/5, flour/5)<<endl;
    return pizzoja;

    cout<< "valmiita pizzoja: "
         <<pizzoja
         <<endl;


}
