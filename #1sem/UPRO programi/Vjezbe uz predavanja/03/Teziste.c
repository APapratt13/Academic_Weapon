#include <stdio.h>

int main(void) {
   int xa, ya, xb, yb, xc, yc, xTezista, yTezista;

   printf("Upisite koordinate vrha trokuta A > ");
   scanf("%d %d", &xa, &ya);

   printf("Upisite koordinate vrha trokuta B > ");
   scanf("%d %d", &xb, &yb);

   printf("Upisite koordinate vrha trokuta C > ");
   scanf("%d %d", &xc, &yc);

   xTezista = (xa + xb + xc) / 3;
   yTezista = (ya + yb + yc) / 3;

   printf("Teziste trokuta A(%d, %d), B(%d, %d), C(%d, %d) jest T(%d, %d)", xa, ya, xb, yb, xc, yc, xTezista, yTezista);

   return 0;
}