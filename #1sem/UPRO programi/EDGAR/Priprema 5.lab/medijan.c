#include <stdio.h>

float median(float a, float b, float c){
    float med=0;
    if ((a<c && a>b)||(a>c && a<b)){
        med = a;
    }
    else if ((b<c && b>a)||(b>c && b<a)){
        med = b;
    }
    else if ((c<b && c>a)||(c>b && c<a)){
        med = c;
    }else if (a==b && b ==c && a==c){
        med = a;
    }

    return med;
}

int main(void){
    float a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%f %f %f", &a, &b, &c);

    float sred, aps=0;
    sred = (a+b+c)/3;
    if (sred <= median(a, b, c)){
        aps = median(a, b, c) - sred;
    }else{
        aps = sred - median(a, b, c);
    }
    
    printf("Apsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f", aps);

    return 0;
}
