#include<stdio.h>
//Program to swap two arrays
int main(){
    int A[10],B[10],i,j,n,m,k,big,small;
    
printf("Input the amount of elements in 1st array(max 10):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    } 


    printf("Input the amount of elements in second array(max10):");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter the number:");
        scanf("%d",&B[i]);
    }
    if(m>n){big=m;small=n;}
    else  {big=n;small=m;}

    for(i=0;i<big;i++)
        {
        k=A[i];
        A[i]=B[i];
        B[i]=k;
        }
        printf("\n After Swapping\n\n A is:");
     for(i=0;i<m;i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\n B is:");
     for(i=0;i<n;i++)
    {
        printf("%d, ",B[i]);
    }


    return 0;
}