#include <stdio.h>
int main(void) {
 int polje[4][3] = {{2, 11, 23},
 {29, 31, 37},
{47, 51, 59},
{61, 67, 71}
 };

 int *p = polje[0];
 int i1 = (*p)++;
 int i2 = *p++;
 printf ("%d %d\n", i1, i2);
 printf("\n", *p);

 p = &polje[0][0];
 printf("p= %d\n", *p);
 i1 = ++*p;
 i2 = *++p;
 printf ("%d %d\n", i1, i2);
 printf("p= %d\n", *p);

 p = &polje[1][1];
 printf("p1= %d\n", *p);
 i1 = ++*--p;
 p = &polje[2][2];
 printf("p2= %d\n", *p);
 i2 = ++*p--;
 printf ("%d %d\n", i1, i2);
 printf("p= %d\n", *p);
 return 0;
}