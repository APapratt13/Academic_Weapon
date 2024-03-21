#include <stdio.h>
int main(void) {
 int polje[] = {2, 3, 5, 7, 11, 23, 29};
 int *p1 = &polje[0], *p2 = NULL;
 p2 = &polje[5];
 printf ("%d %d\n", *p1, *p2);
 printf ("%d %d\n", *(p2 - 1), *p2 - 1);
 printf ("%d %d\n", p2 - p1, *p2 - *p1);
 return 0;
}