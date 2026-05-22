#include <stdio.h>

int main()
{
    unsigned long long int n = 0;
    n -= 1;
    printf("%ulld", n);
    long double soma = 0;
    for(int i = 1; i <= n; i++)
    {
        soma += 1.0 / i ;
        printf("%llf \n", soma);
    }

    printf("%llf", soma);
}
