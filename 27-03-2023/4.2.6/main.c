#include <stdio.h>
#include <stdlib.h>

void a(unsigned int n, int tab1[], int tab2[])
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

void b(unsigned int n, int tab1[], int tab2[])
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[n-i-1];
    }
}

void wypisz(int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%i ",tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[6] = {1,3,5,2,6,4};
    int tab2[6] = {};
    wypisz(6,tab1);

    a(6,tab1,tab2);
    wypisz(6,tab2);

    b(6,tab1,tab2);
    wypisz(6,tab2);

    return 0;
}
