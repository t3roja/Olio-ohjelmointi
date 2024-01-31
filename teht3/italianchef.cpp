#include "italianchef.h"

italianChef::italianChef() : vesi(0), jauhot(0)
{
    cout << "Chef " << getName() << " konstruktori" << endl;
}

italianChef::italianChef(string nimi, int water, int flour) : chef(nimi), vesi(water), jauhot(flour)
{
    cout << "Chef " << nimi << " konstruktori" << endl;
}


italianChef::~italianChef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

string italianChef::getName()
{
    string italian = "Mario";
    return italian;
}

void italianChef::makePasta()
{
    name = getName();
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << "uses flour = " << vesi << endl;
    cout << "Chef " << name << "uses water  = " << jauhot << endl;
}
