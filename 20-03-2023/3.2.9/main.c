#include <stdio.h>
#include <stdlib.h>

int* pamiec()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%d\n",pamiec());

    return 0;
}
