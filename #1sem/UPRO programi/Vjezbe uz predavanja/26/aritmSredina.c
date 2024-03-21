#include <stdio.h>

int main(void){
    FILE *ulaz = fopen("brojevi.txt", "r");

    double broj;
    double brojac=0.0; 
    double suma=0.0;

    /*U C programiranju, funkcija fscanf vraća broj uspješno 
    pročitanih stavki. Ako fscanf uspješno pročita i pridijeli 
    vrijednost varijabli (u ovom slučaju, pročitava se jedan 
    realan broj %lf), tada će rezultat biti 1. Ako fscanf ne 
    uspije pročitati nijednu stavku, rezultat će biti 0. Ako 
    dođe do neočekivane pogreške, rezultat može biti EOF (End 
    of File).*/

    while (fscanf(ulaz, "%lf", &broj) == 1) {
        suma += broj;
        ++brojac;
    }

    if (brojac == 0){
        printf("Nije ucitan niti jedan broj");
    }else{
        printf("%5f", (suma/brojac));
    }

    fclose(ulaz);

    return 0;
}