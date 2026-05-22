#include <stdio.h>
#include <math.h>

int main()
{
	for(int i = 1000; i <= 9999; i++)
	{
		int op = pow(((i/100) + (i%100)), 2);
		if(op == i)
			printf("%d\n", i);
	}
}
