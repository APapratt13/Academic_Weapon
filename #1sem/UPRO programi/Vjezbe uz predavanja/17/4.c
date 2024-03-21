#include <stdio.h>
int main(void) {
 int polje[4][3] = {{2, 11, 23},
 {29, 31, 37},
{47, 51, 59},
{61, 67, 71}
 };
 int *p1 = NULL, *p2 = NULL, *p3 = NULL;
 p1 = &polje[0][1];
 p2 = p1 + 5;
 p3 = &polje[3][1];
 printf ("%d %d\n", *p1, *p2);
 printf ("%d %d\n", *(p1 + 3), *p1 + 3);
 printf ("%d %d\n", p3 - p2, *p3 - *p2);
 return 0;
}
