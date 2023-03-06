// 1.3.9
// kalkulator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double wynik, a, b;
    printf("1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie\n");
    scanf("%d",&n);

    if(n != 1 && n != 2 && n != 3 && n != 4)
    {
        printf("podano nieprawidlowa liczbe\n");
    }
    else
    {
        printf("a: ");
        scanf("%lf",&a);
        printf("b: ");
        scanf("%lf",&b);
        if(n == 1)
        {
            wynik = a + b;
            printf("%lf",wynik);
        }
        else if(n == 2)
        {
            wynik = a - b;
            printf("%lf",wynik);
        }
        else if(n == 3)
        {
            wynik = a * b;
            printf("%lf",wynik);
        }
        else if(n == 4)
        {
            wynik = a / b;
            printf("%lf",wynik);
        }
    }

    return 0;
}
