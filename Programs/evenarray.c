/* Write a program to find the number of even numbers in an array */
#include <stdio.h>

void main()
{
    int size, i, array[100], count = 0;

    printf("Enter the size of an array: \n");
    scanf("%d", &size);

    printf("Enter the values of array: \n");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
        
        if(array[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("Number of even numbers in the given array is: %d\n", count);
}