#include <stdio.h>
void getArray(int arr[10],int limit);
void displyArray(int arr[10],int limit);
void main(){

    int arr[10],limit;

    printf("Enter Your Limit");
    scanf("%d",&limit);

    getArray(arr,limit);
    displyArray(arr,limit);



}

void getArray(int a[],int lim){

    printf("Enter Array Data");
    for (int i = 0; i < lim; i++)
    {
        scanf("%d",&a[i]);
    }
    
    


}
void displyArray(int b[],int lii){

    
    for (int i = 0; i < lii; i++)
    {
        printf("%d",b[i]);
    }

}


