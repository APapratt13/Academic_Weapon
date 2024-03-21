#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Unesite broj clanova polja:\n");
    scanf("%d", &n);
    int polje[n], novo[n];

    printf("Unesite clanove polja (%d):", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &polje[i]);
        novo[i] = polje [i];
    }

    int x, y;
    printf("\nUnesite vrijednost novog clana te indeks:");
    scanf("%d %d", &x, &y);

    novo[y] = x;
    for (int i=y+1; i<n; i++)
    {
        novo[i]=polje[i-1];
    }
    //novo[y+1] = polje[y];

    printf("\nPocetno polje\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", polje[i]);
    }

    printf("\nNovodobiveno polje\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", novo[i]);
    }

    return 0;
}