#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:

    Luottotili(string o, double lr); // tämä siksi kun on perivä pankkitilistä. o= omistaja, pankkitilissä gordon. lr=luottoraja
    ~Luottotili();
    virtual bool withdraw (double nosto) override;

    virtual bool deposit(double summa) override;

    double getBalance();

protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
