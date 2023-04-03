#include <stdio.h>
#include <stdlib.h>

double *kopia(unsigned int n, double *tab)
{
    double *copy = malloc(n * sizeof(double));

    for(int i = 0; i < n; i++)
    {
        copy[i] = tab[i];
    }

    return copy;
}

int main()
{
    unsigned int n = 5;
    double tab[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    double *copy = kopia(n, tab);

    printf("%lf",*copy);

    return 0;
}
