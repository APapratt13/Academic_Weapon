#include <stdio.h>

int main(void)
{
    int n, i, b;
    printf("Unesite broj rijeci brojalice > ");
    scanf("%d", &n);

    if (n>0)
    {
        i = 0;
        for (b = 1; b<=n; b++)
        {
            i = b;
            while (i>3)
            {
                i -=3;
            }

            if (i == 1)
            {
                printf("eci ");
            }
            else if (i%2 == 0)
            {
                printf("peci ");
            }
            else if (i%3 == 0)
            {
                printf("pec ");
            }
        }
    }else{
        printf("KRIVI UNOS");
    }
    return 0;
}