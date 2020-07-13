/* Write a program to add to two dimensional arrays */
#include <stdio.h>

void main()
{
    int size, i, j, sum[100][100], array[100][100], array1[100][100];

    printf("Enter the size of arrays: \n");
    scanf("%d", &size);

    printf("Enter the values of Array 1:\n");
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter the values of Array 2:\n");
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            sum[i][j] = array[i][j]+array1[i][j];
        }
    }

    printf("Sum of 2 arrays is:\n");
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}