#include <stdio.h>

int fatorial(int n){
	
	if(n == 0)
		return 1;
	else if(n > 0)
		return n * fatorial(n - 1);
	else
		return 0;
}

int main(){

	int x;
	do{
		scanf("%d", &x);
		if(x < 7)
			printf("%d\n", fatorial(x));
		else
		{
			int soma = 0;
			for(int i = 1; i <= x; soma += i++);
			printf("%d\n", soma);  
		}
	}while(x != -1);
}
