#include <stdio.h>
#include <stdlib.h>

void kopiujn(char *nap1, char *nap2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        nap2[i] = nap1[i];
    }
}

void kopiujn_2(wchar_t *nap1, wchar_t *nap2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        nap2[i] = nap1[i];
    }
}

int main()
{
    char slowo1[] = "Adam Malysz";
    char slowo2[30];
    kopiujn(slowo1, slowo2, 7);

    printf("%s\n",slowo1);
    printf("%s\n",slowo2);

    return 0;
}
