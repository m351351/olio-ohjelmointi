#include <iostream>
#include "game.h"

using namespace std;

int main()
{

    int max = 0;
    cout<<"paata vaikeusaste: anna maxnum "<<endl;
    cin>>max;

    Game merinPeli(max);
    merinPeli.play();

    return 0;
}



