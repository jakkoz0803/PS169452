// 1.4.2
// m wielokrotnosci liczby n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("m wielokrotnosci liczby n\nn: ");
    scanf("%d",&n);
    printf("m: ");
    scanf("%d",&m);

    for(int i = n; i < n*m+1; i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}
