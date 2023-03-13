#include <stdio.h>
#include <stdlib.h>

int silnia(unsigned int n)
{
    int wynik = 1;
    if(n == 0)
    {
        return 1;
    }
    for(int i = 1; i <= n; i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}
int main()
{
    unsigned int n;
    printf("podaj n: ");
    scanf("%d",&n);

    printf("%d",silnia(n));

    return 0;
}
