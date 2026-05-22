#include <stdio.h>

int fatorial();
double formula2();
double formula3();
double formula4();

int main()
{
    int selector, n, k;
    scanf("%d/n", &selector);
    scanf("%d/n", &n);

    switch(selector)
    {
        case 1:
            printf("%d", fatorial(n));
            break;
        case 2:
            scanf("%d", &k);
            printf("%f", formula2(n, k));
            break;
         case 3:
            printf("%f", formula3(n));
            break;
        case 4:
            printf("%f", formula4(n));
            break;
    }
}

int fatorial(int n)
{
    int produto = 1;

    for(int  i = 2; i <= n; i++)
    {
        produto = produto * i;
    }

    return produto;
}

double formula2(int n, int k)
{
    double resultado = ((double)fatorial(n)) / ((double)fatorial(k) * fatorial(n - k));
    return resultado;
}

double formula3(int n)
{
    double soma = 1;
    for(int i = 2; i <= n; i++)
    {
    soma += ((double)i / fatorial(i));
    }
    return soma;
}

double formula4(int n)
{
    double soma = 1;
    for(int i = 2; i <= n; i++)
    {
    soma += ((double)i / (double)fatorial(2*i - 1));
    }
    return soma;
}

