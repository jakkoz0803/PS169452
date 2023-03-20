#include <stdio.h>
#include <stdlib.h>

void przypisz(int const * a, int * const b)
{
    *b = *a;
}

int main()
{
    int x = 3, y = 6, z = 8;

    przypisz(&x,&y);
    printf("%d\n",y);

    przypisz(&z,&y);
    printf("%d\n",y);

    return 0;
}
