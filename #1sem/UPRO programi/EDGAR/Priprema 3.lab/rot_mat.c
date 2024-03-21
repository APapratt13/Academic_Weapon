#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Unesite dimenzije polja: ");
    scanf("%d", &n);
    int elementi[n][n], rot[n][n];

    printf("Unesite elemente polja: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &elementi[i][j]);
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = (n-1); i >= 0; i--)
        {
            rot[k][n-1-i]=elementi[i][k];
        }
    }

    printf("Izracunato polje: \n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",rot[i][j]);
        }
        printf("\n");
    }

    return 0;
}