#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    if(*b < *a)
    {
        int pom = *a;
        *a = *b;
        *b = pom;
    }
}

int main()
{
    int a = 4;
    int b = 3;
    printf("%d, %d\n",a,b);

    zamiana(&a,&b);

    printf("%d, %d\n",a,b);

    return 0;
}
