#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class chef
{
public:

    chef();
    chef(string n);
    ~chef();

    void makeSalad(void);
    void makeSoup(void);

protected:

    string name;

};

#endif // CHEF_H
