/* Write a program to check whether a student has passed or failed in a subject after he or 
she enters their mark (pass mark for a subject is 50 out of 100). */
#include <stdio.h>

void main()
{
    float mark;

    printf("Enter the mark: \n");
    scanf("%f", &mark);

    if(mark>=50)
    {
        printf("Congrats! Passed with %f/100 \n", mark);
    }
    else
    {
        printf("Failed, you need to score atleast 50 to pass (%f/100) \n", mark);
    }
}