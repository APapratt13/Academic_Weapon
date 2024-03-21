#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#define MAX_BROJ 100

void GenerirajTelefonskiBroj(char *broj){
    int lenght = 0;
    while (*(broj+lenght) != '\0'){
        ++lenght;
    }

    for (int i=0; i < lenght; i++){
        if (*(broj+i) == 'x'){
           *(broj+i) = rand()%('9'-'0'+1)+'0';
        }else{
            *(broj+i) = '-';
        }
    }
}

int main()
{
  int seed;
  char broj[MAX_BROJ] = {'\0'};
  scanf("%d %s", &seed, broj);


  srand(seed);
  GenerirajTelefonskiBroj(broj);
  printf("%s", broj);


  return 0;
}