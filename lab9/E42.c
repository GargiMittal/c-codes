#include<stdio.h>

int main(){
    int A[20],B[20],i,n;
    // code to input the array
    printf("Input the amount of elements in array(max 20):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
         B[i]=A[i];
    }
    printf("Given Array is copied to Another Array B:");
     for(i=0;i<n;i++)
    {
        printf("%d, ",B[i]);
    }

    return 0;
}