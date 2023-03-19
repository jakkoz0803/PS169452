#include <stdio.h>
#include <stdlib.h>

int dzielnik(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    printf("%d\n",dzielnik(30,12));
    printf("%d\n",dzielnik(24,12));
    printf("%d\n",dzielnik(24,13));

    return 0;
}
