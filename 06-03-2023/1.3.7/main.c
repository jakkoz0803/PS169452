// 1.3.7
// rownanie kwadratowe

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("ax^2 + bx + c\na: ");
    scanf("%lf",&a);
    printf("b: ");
    scanf("%lf",&b);
    printf("c: ");
    scanf("%lf",&c);

    double delta = (b*b) - (4*a*c);
    if(a == 0)
    {
        printf("nie jest to rownanie kwadratowe\n");
    }
    else if(delta < 0)
    {
        printf("delta < 0, brak miejsc zerowych");
    }
    else if(delta == 0)
    {
        double x;
        x = (0-b)/(2*a);
        printf("delta = 0, jedno rozwiazanie: %lf",x);
    }
    else
    {
        double x1, x2;
        x1 = (0-b-sqrt(delta))/(2*a);
        x2 = (0-b+sqrt(delta))/(2*a);
        printf("delta > 0, dwa rozwiazania: %lf oraz %lf",x1,x2);
    }

    return 0;
}
