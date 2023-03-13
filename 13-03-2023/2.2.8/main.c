#include <stdio.h>
#include <stdlib.h>

int pierwiastek(unsigned int n)
{
    int wynik = 0;
    for(int i = 0; i*i <= n; i++)
    {
        wynik = i;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    printf("podaj n: ");
    scanf("%d",&n);

    printf("%d",pierwiastek(n));

    return 0;
}
