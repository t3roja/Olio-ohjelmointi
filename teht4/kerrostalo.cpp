#include "kerrostalo.h"


kerrostalo::kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;

    katutaso eka; // katutason luonti

    kerros toka; // kerrosten luonti

    kerros kolmas;

    cout << "Maaritetaan kerrostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot();

    toka.maaritaAsunnot();

    kolmas.maaritaAsunnot();


}

kerrostalo::~kerrostalo()
{

}

double kerrostalo::laskeKulutus(double h)
{
   int  hinta = 0;

   hinta += eka.laskeKulutus(h); // lasketaan kulutuksen hinnat yhteen

   hinta += toka.laskeKulutus(h);

   hinta += kolmas.laskeKulutus(h);


   return hinta;

}
