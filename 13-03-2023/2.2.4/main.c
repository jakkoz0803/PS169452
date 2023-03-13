#include <stdio.h>
#include <stdlib.h>

int potegaDwa(unsigned int n)
{
    int wynik = 1;
    if(n == 0)
    {
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        wynik = wynik * 2;
    }
    return wynik;
}
int main()
{
    unsigned int n;
    printf("podaj n: ");
    scanf("%d",&n);

    printf("%d",potegaDwa(n));

    return 0;
}
