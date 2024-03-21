//PrimBroj
#include <stdio.h>
int isPrime(int broj) {
   if (broj <= 1) {
      return 0;
   } 
   for (int i = 2; i * i <= broj; i++) {
      if (broj % i == 0) {
         return 0;
      }
   }
   return 1;
}

int main() {
    int n;
    printf("Unesite broj prostih brojeva koje zelite ispisati: ");
    scanf("%d", &n);

    int brojac = 0;
    int num = 2;

    while (brojac < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            brojac++;
        }
        num++;
    }
    return 0;
}