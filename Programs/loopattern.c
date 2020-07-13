/* Write a program to print the following pattern (hint: use nested loop) */
#include <stdio.h>

void main()
{
    int n = 5, i, m;

    for(i = 0; i<=n; ++i)
    {
        for(m = 1; m<=i; ++m)
        {
            printf("%d ", m);
        }
        printf("\n");
    }
}
    