#include <stdio.h>
int main(void) {int novac;int kune, lipe;printf("Upisi kolicinu novca: ");scanf("%d", &novac);kune = novac/100;lipe = novac %100;printf("Kune: %d, Lipe: %d", kune, lipe);return 0;}