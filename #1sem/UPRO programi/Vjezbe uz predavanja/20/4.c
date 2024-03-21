#include <stdio.h>
int main(void) {
 static int i = 5;
 int prviPut = 1;
 labela:
 {
 static int i = 10;
 int j = 15;
 printf("%d %d\n", i, j);
 i++;
 j++;
 }
 i++;
 printf("%d\n", i);
 if (prviPut) {
 prviPut = 0;
 goto labela;
 }
 return 0;
}