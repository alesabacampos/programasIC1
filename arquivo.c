
#include <stdio.h>
#include <string.h>
#define _dois = 2

int i,j,k,l,m,n,o;
unsigned int p = 10;
char nome[];
float q = 199.90;

int main()
{

    i = j = k = l = m = n = o = 11;


    printf("Olá %s, bom dia! \n", nome);
    printf("%d", NumeroAoQuadradoMaisP(i));

}

int NumeroAoQuadradoMaisP(unsigned int r)
{
    return( ( r * r ) + p);
}
