#include <stdio.h>
#include <stdlib.h>

void a(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for(int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void b(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for(int i = 0; i < n; i++)
    {
        if(tab2[i] > tab1[i])
        {
            tab3[i] = tab2[i];
        }
        else
        {
            tab3[i] = tab1[i];
        }
    }
}

void c(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    int temp1;
    int temp2;

    for(int i = 0; i < n; i++)
    {
        temp1 = tab1[i];
        tab1[i] = tab3[i];
        temp2 = tab2[i];
        tab2[i] = temp1;
        tab3[i] = temp2;
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
    int tab1[5] = {1,2,4,7,3};
    int tab2[5] = {5,2,4,1,2};
    wypisz(5,tab1);
    wypisz(5,tab2);

    int tab3[5] = {};

    a(5,tab1,tab2,tab3);
    wypisz(5,tab3);

    b(5,tab1,tab2,tab3);
    wypisz(5,tab3);

    printf("---\nc.\n");
    wypisz(5,tab1);
    wypisz(5,tab2);
    wypisz(5,tab3);
    printf("---\n");
    c(5,tab1,tab2,tab3);
    wypisz(5,tab1);
    wypisz(5,tab2);
    wypisz(5,tab3);

    return 0;
}
