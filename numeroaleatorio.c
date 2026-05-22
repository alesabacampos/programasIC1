#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	while(1)
	{
		double x;
		srand(time(NULL));
		x = (double) rand() / RAND_MAX;
		printf("%lf \n", x);
	}
}
