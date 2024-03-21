 #include <stdio.h>
int main(void) {
 FILE *ulTok = fopen("mjerenja.txt", "r");
 int dan, brojMj;
 while (fscanf(ulTok, "#%d#%d", &dan, &brojMj) == 2) {
 float temperatura, suma = 0.f;
 for (int i = 0; i < brojMj; ++i) {
 fscanf(ulTok, "#%*d#%f ", &temperatura);
 suma += temperatura;
 }
 printf("Dan=%3d, Broj mjerenja=%2d, Prosjek=%7.2f\n",
 dan, brojMj, suma / brojMj);
 }
 fclose(ulTok);
 return 0;
}
