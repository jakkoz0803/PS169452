#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned int wynik = 0;
    printf("podaj a: ");
    scanf("%d",&a);

    for(int i = 0; i < 65535; i++)
    {
        if(i > sqrt(a))
        {
            break;
        }
        wynik = i;
    }
    printf("%d\n",wynik);

    return 0;
}
