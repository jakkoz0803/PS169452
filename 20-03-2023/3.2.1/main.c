#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    if(*a < *b)
    {
        return *a;
    }
    return *b;
}

int main()
{
    int a = 5;
    int b = 3;
    int c = 7;
    int d = 8;

    printf("%d\n",mniejsza(&a,&b));
    printf("%d\n",mniejsza(&c,&d));

    return 0;
}
