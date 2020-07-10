#include <stdio.h>

void main()
{
    int num,f=0;

    printf("Enter Your Number\n");
    scanf("%d",&num);

   for (int i = 2; i < num/2; i++)
   {
       if (num%i==0)
       {
          f=1;
          break;
       }
       
   }

   

    if (f==0)
    {
       printf("Prime\n");
    }else
    {
        printf("Not Prime\n");
    }
    
    

   
}
    