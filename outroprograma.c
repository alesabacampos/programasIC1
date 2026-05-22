#include <stdio.h>

main()
{
    int x, y;
    float a;

    x = 5;
    y = 2;

    a = (float)x/y; // (float)x, "(float)" é um modulador, muda temporariamente o tipo da variável
    printf("%f", a);

}
