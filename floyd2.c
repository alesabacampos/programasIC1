#include <stdio.h>

int main()
{
	int n, k = 1;
	scanf("%d", &n);
	printf("\n");
	int matriz[n][n];

	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= i; j++)
			matriz[i][j] = k++;
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
			printf("%d ", matriz[i][j]);
		printf("\n");
	}
}


