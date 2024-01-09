#include<stdio.h>

int main(){
      int A[10],B[10],C[20],i,j,n,m,k;
    

    printf("Input the amount of elements in 1st array(max 10):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
        C[i]=A[i];
    } 


    printf("Input the amount of elements in second array(max10):");
    scanf("%d",&m);
    for(i=0,j=n;j<m+n;i++,j++)
    {
        printf("Enter the number:");
        scanf("%d",&B[i]);
        C[j]=B[i];
    }
   printf("\nFirst Array is:\t\t");
    for(i=0;i<n;i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\nSecond Array is:\t");
    for(i=0;i<m;i++)
    {
        printf("%d, ",B[i]);
    }
    printf("\nArrays After Merging:\t");
    for(i=0;i<n+m;i++)
    {
        printf("%d, ",C[i]);
    }
   
    

    return 0;
}