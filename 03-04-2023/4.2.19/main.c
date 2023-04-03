#include <stdio.h>
#include <stdlib.h>

int *wskaznik(unsigned int n, int tab[])
{
    int licznik = 0;
    for(int i = 0; i < n; i++)
    {
        if(tab[i] != 0)
        {
            licznik += 1;
        }
    }
    int *copy = malloc(licznik * sizeof(int));

    int licz_2 = 0;

    for(int i = 0; i < licznik; i++)
    {
        if(tab[i] == 0)
        {
            licz_2 += 1;
        }
        copy[i] = tab[i + licz_2];
    }
    return *copy;
}

int main()
{
    int tab[6] = {1,2,0,3,0,4};
    printf("%d\n",wskaznik(6,tab));
    return 0;
}

