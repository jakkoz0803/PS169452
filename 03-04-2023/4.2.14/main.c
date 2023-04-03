#include <stdio.h>
#include <stdlib.h>

double *wskaznik(unsigned int n)
{
    return malloc(n * sizeof(double));
}

int main()
{
    int n = 5;
    printf("%d",wskaznik(n));

    return 0;
}
