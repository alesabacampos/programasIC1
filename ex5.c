#include <stdio.h>

int main ()
{
	char filtro[11] = "aeiouAEIOU";
	char str[100];
	scanf("%s", str);
	for(char *p1 = str; *p1; p1++)
		for(char *p2 = filtro; *p2; p2++)
			if(*p1 == *p2) printf("%c ", *p1);
	printf("\n");  
}
