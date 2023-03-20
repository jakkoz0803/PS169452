#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    if(*a < *b)
    {
        return a;
    }
    return b;
}

int main()
{
    int *a = 3;
    int *b = 4;
    int *c = 6;
    int *d = 5;

    printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n",&c);
    printf("%d\n",&d);

    printf("%d\n",mniejsza(&a,&b));
    printf("%d\n",mniejsza(&c,&d));

    return 0;
}
