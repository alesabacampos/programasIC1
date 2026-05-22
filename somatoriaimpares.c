#include <stdio.h>

int n, sum = 0;

int main()
{
    for(int i = 1, _ = scanf("%d", &n); i <= n; ((++i) <= n) ? sum = sum + (2 * (i - 1)) - 1: printf("\n%d", sum) );
}
