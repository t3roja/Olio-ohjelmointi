#include <iostream>
using namespace std;
#include "kerrostalo.h"

int main()
{

    Kerrostalo *talo = new Kerrostalo;

    cout<<"Kerrostalon kulutus, = "<<talo->laskeKulutus(1)<<endl;

    delete talo;

    return 0;
}
