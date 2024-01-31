#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    chef a ("Jyrki");
    italianChef c ("Mario", 100, 250);

    a.makeSalad();

    c.makePasta();

    a.makeSoup();



    return 0;
}
