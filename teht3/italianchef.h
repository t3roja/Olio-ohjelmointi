#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class italianChef : public chef
{
public:
    italianChef();
    italianChef(string nimi, int water, int flour);
    ~italianChef();

    string getName(void);
    void makePasta();

private:

    int vesi;
    int jauhot;

};

#endif // ITALIANCHEF_H
