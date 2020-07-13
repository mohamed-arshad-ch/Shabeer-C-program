/* Write a program to identify whether a string is a palindrome or not */
#include <stdio.h>
#include <string.h>

void main()
{
    int i, length, flag = 0, size = 0;
    char string[100];

    printf("Enter a string:\n");
    scanf("%s", string);

    length = strlen(string);

    for(i = 0; i<length; i++)
    {
        if(string[i] != string[length-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Entered string is a palindrome\n");
    }
    else
    {
        printf("Entered string is not a palindrome\n");
    }
}