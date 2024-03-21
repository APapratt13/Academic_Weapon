#include <stdio.h>

int main (void) {
    int Q; //vrijednost upita
    float F, C;

    printf("Program za konverziju Farenheit - Celsius\n");
    
    printf("Za F u C upisite 1, a za obrnuto bilokoji drugi cijeli broj > ");
    scanf("%d", &Q);

    if (Q == 1) {
        printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit > ");
        scanf("%f", &F);
        C = 5.f/9.f * (F -32.f);
        
        printf("    %8.3f st. F = %8.3f st. C", F, C);
    }

    else {
        printf("Upisite temperaturu izrazenu u stupnjevima Celsius > ");
        scanf("%f", &C);
        F = 9.f/5.f * C + 32.f;
        
        printf("    %8.3f st. C = %8.3f st. F", C, F);  
    }

    return 0;
}