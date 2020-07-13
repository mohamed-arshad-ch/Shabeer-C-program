/* Write a program to sort an array in descending order */ 
#include <stdio.h>

void main()
{
    int size, temp, i, j, array[100];

    printf("Enter the size of an array: \n");
    scanf("%d", &size);

    printf("Enter the values of array: \n");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(array[i]<array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i<size; i++)
    {
        printf("%d\t\n", array[i]);
    }
}