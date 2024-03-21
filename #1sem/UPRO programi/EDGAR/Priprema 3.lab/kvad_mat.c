#include <stdio.h>
#include <math.h>

int main(void){
    int m, n;
    printf("Unesi dimenzije: ");
    scanf("%d %d", &m, &n);
    int elementi[m][n];

    if (m != n)
    {
        printf("Dimenzije ne odgovaraju kvadratnoj matrici!\n");
    }
    else
    {
        printf("Unesi clanove polja:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &elementi[i][j]);
            }
        }

        printf("Odabrana je matrica: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" %d", elementi[i][j]);
            }
            printf("\n");
        }

        int d1=0, d2=0;
        for (int i=0; i <n; i++)
        {
            d1 += pow(elementi[i][i], 2);
            d2 += pow(elementi[i][n-1-i], 2);
        }
        
        printf("Razlika zbrojeva je %d.\n", (d1-d2));
    }
    
        

    return 0;
}