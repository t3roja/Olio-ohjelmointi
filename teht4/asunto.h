#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class asunto
{
public:

    asunto();
    ~asunto();

    void maarita(int a,int n);
    double laskeKulutus(double);

    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
