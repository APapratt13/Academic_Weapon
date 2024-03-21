#include <stdio.h>
#include <string.h>
int main(void) {
 int mbr;
 char ime[20 + 1], prez[20 + 1];
 int godina;
 FILE *ulTok = fopen("osobe.txt", "r");
 while (fscanf(ulTok, "%d%s%s%*d.%*d.%d",
 &mbr, ime, prez, &godina) == 4) {
 if (godina == 1987 || strstr(ime, "na") != NULL) {
 printf("%d %s %s\n", mbr, ime, prez);
 }
 }
 fclose(ulTok);
 return 0;
}