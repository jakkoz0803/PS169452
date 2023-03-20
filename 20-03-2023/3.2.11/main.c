#include <stdio.h>
#include <stdlib.h>

int* pamiec(unsigned int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    printf("%d\n",pamiec(8));
    printf("%d\n",pamiec(4));

    return 0;
}
