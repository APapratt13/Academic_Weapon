#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//radi!
double dist2D(double *mat, double *rez, int vel){
    double duzina, visina;
    duzina = *(mat + 0*2 + 0);
    visina = *(mat + 0*2 + 1);
    
    rez[0] = sqrt((pow(duzina,2)) + pow(visina,2));
    double ukup = rez[0];
    
    for (int i=1; i<vel; i++){
        duzina = fabs(*(mat + (i-1)*2 + 0) - *(mat + i*2 + 0));
        visina = fabs(*(mat + (i-1)*2 + 1) - *(mat + i*2 + 1));
        
        rez[i] = sqrt(pow(duzina,2) + pow(visina,2));
        ukup += rez[i];
    }
}

int main(void)
{
    int vel;
    double duz;
    
    scanf("%d", &vel);
    
    double mat[vel][2];
    double rez[vel];
    
    for (int i = 0; i < vel; i++)
    {
        scanf("%lf %lf", &mat[i][0], &mat[i][1]);
    }
    
    duz = dist2D(&mat[0][0], &rez[0], vel);
    
    for (int i = 0; i < vel; i++)
    {
        printf("%.5lf %.5lf %.5lf\n", rez[i], mat[i][0], mat[i][1]);
    }
    
    printf("%.5lf", duz);

    return 0;
}


