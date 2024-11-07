#ifndef KERROSTALO_H
#define KERROSTALO_H

#include <iostream>
#include "katutaso.h"
#include "kerros.h"

using namespace std;

class kerrostalo {
public:
    kerrostalo();
    ~kerrostalo();

    double laskeKulutus(double h);

private:
    katutaso eka;   // Ground floor
    kerros toka;    // Second floor
    kerros kolmas;  // Third floor
};

#endif
