#include <stdio.h>
#include <stdlib.h>

int licznik = 0;
void zlicz()
{
    licznik += 1;
    printf("liczba wywolan: %d\n",licznik);
}

int main()
{
    for(int i = 0; i < 3; i++)
    {
        zlicz();
    }

    return 0;
}
