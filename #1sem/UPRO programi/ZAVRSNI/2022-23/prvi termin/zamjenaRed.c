#include <stdio.h>

float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int indRed2){
    float pom;
    float sum1=0.0;
    float sum2=0.0;
    for (int i=0; i<brStup; i++){
        sum1 += *(polje  + indRed1*brStup + i);
        sum2 += *(polje  + indRed2*brStup + i);

        pom = *(polje  + indRed1*brStup + i);
        *(polje  + indRed1*brStup + i) = *(polje  + indRed2*brStup + i);
        *(polje  + indRed2*brStup + i) = pom;
    }

    if (indRed1<indRed2){
        if ((sum1-sum2) <0){
            return sum2-sum1;
        }else{
            return sum1 - sum2;
        }
    }else{
        if ((sum2-sum1) <0){
            return sum1-sum2;
        }else{
            return sum2 - sum1;
        }
    }

}