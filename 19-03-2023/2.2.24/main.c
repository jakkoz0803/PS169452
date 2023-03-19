#include <stdio.h>
#include <stdlib.h>

int suma(int n)
{
    if(n > 1)
    {
        return suma(n-2) + suma(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("%d",suma(0));
    printf("%d",suma(1));
    printf("%d",suma(2));
    printf("%d",suma(3));

    return 0;
}
