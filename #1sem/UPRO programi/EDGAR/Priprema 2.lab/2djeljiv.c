#include <stdio.h>

int main(void) {
    int n;
    printf("Unesite broj > ");
    scanf("%d", &n);
    //2, 3, 5, 7
    if (n>0) {

        if (n % 2 == 0) {
        printf("Broj je djeljiv s brojem %d.\n", 2);
        }if (n % 3 == 0) {
            printf("Broj je djeljiv s brojem %d.\n", 3); 
        }if (n % 5 == 0) {
            printf("Broj je djeljiv s brojem %d.\n", 5); 
        }if (n % 7 == 0) {
            printf("Broj je djeljiv s brojem %d.\n", 7); 
        }else if (((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 == 0))||(n==1)){
            printf("Broj nije djeljiv s brojevima 2, 3, 5, 7.");
        }

    }else {
        printf("Unesen je pogresan broj!");
    }

    return 0;
}