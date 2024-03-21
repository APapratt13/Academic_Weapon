//IZBACIVANJE RAZMAKA
#include <stdio.h>
void izbaciRazmake(char* izvornoPolje, char* ciljanoPolje) {
    int i = 0;
    int j = 0;
    while (*(izvornoPolje + i) != '\0') {
         if(*(izvornoPolje + i) == ' ') {
            i++;
            continue;
         }
         *(ciljanoPolje + j) = *(izvornoPolje + i);
         ++i;
         ++j; 
    }
    *(ciljanoPolje + j) = '\0'; 
}

int main() {
    char izvornoPolje[] = "Ovo je polje sa razmacima";
    char ciljanoPolje[100];

    izbaciRazmake(izvornoPolje, ciljanoPolje);
    printf("Rezultat: %s\n", ciljanoPolje);

    return 0;
}