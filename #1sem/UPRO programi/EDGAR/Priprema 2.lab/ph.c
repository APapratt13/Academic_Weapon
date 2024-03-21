#include <stdio.h>

int main(void)
{
    int ph;
    printf("Unesite pH vrijednost otopine > ");
    scanf("%d", &ph);
    
    if (ph >= 0 && ph <= 14)
    {
        if ((ph >= 0) && (ph < 7))
        {
            printf("Otopina je kisela.");
        }
        if (ph == 7)
        {
            printf("Otopina je neutralna.");
        }
        if ((ph > 7) && (ph <= 14))
        {
            printf("Otopina je luznata.");
        }
    }else{
        printf("KRIVI UNOS");
    }
    return 0;
}