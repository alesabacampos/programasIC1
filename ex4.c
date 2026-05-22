#include <stdio.h>
int main()
{
	while(1)
	{
		int x;
		scanf("%d", &x);
		
		if((x % 2 != 0) && (x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0))
			printf("0 \n");
		else
		{
			if((x%2 == 0) || (x%3 == 0))
				printf("1 \n");
			if((x%5 == 0) && (x%7 == 0))
				printf("2 \n");
		}
	}
	
}
