#include <stdio.h>
#include <stdlib.h>

void zwolnij(double *tab)
{
    free(tab);
}

int main()
{
    int n = 5;
    double *tab = malloc(n*sizeof(double));
    zwolnij(tab);

    return 0;
}
