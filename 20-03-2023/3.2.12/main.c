#include <stdio.h>
#include <stdlib.h>

int* pamiec(unsigned int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%d\n",pamiec(2));
    printf("%d\n",pamiec(8));

    return 0;
}
