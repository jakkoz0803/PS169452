#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if(n > 1)
    {
        return silnia(n-1) * n;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("%d\n",silnia(0));
    printf("%d\n",silnia(1));
    printf("%d\n",silnia(2));
    printf("%d\n",silnia(3));
    printf("%d\n",silnia(4));

    return 0;
}
