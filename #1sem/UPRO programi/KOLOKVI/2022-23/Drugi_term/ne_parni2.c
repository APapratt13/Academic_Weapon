#include <stdio.h>

int main(void){
    int n;
    printf("Unesite n: ");
    scanf("%d", &n);

    while (n<=0){
        printf("Unesite n: ");
        scanf("%d", &n);
    }

    int a[n];
    printf("Unesite clanove polja: ");
    for (int i =0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int polje[n];
    int k = 0;

    for (int i =0; i<n; i++){
        if (a[i]%2 != 0){
            polje[k]=a[i]; 
            k++;
        }
    }

    for (int i = 0; i<n; i++){
        if (a[i]%2 == 0){
            polje[k] = a[i];
            k++;
        }
    }

    printf("Modificirano polje: ");
    for (int i = 0; i < n; i = i + 1) {
        printf("%d ", polje[i]);
    }
   return 0;
}