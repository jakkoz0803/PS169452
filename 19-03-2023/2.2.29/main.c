#include <stdio.h>
#include <stdlib.h>

int dzielnik(int n, int m)
{
    if(n == m)
    {
        return n;
    }
    if(n > m)
    {
        return dzielnik(m, n - m);
    }
    return dzielnik(n, m - n);
}

int main()
{
    printf("%d\n",dzielnik(30,12));
    printf("%d\n",dzielnik(24,12));
    printf("%d\n",dzielnik(24,13));

    return 0;
}
