#include <stdio.h>
int *f(int *p) {
 return p - *p;
}
int main(void) {
 int polje[5][3] = {{1, -1, 3},
 {-3, 2, -2},
 {0, 5, -4},
{-4, -6, 2},
 {2, 1, 0}
 };
 int *p = &polje[1][1];
 p = f(p);
 printf ("%d\n", *p);
 p = f(p + *p);
 printf ("%d\n", *p);
 return 0;
}