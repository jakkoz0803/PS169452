#include <stdio.h>
#include <stdlib.h>

void wartosc(int n, int *w)
{
    *w = n;
}

int main()
{
    int a = 0;
    int b = 1;
    int c = 2;

    wartosc(5,&a);
    printf("%d\n",a);

    printf("%d\n",b);

    wartosc(1,&c);
    printf("%d\n",c);

    return 0;
}
