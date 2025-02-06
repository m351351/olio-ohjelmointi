#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    /*Pankkitili pa("Gordon");
    pa.getBalance();
    pa.withdraw(50);
    pa.deposit(300);
    pa.withdraw(50);
    pa.getBalance();*/

    /* Luottotili tiptap("o", 1000);
   tiptap.withdraw(10);
    tiptap.withdraw(100);
    tiptap.deposit(3000);
    Luottotili tiptap("o", 1000);
    tiptap.withdraw(100);
    tiptap.getBalance();*/

    Asiakas A("MERI", 1000);
    Asiakas B("KURJA KOYHA", 1000);

   cout<<"nostetaan luottoa..."<<endl;

    A.luotonNosto(900);

    cout<<"maksellaan luottovelkaa..."<<endl;
    A.luotonMaksu(500);

    A.talletus(100);
    A.nosto(50);

    // tilisiirto A:lta B:lle
    A.tilinsiirto(30, B);

    A.ShowSaldo();
    B.ShowSaldo();



    return 0;
}
