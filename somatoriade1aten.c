#include <stdio.h>

int n, soma1, soma2;

int somaComum(int n1);
int somaGauss(int n2);

void main()
{

    printf("Digite o n final da soma: ");
    scanf("%d/n", &n);

    soma1 = somaComum(n);
    soma2 = somaGauss(n);

    printf("A soma equivale a %d pela soma manual, e a %d pela formula da soma", soma1, soma2);

}

int somaComum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; sum += i++);
    return sum;
}

int somaGauss(int n)
{
    int sum = ((1.0 + (float)n) / 2.0) * (float)n;
    return sum;
}


