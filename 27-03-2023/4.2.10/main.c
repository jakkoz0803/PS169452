#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(unsigned int n, int tab[])
{
    int max = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

int b(unsigned int n, int tab[])
{
    int min = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < min)
        {
            min = tab[i];
        }
    }
    return min;
}

int c(unsigned int n, int tab[])
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > tab[max])
        {
            max = i;
        }
    }
    return max;
}

int d(unsigned int n, int tab[])
{
    int min = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < tab[min])
        {
            min = i;
        }
    }
    return min;
}

int e(unsigned int n, int tab[])
{
    int max = abs(tab[0]);
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > max)
        {
            max = abs(tab[i]);
        }
    }
    return max;
}

int f(unsigned int n, int tab[])
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > abs(tab[max]))
        {
            max = i;
        }
    }
    return max;
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
    int tab[8] = {5,3,6,4,-4,-2,-8,-3};
    wypisz(8,tab);

    printf("max: %d\n",a(8,tab));
    printf("min: %d\n",b(8,tab));
    printf("max indeks: %d\n",c(8,tab));
    printf("min indeks: %d\n",d(8,tab));
    printf("max bezwzg: %d\n",e(8,tab));
    printf("max bezwg indeks: %d\n",f(8,tab));

    return 0;
}
