/* Write a program to print the multiplication table of given number */
#include <stdio.h>

void main()
{
    int n, i, m;

    printf("Enter a number: \n");
    scanf("%d", &n);
    
    for(i = 0; i<=10; i++)
    {
        m = i*n;
        printf("%d x %d = %d\n", i, n, m);
    }
}