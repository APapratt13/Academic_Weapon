#include <stdio.h>
static int x = 25;
void fun1(void) {
 static int x = 5;
 printf("%d\n", ++x);
}
void fun2(void) {
 int x = 10;
 printf("%d\n", ++x);
}
void fun3(void) {
 printf("%d\n", ++x);
}
int main(void) {
 x++;
 {
 static int x = 15;
 {
 int x = 20;
 printf("%d\n", x++);
 }
 printf("%d\n", x++);
 }
 printf("%d\n", x++);
 fun1();
 fun2();
 fun3();
 fun1();
 fun2();
 fun3();
 return 0;
}