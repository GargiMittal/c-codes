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
    printf("Enter the number you want to insert:");
    scanf("%d",&element);
    printf("Enter the location you want the number to be in:");
    scanf("%d",&location);

    for(i=n;i>n-location;i--)
    {
        A[i]=A[i-1];
    }

    A[location-1]=element;
    printf("Array after insersion:");
    
 for(i=0;i<n+1;i++)
    {
        printf("%d, ",A[i]);
    }

    return 0;
}