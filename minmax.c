#include <stdio.h>

int tamanho = 5;
int sequencia[5] = {10, 14, 8, 7, 3};

main()
{
    int max, min, soma;
    max = sequencia[0];
    min = sequencia[0];
    soma = sequencia[0];
    for(int i = 1; i < tamanho; i++)
    {
        soma += sequencia[i];

        if(sequencia[i] > max) max = sequencia[i];
        else if(sequencia[i] < min) min = sequencia[i];
    }
    float med = (float)soma / (float)tamanho;

    printf("O maximo da sequencia e %d, enquanto o minimo e %d e a media e %.3lf", max, min, med);
}
