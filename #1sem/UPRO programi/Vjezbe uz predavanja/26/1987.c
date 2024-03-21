#include <stdio.h>
#include <string.h>

int main(void){
    FILE *ulaz = fopen("osobe.txt", "r");

    int mb;
    char ime[21], prezime[21];
    int god;

    /*%d označava da očekujemo čitanje cjelobrojne vrijednosti (integera), 
    a * ispred %d označava da pročitanu vrijednost želimo ignorirati, 
    odnosno preskočiti*/

    /*U funkciji fscanf, koristite %s za čitanje niza znakova (stringa), 
    ne treba koristiti & ispred ime i prezime jer oni već predstavljaju 
    adrese nizova znakova*/

    while (fscanf(ulaz, "%d %s %s %*d.%*d.%d", &mb, ime, prezime, &god) == 4) {
        if (((strstr(ime, "na")) != NULL) || (god == 1986)){
            printf("%d %s %s\n", mb, ime, prezime);
        }
    }

    fclose(ulaz);
    return 0;
}