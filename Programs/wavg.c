/* Grades are computed using a weighted average. Suppose that the written test counts 70%,        
lab exams 20%, and assignments 10%. */
#include <stdio.h>

void main()
{
    int wTest, lExam, assignments;
    float wAvg;

    printf("Enter the marks scored in:\n");
    printf("Written test:\n");
    scanf("%d", &wTest);
    printf("Lab exams:\n");
    scanf("%d", &lExam);
    printf("Assignments:\n");
    scanf("%d", &assignments);

    wAvg = (wTest*70)/100 + (lExam*20)/100 + (assignments*10)/100;
    printf("Grade of the student is: %f\n", wAvg);
}