#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double srednia_geom(unsigned int n, unsigned int tab[])
{
    double wynik = 1;
    for(int i = 0; i < n; i++)
    {
        wynik *= tab[i];
    }
    wynik = pow(wynik,(1.0/n));
    return wynik;
}

int main()
{
    unsigned int tab[4] = {2,4,1};
    printf("%lf\n",srednia_geom(3,tab));

    return 0;
}
