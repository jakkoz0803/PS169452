#include <stdio.h>
#include <stdlib.h>

void a(unsigned int n, int tab[])
{
    int temp[n];
    for(int i = 0; i < n; i++)
    {
        *(temp + i) = *(tab + n-i-1);
    }
    for(int i = 0; i < n; i++)
    {
        *(tab + i) = *(temp + i);
    }
}

void b(unsigned int n, int tab[])
{
    int temp[n-1];
    for(int i = 0; i < n; i++)
    {
        *(temp + i-1) = *(tab + i);
    }
    *(tab + n-1) = *(tab);
    for(int i = 0; i < n; i++)
    {
        *(tab + i) = *(temp + i);
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
    int tab[5] = {3,2,6,4,5};
    wypisz(5,tab);

    a(5,tab);
    wypisz(5,tab);

    b(5,tab);
    wypisz(5,tab); // cos jest zle

    return 0;
}
