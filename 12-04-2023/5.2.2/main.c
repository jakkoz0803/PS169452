#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis)
{
    int i = 0;
    while(napis[i] != 0)
        i++;
    return i;
}

int dlugosc_2(wchar_t *napis)
{
    int i = 0;
    while(napis[i] != 0)
        i++;
    return i;
}

int main()
{
    char slowo[] = "krzysztof";
    printf("%d\n",dlugosc(slowo));

    return 0;
}
