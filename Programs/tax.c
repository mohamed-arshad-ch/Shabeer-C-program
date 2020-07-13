/* Income tax is calculated as per the following table  */
#include <stdio.h>

void main()
{
    int income;
    float tax;

    printf("Enter the annual income:\n");
    scanf("%d", &income);

    if(income <= 250000)
    {
        printf("No tax!");
    }
    else if(income > 250000)
    {
        tax = income*5/100;
        printf("tax: %f", tax);
    }
}