#include <stdio.h>

long double somatoriaFatorial(long long int n);
void fatorial(long long int n, long long int*k);

int main()
{
    long long int n;
    scanf("%Ld", &n);
    printf("somatoria = %.16Lf", somatoriaFatorial(n));
}

long double somatoriaFatorial(long long int n)
{
    long double sum = 0;
    for(long long int i = 1; i <= n; i++)
    {
        long long int k = 1;
        fatorial(2 * i - 1, &k);
        sum += (2.0 * i)/k;
        printf("%Ld: %.16Lf \n", i, sum);
    }
    return sum;
}

void fatorial(long long int n, long long int* k)
{
    if(n >= 1)
    {
        *k *= n;
        fatorial(n-1, k);
    }
}

