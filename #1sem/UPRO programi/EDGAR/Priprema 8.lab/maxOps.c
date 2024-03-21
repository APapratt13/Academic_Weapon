#include <stdio.h>
#include <string.h>

#define MAX_SEKVENCI 50
#define MAX_PRAVOKUTNIKA 25

struct pravokutnik{
    int x1;
    int y1;
    int x2;
    int y2;
};

struct pravokutnik rjesenje;

void nadiNajveciOpseg(int n, struct pravokutnik* pravokutnici){
    int sirina1, sirina2, duzina1, duzina2, opseg1, opseg2;

    rjesenje = pravokutnici[0];
    for (int i =0; i <n-1; i++){

        sirina1 = 2*(pravokutnici[i].x2 - pravokutnici[i].x1);
        duzina1 = 2*(pravokutnici[i].y2 - pravokutnici[i].y1);
        if (sirina1 < 0){
            sirina1 = -1*sirina1;
        }
        if (duzina1 < 0){
            duzina1 = -1*duzina1;
        }
        opseg1 = sirina1 + duzina1;

        sirina2 = 2*(pravokutnici[i].x2 - pravokutnici[i].x1);
        duzina2 = 2*(pravokutnici[i+1].y2 - pravokutnici[i+1].y1);
        if (sirina2 < 0){
            sirina2 = -1*sirina2;
        }
        if (duzina2 < 0){
            duzina2 = -1*duzina2;
        }

        opseg2 = sirina2 + duzina2; 

        if (opseg1 < opseg2){
            rjesenje = pravokutnici[i+1];
        }else if (opseg1 > opseg2){
            rjesenje = pravokutnici[i];
        }
    }
}




int main() {
   int broj_pravokutnika;
   printf("Broj pravokutnika: ");
   scanf("%d", &broj_pravokutnika);


   struct pravokutnik pravokutnici[MAX_PRAVOKUTNIKA];
   printf("Unesite koordinate nasuprotnih točaka pravokutnika:\n");
   for (int i=0; i < broj_pravokutnika; i++) {
      scanf("%d", &pravokutnici[i].x1);
      scanf("%d", &pravokutnici[i].y1);
      scanf("%d", &pravokutnici[i].x2);
      scanf("%d", &pravokutnici[i].y2);
   }


   nadiNajveciOpseg(broj_pravokutnika, pravokutnici);


   printf("Rjesenje:\n");
   printf("(%d, %d) - (%d, %d)\n", rjesenje.x1, rjesenje.y1, rjesenje.x2, rjesenje.y2);


   return 0;
}