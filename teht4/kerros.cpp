#include "kerros.h"
#include <iostream>


kerros::kerros()
{
    cout << "Kerros luotu" << endl;
}

kerros::~kerros()
{

}

void kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    as1.maarita(2,100); // asuntojen määritys
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);

}

double kerros::laskeKulutus(double h)
{
    int k = 0;

    k = as1.asukasMaara * as1.neliot; // asukasmäärä kertaa neliöt
    k += as2.asukasMaara * as2.neliot;
    k += as3.asukasMaara * as3.neliot;
    k += as4.asukasMaara * as4.neliot;
    k *= h; // kulutus kertaa hinta

    cout << "Kerroksen kulutus, kun hinta = " << h << " on " << k << endl;

    return k;
}
