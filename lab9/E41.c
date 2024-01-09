#include<stdio.h>

int main(){
    //program to find smallest and largest element in an array
     int A[20],i,n,smallest,largest,found,k;
    // code to input the array
    printf("Input the amount of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    // code to find the element in array
    printf("Enter the number you want to found in the array:");
    scanf("%d",&k);
    found=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==k)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    printf("number found at index no:%d",i);
    else
    printf("Number not found");
    return 0;
}