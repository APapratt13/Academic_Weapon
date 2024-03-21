#include <stdio.h>

//euklidov način traženja djelitelja: http://www.mathos.unios.hr/~mdjumic/uploads/diplomski/REN06.pdf

int djelitelj(int a, int b){
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void){
    int br, naz;

    printf("Upisite brojnik i nazivnik: ");
    scanf("%d %d", &br, &naz);

    printf("Razlomak: %d/%d", br, naz);

    int BR, NAZ;
    BR = br/djelitelj(br, naz);
    NAZ = naz/djelitelj(br, naz);

    if (NAZ == 1){
        printf("\nReduciran: %d", BR);
    }else{
        printf("\nReduciran: %d/%d", BR,NAZ);
    }

    return 0;
}