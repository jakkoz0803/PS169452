#include <stdio.h>
#include <stdlib.h>

// 4.2.14
int * alokuj(unsigned int n)
{
    return malloc(n*sizeof(double));
}

// 4.2.16
void zwolnij(double *tab)
{
    free(tab);
}

// 4.2.17
double *tab_kopia(unsigned int n, double tab[])
{
    double *kopia = (double*) malloc(n * sizeof(double));
    for(int i = 0; i < n; i++)
    {
        kopia[i] = tab[i];
    }
    return kopia;
}

// 4.2.19
int* zad19(unsigned int n, int* tab1)
{
    int nie_zero = 0;
    for(int i = 0; i < n; i++)
    {
        if(tab1[i] != 0)
            nie_zero++;
    }

    int* tab2 = (int*) malloc(nie_zero * sizeof(int));

    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(tab1[i] != 0)
        {
            tab2[j] = tab1[i];
            j++;
        }
    }
    return tab2;
}


int main()
{
    printf("Hello world!\n");
    printf("%d\n",alokuj(1));

    double tab[] = {2,5,3,1};
    printf("%lf\n",tab_kopia(4,tab));

    printf("%d\n",zad19(4,tab));

    return 0;
}
