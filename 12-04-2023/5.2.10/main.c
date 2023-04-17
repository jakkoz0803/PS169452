#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wytnij(char *nap, int n, int m)
{
    int i, dl;
    for(dl = 0; nap[dl] != 0; dl++);
    if(dl+1 > m)
    {
        for(i = 0; i + m < dl; i++)
        {
            nap[n+i] = nap[i+m+1];
        }
    }
    else if((n<dl)&&(dl+1<=m))
    {
        nap[n] = 0;
    }
}

bool porownaj(char *nap1, char *nap2, int n)
{
    int i;
    for(i = 0; (nap1[i] != 0)&&(nap2[i] != 0); i++)
    {
        if(nap1[n+i] != nap2[i])
            return false;
    }
    if(nap2[i] == 0)
        return true;
    else
        return false;
}

void wytnij2(char *nap1, char *nap2)
{
    int i, dl;
    for(dl = 0; nap2[dl] != 0; dl++);
    for(i = 0; nap1[i] != 0; i++)
    {
        if(porownaj(nap1,nap2,i))
        {
            wytnij(nap1, i, i+dl-1);
            return;
        }
    }
}

bool czy(int a, int b)
{
    if(a > b)
        return true;
    else
        return false;
}

int main()
{
    char slowo1[] = "Najstarszy skoczek Noriaki Kasai juz nie jest tak dobry"; // 18/19
    char slowo2[] = "Noriaki Kasai";
    wytnij2(slowo1, slowo2);

    printf("%s\n",slowo1);
    printf("%s\n",slowo2);

    return 0;
}
