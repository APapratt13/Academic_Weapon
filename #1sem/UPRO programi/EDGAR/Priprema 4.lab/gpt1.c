#include <stdio.h>
#include <string.h>

int main(void) {
    char polje[150];
    printf("Upisite znakovni niz > ");
    fgets(polje, sizeof(polje), stdin);

    int length = strlen(polje);

    int j = 0;
    for (int i = 0; i < length; i++) {
        if ((polje[i] >= 'A' && polje[i] <= 'Z') || (polje[i] >= 'a' && polje[i] <= 'z')) {
            polje[j] = polje[i];
            j++;
        }
    }
    polje[j] = '\0'; 

    if (j == 0) {
        printf("Izlazni znakovni niz je : prazan string");
    } else {
        printf("Izlazni znakovni niz je : %s", polje);
    }

    printf("\n");
    return 0;
}
