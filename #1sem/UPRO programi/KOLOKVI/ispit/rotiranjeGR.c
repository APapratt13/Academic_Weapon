#include <stdio.h>

int main(void){
    int n;
    printf("Ucitajte red matrice> ");
    scanf("%d", &n);

    while (n<2 || n>10){
        printf("Ucitajte red matrice> ");
        scanf("%d", &n);
    }

    int a[n][n];
    printf("Ucitajte %d elemenata cjelobrojne matrice> ", (n*n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ucitana matrica:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j]/10 != 0){
                printf("  %d", a[i][j]);
            }else{
                printf("   %d", a[i][j]);
            }
        }
        printf("\n");
    }

    int x = 0, y = 0, z = 0, w = 0, h= 0;

    // prvi stupac prema dolje
    x = a[0][0];
    for (int i = 1; i < n; i++){
        if (i == (n-1)){
            y = a[i][0]; //da moze tome pristupiti kutna kretnja
        }
        if (i%2 == 0){
            a[i][0]=h;
        }else{
            h = a[i][0];
            a[i][0] = a[i-1][0];
        }
    }

    //dolje red
    for (int i = 1; i < n; i++){
        if (i == (n-1)){
            w = a[n-1][i]; //da moze tome pristupiti kutna kretnja
        }
        if (i%2 == 0){
            a[n-1][i]=h;
        }else{
            h = a[n-1][i];
            a[n-1][i] = a[n-1][i-1];
        }
    }

    //desni stupac
    for (int i = (n-1); i >=0; i--){
        if (i == (n-1)){
            z = a[i][n-1]; //da moze tome pristupiti kutna kretnja
        }
        if (i%2 != 0){
            a[i][n-1]=h;
        }else{
            h = a[i][n-1];
            a[i][0] = a[i+1][n-1];
        }
    }

    //gornji red
    for (int i = (n-1); i >=0; i--){
        if (i == 1){
            a[0][1]=x;
        }
        if (i%2 != 0){
            a[0][i]=h;
        }else{
            h = a[0][i];
            a[0][i] = a[0][i+1];
        }
    }

    a[1][0] = x;
    a[n-1][1] = y;
    a[n-2][n-1] = w;
    a[0][n-2] = z;

    printf("Posmaknuta matrica: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j]/10 != 0){
                printf("  %d", a[i][j]);
            }else{
                printf("   %d", a[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}