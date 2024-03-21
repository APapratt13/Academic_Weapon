#include <stdio.h>

int main(void) {
 int z1, z2, z3, z4, m;

 printf("Upisite 4 cijela broja (po jednu znamenku) > ");
 scanf("%d %d %d %d", &z1, &z2, &z3, &z4);

 m = z1 * 1000 + z2 * 100 + z3 * 10 + z4;
 
 printf("z1 = %d\nz2 = %d\nz3 = %d\nz4 = %d\nm = %d", z1, z2, z3, z4, m);
 return 0;
}
