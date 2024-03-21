// C:\\Users\\antea\\OneDrive - fer.hr\\Dokumenti Laptop\\FER\\samoglasnici.txt

#include <stdio.h>
#include <ctype.h>
int brojiSamoglasnike(char *ime) {
 FILE *ulTok = fopen(ime, "r");
 int brojac = 0;
 if (ulTok != NULL) {
 int c;
 while ((c = fgetc(ulTok)) != EOF) {
 c = toupper(c);
 if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
 ++brojac;
 }
 }
 fclose(ulTok);
 } else {
 // otvaranje ulaznog toka podataka nije uspjelo
 brojac = -1;
 }
 return brojac;
}
#define MAXPATH 100
int main(void) {
 char kompletanPut[MAXPATH + 1];
 printf("Upisite kompletan put do datoteke > ");
 scanf("%s", kompletanPut);
 int brojSamogl = brojiSamoglasnike(kompletanPut);
 if (brojSamogl == -1) {
 printf("Nije uspjelo otvaranje datoteke %s", kompletanPut);
 } else {
 printf("Broj samoglasnika u datoteci %s je %d",
 kompletanPut, brojSamogl);
 }
 return 0;
}