#include <stdio.h>


int main(void){
    int n;
    printf("Unesite n > ");
    scanf("%d", &n);

    while (n<=2){
        printf("Unesite n > ");
        scanf("%d", &n);
    }

    int polje[n];
    printf("Unesite clanove niza > ");
    for (int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }
    
    
    int d = polje[1]-polje[0]; 
    int r = d; //r je razlika koja mijenja vrijednost a d je konstantna
    
    for (int i = 0; i<n; i++){
        if (i<(n-1)){
            r = polje[i+1] - polje[i];
        }
        if (r!=d){
            printf("NIJE");
            i = n-1;
        }
    }

    if (r==d){
        printf("A > %d", d);
    }

    return 0;
}