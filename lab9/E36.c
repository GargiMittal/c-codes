// Lab 9 - Exercise 36: Bubble Sort Algorithm
// Program to sort array elements using bubble sort
// Compares adjacent elements and swaps if needed

#include<stdio.h>

int main(){
    int A[20],i,n,j,k;
    printf("input the amount of numbers you want to sort[max20]:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;i<n-j-1;j++)
        {
            if(A[j]>A[j+1])
            {
                k=A[j];
                A[j]=A[j+1];
                A[j+1]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}