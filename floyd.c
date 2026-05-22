#include <stdio.h>

main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    int n;
    scanf("%d", &n);
    printf("\n");

    for(; j < n; i++)
    {
        printf("%d ", i);
        k++;
        if(k >= j)
        {
        k = 1;
        printf("\n");
        j++;
        }
    }

    printf("\nTired of lying in the sunshine \nStaying home to watch the rain \nAnd you are young and life is long \nAnd there is time to kill today");
}
