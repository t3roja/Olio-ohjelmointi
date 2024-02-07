#include "asunto.h"

asunto::asunto()
{
    cout << "Asunto luotu" << endl;
}

asunto::~asunto()
{

}

void asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout << "Asunto maaritetty. " << "Asukkaita: " << a << ", nelioita: " << n << endl;
}

double asunto::laskeKulutus(double h)
{
    double kulutus = h * asukasMaara * neliot; // asunnon kulutuksen hinta
    cout << "Asunnon kulutus, kun hinta = " << h << " on " << kulutus << endl;

    return kulutus;
}

