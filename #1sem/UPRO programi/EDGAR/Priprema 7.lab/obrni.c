#include <stdio.h>

void obrni (char *src, char *dst){
    int lenght = 0, k=0;
    while (*(src+k) != '\0'){
        if (*(src+k)  == '\n' && *((src+k)+1)=='\0'){
            *(src+k)  = '\0';
        }
        ++lenght, ++k;
    }

    for(int i=0; i<lenght; i++){
        *(dst+lenght-i-1)=*(src+i);
    }
    *(dst+lenght)='\0';
}


int main (void){
    char src[32], dst[32];
   
   scanf("%s", src);

   obrni(src, dst);


   printf("%s", dst);


   return 0;
}