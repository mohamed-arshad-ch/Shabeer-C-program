/* Write a program to accept an array and display it on the console using functions */
#include <stdio.h>

int size, array[100];

void getArray();
void displayArray();

void main()
{
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    getArray();
    displayArray();
}

void getArray()
{
    printf("Enter the values of Array:\n");

    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void displayArray()
{
    printf("Entered values are:\n");
    
    for(int i = 0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}