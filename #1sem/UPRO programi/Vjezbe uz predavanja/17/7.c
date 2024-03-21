#include <stdio.h>
void f(int *p, int n) {
 printf ("%d\n", *(p + n));
}
int main(void) {
 int polje[] = {2, 11, 23, 29, 31, 37};
 int *pp;
 pp = &polje[0];
 f(pp++, 2);
 f(pp, 2);
 f(++pp, 2);
 return 0;
}