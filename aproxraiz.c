#include <stdio.h>

double a, x;

int main()
{
    printf("%f", aproximarRaiz(2, 3));
}

double aproximarRaiz(double a, int n)
{
    double x = a / 2;
    for(int i = 0; i < n; i++)
    {
        x = (1/2) * (x + (a / x));
    }

    return
}
