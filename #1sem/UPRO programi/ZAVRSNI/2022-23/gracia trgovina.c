#include <stdio.h>

int brojJednakih(char *trgovina1,char *trgovina2){

    FILE *trg1=fopen(trgovina1,"r");
    FILE *trg2=fopen(trgovina2,"r");

    int t1,t2,b=0;
    if(trg1 != NULL && trg2 != NULL){
        while(fscanf(trg1,"%d",&t1)==1){
            while(fscanf(trg2,"%d",&t2)==1){
                if(t1==t2){
                    b++;
                }
            }
            fseek(trg2,0L,SEEK_SET);
        }
        fclose(trg1);
        fclose(trg2);
        return b;
    
    }else{
        return -1;
    }
}

int main(void) {
   char imePrveDat[128], imeDrugeDat[128];
   int rez;
   scanf("%s %s", imePrveDat, imeDrugeDat);
   rez = brojJednakih(*imePrveDat, *imeDrugeDat);
   printf("Rezultat = %d", rez);
   return 0;
}

