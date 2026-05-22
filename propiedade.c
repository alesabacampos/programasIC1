#include <stdio.h>

int main()
{

    for(int i = 1000; i <= 9999; i++)
    {
        int soma = (i % 100) + (i / 100);
        int quadrado = soma * soma;

        if(quadrado == i) printf("O número %d satisfaz a propriedade \n", i);
    }

    return 0;
}
