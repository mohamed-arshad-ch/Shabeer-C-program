/* 1> Accept a char input from the user and display it on the console */
#include <stdio.h>

void main()
{
    char c;

    printf("Enter a char: \n");
    scanf("%c", &c);
    printf("The character you entered is: %c\n", c);
}