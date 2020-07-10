#include <stdio.h>

void main()
{
    int P;
    float R, n, SI;

    printf("Enter the amount, rate and years: \n");
    scanf("%d %f %f", &P, &R, &n);

    SI = (P*R*n)/100;
    printf("Simple interest for the given input is: %f\n", SI);
}