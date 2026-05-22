#include <math.h>
#include <stdio.h>

int main()
{
	for(int i = 1000; i <= 9999; i++)
		if(pow(((i/100) + (i%100)), 2) == i) 
			printf("%d\n",i);
}
