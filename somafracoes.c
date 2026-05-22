#include <stdio.h>

long double soma = 0;
unsigned long int n;

main()
{
    //scanf("%d", &n);
    n = 0 - 1;
    for(unsigned long int i = 1; i <= n; i++)
    {
        soma = soma + 1 / (long double) i;
        printf("\n%.18Lf", soma);
    }

    printf("\n%.18Lf", soma);
}
