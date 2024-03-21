#include <stdio.h>
#include <math.h>

typedef struct {double x; 
                double y;} tTocka;

double udaljToc(tTocka t1, tTocka t2){
    double udalj;
    udalj = sqrt(pow(t2.x - t1.x, 2) + pow(t2.y - t1.y, 2));
    return udalj;
}

int main(void){
    tTocka t1, t2;
    
    printf("Upisite koordinate 1. tocke > ");
    scanf("%lf %lf", &t1.x, &t1.y);

    printf("Upisite koordinate 2. tocke > ");
    scanf("%lf %lf", &t2.x, &t2.y);

    printf("%lf", udaljToc(t1, t2));

    return 0;
}