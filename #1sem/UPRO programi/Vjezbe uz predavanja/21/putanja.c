#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void inicijalizirajPolje(int m, char *polje){
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            *(polje + i*m + j)= '.';
        }
    }
}

void ispisiPolje(int m, char *polje){
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            printf("%2c", *(polje + i*m + j));
        }
        printf("\n");
    }
}

void crtajPutanju(int m, char *polje, char slovo){
    int i=0, j=0;
    *(polje + i*m + j) = slovo;

    int r;
    while(i<m-1 && j<m-1){
        r = rand() % 2;// 0 je za dolje, 1 je za desno
        
        if (!r){ //ako je r za dolje 0
            ++i;
        }else{ // ako je za desno 1
            ++j;
        }

        *(polje + m*i + j) = (slovo);
    }
}

int main(void){
    char polje[10][10];
    
    inicijalizirajPolje(10, &polje[0][0]);
    ispisiPolje(10, &polje[0][0]);
    printf("\n");
    
    crtajPutanju(10, &polje[0][0], 'O');
    ispisiPolje(10, &polje[0][0]);
    printf("\n");

    crtajPutanju(10, &polje[0][0], 'x');
    ispisiPolje(10, &polje[0][0]);
    printf("\n");

    return 0;
}
