// izbacivanje NR-a
#include<stdio.h>
void izbaciNR(char *niz) {
   while (*niz != '\0')
   {
      if(*niz == '\n' && *(niz + i) == '\0')
         *niz = '\0';
      ++niz;
   }
}
//U ovome kodu mijenjamo '\n' u '\0'
