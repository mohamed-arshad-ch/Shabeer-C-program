/* Write a program to interchange the values of two arrays */
#include <stdio.h>

void main()
{
    int size, i, temp, array[100], array1[100];

    printf("Enter the size of arrays: \n");
    scanf("%d", &size);

    printf("Enter the values of Array 1:\n");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the values of Array 2:\n");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &array1[i]);
    }

    for(i = 0; i<size; i++)
    {
        temp = array[i];
        array[i] = array1[i];
        array1[i] = temp;
    }
    printf("Arrays after swapping:\n");

    printf("Array 1:\n");
    for(i = 0; i<size; i++)
    {
        printf("%d\t\n", array[i]);
    }

    printf("Array 2:\n");
    for(i = 0; i<size; i++)
    {
        printf("%d\t\n", array1[i]);
    }
}