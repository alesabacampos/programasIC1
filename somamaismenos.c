#include <stdio.h>
#include <math.h>

int n, sum = 0;

main()
{

    scanf("%d", &n);

    //for(int i = 1, _ = scanf("%d", &n); i <= n; sum = (i%2 != 0) ? sum + i++: sum - i++);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(-1, i+1) * i;
    }


    printf("%d", sum);
}
