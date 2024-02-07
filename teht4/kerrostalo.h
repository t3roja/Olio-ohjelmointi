#ifndef KERROSTALO_H
#define KERROSTALO_H

#include <iostream>
#include "kerros.h"
#include "katutaso.h"

using namespace std;

class kerrostalo
{
public:

    kerrostalo();
    ~kerrostalo();

    double laskeKulutus(double);

private:

    katutaso eka;
    kerros toka;
    kerros kolmas;
};

#endif // KERROSTALO_H
