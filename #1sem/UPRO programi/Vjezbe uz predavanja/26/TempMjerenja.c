#include <stdio.h>

int main(void){
    FILE *ulaz = fopen("mjerenja.txt", "r");

    int rbr, n;
    
    //#ddd#NN-#hh#x.x-#hh#xx.x#hh#xx.x#...hh#xx.x#
    while (fscanf(ulaz,"#%d#%d", &rbr, &n) == 2) {
        float temp, sumtemp =0.f;

        for (int i=0; i<n; ++i){
            fscanf(ulaz, "#%*d#%f" , &temp);
            sumtemp += temp;
        }
        printf("Dan= %3d, Broj mjerenja= %2d, Prosjek= %7.2f\n", rbr, n, (sumtemp/n));
    }

    fclose(ulaz);
    return 0;
}