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
	char answer[10];
	do{
		long double a;

		printf("Valor para raiz quadrada: ");
		scanf("%Lf", &a);

		printf("%.15Lf\n", sqrNewton(a,10));
		
		printf("Quer calcular de outro valor?(s/n)\n");
		scanf("%s", answer);

	}while(answer[0] != 'n');	
}
