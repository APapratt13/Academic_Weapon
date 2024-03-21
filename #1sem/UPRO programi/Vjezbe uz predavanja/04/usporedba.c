#include <stdio.h>

int main(void){
    int a, b, x;
    printf("Upisite dva cijela broja > ");
    scanf("%d %d", &a, &b);

    if (a == b){
        printf("Brojevi su jednaki\na = b = %d", a);
    }
    else if (a > b){
        x = b;
        b = a;
        a = x;
        printf("Zamjena obavljena\na = %d, b = %d",a, b);
    }
    else {
        printf("Zamjena nije obavljena\na = %d, b = %d",a, b);
    }

    return 0;
}