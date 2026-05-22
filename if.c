#include <stdio.h>

int i=5, j=7;

main()
{

    if((i>3) && (j<=7) && (i != j)) j++;
    printf("%d \n", j);

    unsigned char a = 5;
    unsigned char b = 7;
    unsigned char y = a & b; //101 & 111 = 101 = 5

    printf("%d", y);

}
