//BROJAC PODNIZA-> ovo nije neki algoritam , ali eto možda i pomogne
#include<string.h>
#include<stdio.h>
int brojacPodNizova(char *niz1, char *niz2) {
   int brojac = 0;
   while ((niz1 = strstr(niz1, niz2)) != NULL)
   {
      ++brojac;
      ++niz1;
   }
   return brojac;
}
int main() {
   char niz1[] = "OvojeOvoJEnEKIpODNIZOVOvoOvoN";
   char niz2[] = "Ovo";

   printf("Ovoliko je podnizova: %d", brojacPodNizova(niz1, niz2));
}