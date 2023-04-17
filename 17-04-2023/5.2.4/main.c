#include <stdio.h>
#include <stdlib.h>

int kolejnosc(char *napis1, char *napis2)
{
    int i;
    for(i = 0; (napis1[i] != 0) && (napis2[i] != 0); i++)
    {
        if(napis1[i] != napis2[i])
        {
            return (napis1[i] < napis2[i])?1:0;
        }
    }
    if(napis1[i] != 0)
        return 0;
    else
        return 1;
}

int main()
{
    char slowo1[] = "poniedzialek";
    char slowo2[] = "powtorka";
    printf("%d\n",kolejnosc(slowo1,slowo2));

    return 0;
}
