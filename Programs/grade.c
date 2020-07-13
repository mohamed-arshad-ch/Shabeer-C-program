/* Write a program to show the grade obtained by a student after he/she enters their total mark 
percentage. */
#include <stdio.h>

void main()
{
    float tmark;

    printf("Enter the mark: \n");
    scanf("%f", &tmark);

    if(tmark>=90)
    {
        printf("Grade A \n");
    }
    else if(tmark>=80)
    {
        printf("Grade B \n");
    }
    else if(tmark>=70)
    {
        printf("Grade C \n");
    }
    else if(tmark>=60)
    {
        printf("Grade D \n");
    }
    else if(tmark>=50)
    {
        printf("Grade E \n");
    }
    else if(tmark<50)
    {   
        printf("Failed \n");
    }
    else
    {
        printf("Invalid! \n");
    }
}