#include <stdio.h>


int main()
{	
	while(1)
	{
		int n;
		scanf("%d", &n);
	
		if(n == -1)
		return 0; 

		if(n % 2 && n % 3 && n % 5 && n % 7)
			printf("0\n");
		else
		{
			if(!(n % 2) || !(n % 3))
				printf("1\n");
			if(!(n % 5) && !(n % 7))
				printf("2\n");
		}
			
	}
}
