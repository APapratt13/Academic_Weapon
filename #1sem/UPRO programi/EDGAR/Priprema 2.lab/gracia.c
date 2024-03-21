#include <stdio.h>
int i,j,k=0;
for (i=0,i<3,i=i+1){
    for(j=0;j<3;j=j+1){
        k=k+i*i+j*j;
        if(k>10){
            goto a;
        }
    }
}
a: 
  printf("%d",k)
