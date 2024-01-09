#include<stdio.h>

int main(){
     int i,n,A[10],element,location;
     printf("Input the amount of elements in array(max 10):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    printf("Enter the location of number you want to delete:");
    scanf("%d",&location);
     for(i=location-1;i<n;i++)
    {
        A[i]=A[i+1];
    }

    printf("Array after Deletion::");
    
 for(i=0;i<n-1;i++)
    {
        printf("%d, ",A[i]);
    }

    return 0;
}