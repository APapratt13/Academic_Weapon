#include <stdio.h>
void fun(void) {
 int x = 5, y = 15;
 {
 int x = 20;
 y = 25;
 printf("x = %d, y = %d\n", x, y);
 }
 printf("x = %d, y = %d\n", x, y);
}
int main(void) {
 int x = 100;
 printf("x = %d\n", x);
 fun();
 fun();
 printf("x = %d\n", x);
 return 0;
}
