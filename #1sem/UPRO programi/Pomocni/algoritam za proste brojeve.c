//ALGORITAM ZA PROSTE BROJEVE
#include <stdio.h>
int main() {
    int num, n, brojac, i;
    printf("Unesi raspon:\n");
    scanf("%d", &n);
    printf("Prosti brojevi: ");
    
    for (num = 2; num <= n; num++) {
        brojac = 0;
        
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                brojac++;
                break;
            }
        }
        if (brojac == 0) {
            printf("%d ", num);
        }
    }
    return 0;
}