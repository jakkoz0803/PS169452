// 1.3.5
// obliczyc pole trojkata na podstawie wymiarow
// podanych przez uzytkownika
// podstawa i wysokosc LUB wszystkie boki
#include <stdio.h>
#include <stdlib.h>

double pole_trojkata(double a, double b, double c)
{

}

int main()
{
    int n;
    double a,b,c;
    double wynik;

    printf("1 - podstawa i wysokosc\n2 - wszystkie boki\n");
    scanf("%d",&n);

    if(n != 1 && n != 2)
    {
        printf("zla liczba\n");
        return 0;
    }
    else if(n == 1)
    {
        printf("podstawa: ");
        scanf("%lf",&a);
        printf("wysokosc: ");
        scanf("%lf",&b);

        wynik = a*b/2;
        printf("%lf",wynik);
    }
    else
    {
        printf("bok 1: ");
        scanf("%lf",&a);
        printf("bok 2: ");
        scanf("%lf",&b);
        printf("bok 3: ");
        scanf("%lf",&c);

        double p = (a+b+c)/2;
        wynik = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%lf",wynik);
    }

    return 0;
}
