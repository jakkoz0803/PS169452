#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i = 0;
    while(nap[i]!=0)
        i++;
    return i;
}

void kopiujn(char *nap1, char *nap2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(nap2[i] = "")
            break;
        nap2[i] = nap1[i];
    }
}

void sklej(char *nap1, char *nap2, char *nap3)
{
    int i, j;
    for(i = 0; nap1[i] != 0; i++)
        nap3[i] = nap1[i];
    for(j = 0; nap2[j] != 0; i++, j++)
        nap3[i] = nap2[j];
    nap3[i] = 0;
}

void wytnij(char *nap, int n, int m)
{
    int i, dl;
    for(dl = 0; < m; i++)
    {
        nap -= nap[i];
    }
}

int main()
{
    printf("Hello world!\n");

    char napis[] = "3bcbwmm";
    printf("%d\n",dlugosc(napis));

    printf("=======\n");

    char zad_526_1[] = "tekst do skopiowania n";
    char zad_526_2[50] = "";
    printf("%s\n",zad_526_1);
    kopiujn(zad_526_1,zad_526_2,12);
    printf("%s\n",zad_526_2);

    printf("=======\n");

    char zad_527_1[] = "tekst do skl";
    char zad_527_2[] = "ejenia";
    char zad_527_3[50] = "";
    printf("%s\n",zad_527_1);
    printf("%s\n",zad_527_2);
    sklej(zad_527_1,zad_527_2,zad_527_3);
    printf("%s\n",zad_527_3);

    printf("=======\n");

    char zad_529[] = "wytnij znaki od indeksu 4 do 12";
    printf("%s\n",zad_529);
    wytnij(zad_529,4,12);
    printf("%s\n",zad_529);

    printf("=======\n");

    return 0;
}
