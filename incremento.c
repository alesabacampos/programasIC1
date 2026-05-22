#include <stdio.h>

main()
{

int x,y,z;

x = 10;
y = x++; //usa o valor, então incrementa: y = x = 10, x = x+1 = 11
z =  ++x;//incrementa, então usa o valor: x = x + 1 = 12, y = x + 1 = 12

printf("%d, %d, %d", x, y, z);

}
