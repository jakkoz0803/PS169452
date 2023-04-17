#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sklej(char *nap1, char *nap2, char *nap3)
{
    char *napis = malloc((strlen(nap1) + strlen(nap2) + strlen(nap3) + 1)*sizeof(char));
    strcpy(napis,nap1);
    strcat(napis,nap2);
    strcat(napis,nap3);
    return napis;
}

int main()
{

    char slowo1[] = "123"; // 18/19
    char slowo2[] = "456";
    char slowo3[] = "789";

    printf("%s\n",sklej(slowo1, slowo2, slowo3));

    return 0;
}
