#include <stdio.h>
#include <stdlib.h>
/* za glupe poput mene, 
    ovo je pravokutnik:        a ovo trokut:                                    
    _________________                       / \    
    |               |                      /   \  
    |               |                     /     \ 
    |_______________|                    /_______\

*/


int ProvjeriPravokutnik(int xA, int xB, int yA, int yB){
    if ((xA==xB) || (yB==yA)){
        return 0;
    }else{
        return 1;
    }
} 

int IzracunajDuljinuStranice(int t1, int t2){
    int stranica = abs(t2-t1);
    return stranica;
}

int IzracunajOpseg(int a, int b){
    return 2*(a+b);
}

int IzracunajPovrsinu(int a, int b){
    return a*b;
}

void IzracunaOpsegPovrsinu(int *o, int *p){
    int x1, x2, y1, y2;

    printf("Unesite koordinate za tocku 1 > ");
    scanf("%d %d", &x1, &y1);

    printf("Unesite koordinate za tocku 2 > ");
    scanf("%d %d", &x2, &y2);
+
    int a = IzracunajDuljinuStranice(x1, x2);
    int b = IzracunajDuljinuStranice(y1, y2);

    *o = IzracunajOpseg(a,b);
    *p = IzracunajPovrsinu(a,b);

    if (!ProvjeriPravokutnik(x1, x2, y1, y2)){
        *o = -1;
        *p = -1;
    }
}