#include <stdio.h>

int main(void){
    float a1, a2, b1, b2;
    printf("Upisite granice 1. intervala > ");
    scanf("%f %f", &a1, &a2);
    printf("Upisite granice 2. intervala > ");
    scanf("%f %f", &b1, &b2);

    if ((a1 <= a2) && (b1 <= b2)){

        if (a1 >= b1){
            printf("Granice intervala su neispravne");
        }else{
            if ((a1 < b1) && (a2 > b2)){
                printf("Presjek intervala je [%.3f, %.3f]", b1, b2);
            }else if ((a2 < b1)){
                printf("Presjek intervala je prazan skup");
            }else if ((a1 < b1) && (a2 < b2)){
                printf("Presjek intervala je [%.3f, %.3f]", b1, a2);
            }else if ((a2 == b1) && (b1 == b2)) {
                printf("Presjek intervala je [%.3f, %.3f]", b1, b2);
            }
        }
    }else{
        printf("Granice intervala su neispravne");
    }
    return 0;
}