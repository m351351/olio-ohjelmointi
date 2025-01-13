#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int game(int);

//testataan tattadaa

int main()
{
    int max = 0;
    cout<<"paata vaikeusaste: anna maxnum "<<endl;
    cin>>max;
    game(max);

    return 0;
}


int game(int maxnum){
    int arvaukset = 1;
    srand(time(NULL));


    int arvaus=0;
    int satunnaisluku;
    satunnaisluku = rand() % maxnum;


    do{
        //cout<<"arvottu luku on "<<satunnaisluku<<endl; //satunnaisluvun tulostus näkyviin

        cout<<"arvauksesi? "<<endl;

        cin>>arvaus;

        cout<<"arvauksesi on " <<arvaus<<endl; //tarkistus, että arvaus tallentuu oikein
        if (arvaus < satunnaisluku){
            cout<<"luku on isompi"<<endl<<endl;

            arvaukset++;
        }
        if(arvaus>satunnaisluku){
            cout<<"luku on pienempi"<<endl<<endl;
            arvaukset++;
        }
    }

    while (arvaus != satunnaisluku);

    if (arvaus == satunnaisluku){
        cout<<"oikein arvattu"<<endl<<endl;
    }

    cout<<"arvausten maara on " <<arvaukset<<endl<<endl;
}
