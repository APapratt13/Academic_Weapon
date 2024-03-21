#include <stdio.h>
int main(void) {
 int polje[2][3] = {{2, 11, 23}, {47, 51, 59}};
 int *p = &polje[0][1], i = 3;
 p += i;
 *(--p) = --i;
 printf ("%d %d %d %d\n", *p, polje[1][0], polje[1][1], polje[1][2]);
 return 0;
}