#include <stdio.h>
#include <stdlib.h>
// 6.2.1
int **alokuj2D(unsigned int n, unsigned int m)
{
    int **tab = malloc(n*sizeof(int*));
    int i;
    for(i = 0; i < n; i++)
        tab[i] = malloc(m*sizeof(int));
    return tab;
}
// 6.2.5
int ***alokuj3D(unsigned int n, unsigned int m, unsigned int o)
{
    int ***tab = (int ***)malloc(n*sizeof(int**));
    for(int i = 0; i < n; i++)
    {
        *(tab+i) = (int **)malloc(m*sizeof(int*));
        for(int j = 0; j < o; j++)
        {
            *(*(tab+i)+j) = (int *)malloc(o*sizeof(int));
        }
    }
    return tab;
}
// 6.2.7
int **trojkat(unsigned int n)
{
    int **tab = (int **)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        *(tab+i) = (int *)malloc((n-i)*sizeof(int));
    }
    return tab;
}
// 6.2.14
int suma(int tab[][100][100])
{
    int sum = 0;
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            for(int k = 0; k < 100; k++)
            {
                sum += tab[i][j][k];
            }
        }
    }
    return sum;
}
// 6.2.18
void wypiszOsobno(int *tab, int w, int k)
{
    int i, j;
    for(i = 0; i < w; i++)
    {
        for(j = 0; j < k; j++)
        {
            printf("%d",*(tab + i*k + j));
        }
        printf("\n");
    }
}
// 6.2.21
void pom(unsigned int n, int *tab)
{
    int p;
    for(int i = 0; i < n/2; i++)
    {
        p = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = p;
    }
}

void odwroc(int **tab, unsigned int n, unsigned int m)
{
    for(int i = 0; i < n; i++)
    {
        pom(n,tab[i]);
    }
}
// 6.2.25
void transpozycja(int tab[][10], int wymiar)
{
    int i, j, temp;
    for(i = 0; i < wymiar; i++)
    {
        for(j = i+1; j < wymiar; j++)
        {
            temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}
//-----------------------------------------------
int main()
{
    printf("Hello world!\n");

    int a = 3, b = 4, c = 2;
    int ***tab3D = alokuj3D(a,b,c);
    printf("%d\n",sizeof(tab3D));

    int **trojkatna = trojkat(4);
    printf("%d\n",sizeof(trojkatna));
    *(*(trojkatna+1)+2)=69;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < (4-i); j++)
        {
            printf("[%d %d]=%d\n",i,j,*(*(trojkatna+i)+j));
        }
    }

    int tablica[][10] = {{1,2,3},{4,5,6},{7,8,9}};
    int wymiar = 3;
    printf("tab przed zamiana:\n");
    for(int i = 0; i < wymiar; i++)
    {
        for(int j = 0; j < wymiar; j++)
        {
            printf("%d ",tablica[i][j]);
        }
        printf("\n");
    }
    transpozycja(tablica, wymiar);
    printf("tab po zamianie:\n");
    for(int i = 0; i < wymiar; i++)
    {
        for(int j = 0; j < wymiar; j++)
        {
            printf("%d ",tablica[i][j]);
        }
        printf("\n");
    }

    int tab18[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int w = 3;
    int k = 3;
    wypiszOsobno(&tab18[0][0],w,k);

    printf("Goodbye world!\n");

    return 0;
}
