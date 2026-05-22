#include <stdio.h>

long double sqrNewton(long double a, int i)
{
	long double value;
	if(i)
	{
		long double xanterior = sqrNewton(a, i-1);
		value = 0.5 * (xanterior + (a/xanterior));
	}else
		value = a / 2;
	return value;
}

int main()
{
	long double a;
	scanf("%Lf", &a);
	printf("%.15Lf\n", sqrNewton(a,10));	
}
