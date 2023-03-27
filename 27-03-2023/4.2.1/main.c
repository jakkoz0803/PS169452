#include <stdio.h>
#include <stdlib.h>

void wypisz(int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%i ",tab[i]);
    }
    printf("\n");
}

void a(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = 0;
    }
}

void b(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = i;
    }
}

void c(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] *= 2;
    }
}

void d(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        if(tab[i] < 0)
        {
            tab[i] *= -1;
        }
    }
}

int main()
{
    int tab[5] = {2,5,-4,1,-3};
    wypisz(5,tab);

    d(5,tab);
    wypisz(5,tab);

    a(5,tab);
    wypisz(5,tab);

    b(5,tab);
    wypisz(5,tab);

    c(5,tab);
    wypisz(5,tab);


    return 0;
}
