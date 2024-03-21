#include <stdio.h>
#define PI 3.14159f

int main(void) {
   float a;
   float b;
   float povrsina;

   printf("Upisite duljinu velike poluosi a > ");
   scanf("%f", &a);

   if (a > 0.f) {
      printf("Upisite duljinu male poluosi b > ");
      scanf("%f", &b);

      if (b > 0.f) {
         povrsina = PI * a * b;
         printf("Povrsina elipse a = %.4f, b = %.4f je %.4f", a, b, povrsina);
      }
      else {
         printf("Duljina male poluosi mora biti veca od nule");
      }
   }
   else {
      printf("Duljina velike poluosi mora biti veca od nule");
   }

   return 0;
}
