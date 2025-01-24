#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(); // default konstruktori, joka hyvä aina olla
    Chef(string name);
    ~Chef();

    string getChefName() const;
    int makeSalad (int aines);
    int makeSoup(int aines);

protected:
    string chefName;
};




#endif // CHEF_H
