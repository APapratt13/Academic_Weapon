#include <stdio.h>
#include <string.h>

int main(void){
    char ulaz[31];
    printf("Upisite ulazni niz > ");
    fgets(ulaz, sizeof(ulaz), stdin);

    char *novir=strchr(ulaz, '\n');
    if (novir != NULL){
        *novir = '\0';
    }


    int duljina = strlen(ulaz);
    int k = 0;

    char izlaz[30];

    for (int i=0; i < duljina; i++){
        if (ulaz[i] >= 'a' && ulaz[i] <= 'z' && strchr(izlaz, ulaz[i]) == NULL){
            izlaz[k]=ulaz[i];
            k++;
        }
    }

    izlaz[k]= '\0';

   printf("Izlaz: %s\n", izlaz);
   printf(" Ulaz: %s", ulaz);
   return 0;
}