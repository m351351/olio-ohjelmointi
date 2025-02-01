#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
public:


    Pankkitili(string o);
    ~Pankkitili();

    virtual bool withdraw(double);

    virtual bool deposit(double);

    double getBalance() const;

private:

protected:
    string omistaja;
    double saldo = 0;


};

#endif // PANKKITILI_H
