/*Zadan je program koji broji koliko je puta učitan svaki broj iz zadanog intervala.
Upišite dio kôda koji nedostaje označen slovima XXXXXXXXXXXXXXXXXXXXXXXXXX, a odnosi 
se na polje koje se koristi za određivanje frekvencije pojavljivanja brojeva.
Naravno, kôd mora raditi i ako se promjene granice intervala, tj. ako se promjene 
vrijednosti simboličkih konstanti D_GR i G_GR.*/


#include <stdio.h>
#define D_GR 1967 // donja granica intervala
#define G_GR 2025 // gornja granica intervala
int main(void) {
   int broj;
   XXXXXXXXXXXXXXXXXXXXXXXXXX
   /* ucitavanje brojeva i inkrementiranje odgovarajucih brojaca */
   do {
      printf("Upisite broj u intervalu [%d, %d] > ", D_GR, G_GR);
      scanf("%d", &broj);
      if (broj >= D_GR && broj <= G_GR) {
         brojac[broj - D_GR] = brojac[broj - D_GR] + 1;
      }
   } while (broj >= D_GR && broj <= G_GR); 
   printf("\n");
   /* ispis sadrzaja onih brojaca koji su veci od nule */
   int i;
   for (i = D_GR; i <= G_GR; i = i + 1) {
      if (brojac[i - D_GR] > 0) {
         printf("Broj %d se pojavio %d puta\n", i, brojac[i - D_GR]);
      }
    }
    return 0;
}


int brojac[G_GR - D_GR + 1] = {0}