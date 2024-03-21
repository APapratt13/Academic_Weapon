#include <stdio.h>
#include <math.h>
#define PI 3.14f

int main(void) {
    float r; //treba upisati realan br veći od 0
    float V;
    
    printf("Upisite radijus kugle > ");
    scanf("%f", &r);

    if (r > 0) {
        V = 4.f/3 *PI *(pow(r,3.f)); //formula za volumen
        printf("Volumen kugle radijusa %.2f je %.2f", r, V);
    }
    else {
        printf("Neispravan radijus kugle");
    }

    return 0;
}
