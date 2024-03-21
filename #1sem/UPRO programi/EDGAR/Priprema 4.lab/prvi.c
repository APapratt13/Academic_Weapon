#include <stdio.h>

int main(void){
    char polje[150];
    printf("Upisite znakovni niz > ");
    fgets(polje, sizeof(polje), stdin);
    
    int b = 0;
    int duljina = strlen(polje);

    for (int i=0; i < duljina; i++){
        if (((polje[i] >= 'A') && (polje[i] <= 'Z')) || ((polje[i] >= 'a') && (polje[i] <= 'z'))){
            b ++;
            printf("\nznak= %c", polje[i]);
            printf("\nb= %d", b);
        }
    }   

    if (b == 0){
        printf("Izlazni znakovni niz je : prazan string");
    }else{
        printf("Izlazni znakovni niz je : ");
        int i = 0;
        while (polje[i] != '\0'){
            if (((polje[i] >= 'A') && (polje[i] <= 'Z')) || ((polje[i] >= 'a') && (polje[i] <= 'z'))){
                printf("%c", polje[i]);
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}