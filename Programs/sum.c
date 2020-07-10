#include <stdio.h>

void main()
{
    int num1;
    float num2, sum;

    printf("Enter two numbers: \n");
    scanf("%d%f", &num1,&num2);

    sum = num1+num2;
    printf("Result: %f\n", sum);
}