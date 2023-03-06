// 1.4.6
// n > 2, iloczyn liczb parzystych od 2 do n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int wynik = 1;
    printf("iloczyn liczb parzystych od 2 do n\nn: ");
    scanf("%d",&n);

    for(int i = 2; i < n+1; i=i+2)
    {
        wynik = wynik * i;
    }
    printf("%d\n",wynik);

    return 0;
}
