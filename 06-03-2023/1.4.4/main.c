// 1.4.4
// n silnia
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    int wynik = 1;
    printf("n silnia\nn: ");
    scanf("%u",&n);

    for(int i = 1; i <= n; i++)
    {
        wynik = wynik * i;
    }
    printf("%d",wynik);

    return 0;
}
