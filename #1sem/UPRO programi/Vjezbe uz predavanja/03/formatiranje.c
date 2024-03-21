#include <stdio.h>

int main(void) {
    float napierConst = 2.71828f;
    float saturnSunDist = 1.43344e12f;
    float planckConst = 6.62607e-34f;

    printf("Napierova konstanta: ");
    printf("\n%.6f", napierConst);
    printf("\n  %.2f", napierConst);
    printf("\n %.3f", napierConst);
    printf("\n  %.10f\n", napierConst);

    printf("\nSrednja udaljenost Saturna i Sunca: ");
    printf("\n%12f", saturnSunDist);
    printf("\n%12.2f", saturnSunDist);
    printf("\n %.4e\n", saturnSunDist);

    printf("\nPlanckova konstanta: ");
    printf("\n%.6f", planckConst);
    printf("\n  %.36f", planckConst);
    printf("\n%.5e", planckConst);
    printf("\n  %.10e\n", planckConst);

    return 0;
}