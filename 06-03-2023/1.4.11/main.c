#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, d;
    int x = 0;
    printf("podaj a, b, c, d\n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("----\n");

    // a)
    if(a < 0)
    {
        a = -a;
    }
    for(int i = 0; i < 65535; i++)
    {
        if(((a*i*i)+(b*i)+c) > d)
        {
            x = i;
            break;
        }
    }
    printf("%d\n----\n",x);

    // b)
    x = 0;
    for(int i = 0; i < 65535; i++)
    {
        if(((5*i*i)+(a*i)+b) >= c)
        {
            break;
        }
        x = i;
    }
    printf("%d\n----\n",x);

    // c)
    x = 0;
    for(int i = 0; i < 65535; i++)
    {
        if(((5*i*i)+(a*i)+b) > c)
        {
            break;
        }
        x = i;
    }
    printf("%d\n----\n",x);

    return 0;
}
