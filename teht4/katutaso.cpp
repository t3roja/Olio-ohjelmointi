#include "katutaso.h"

katutaso::katutaso()
{
    cout << "Katutaso luotu" << endl;
}

katutaso::~katutaso()
{

}

void katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;

    as1.maarita(2,100); //asuntojen määritys
    as2.maarita(2,100);

}

double katutaso::laskeKulutus(double h)
{
    int k = 0;

    k += as1.asukasMaara * as1.neliot; //asukasmäärä kertaa neliöt
    k += as2.asukasMaara * as2.neliot;
    k *= h; //Kulutus kertaa hinta

    cout << "Katutason kulutus, kun hinta = " << h << " on " << k << endl;

    return k;
}
