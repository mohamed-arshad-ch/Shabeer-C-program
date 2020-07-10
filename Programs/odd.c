#include <stdio.h>

void main()
{
    int n, i, sum = 0;

    printf("Enter the limit: \n");
    scanf("%d", &n);

    for(i = 1; i<=n; i+=2)
    {
        sum += i;
        //printf("%d + = %d", i, sum);
    }
    printf("Sum of odd numbers: %d\n", sum);
}
    