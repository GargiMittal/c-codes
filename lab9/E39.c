// Lab 9 - Exercise 39: Array Reversal
// Program to reverse the order of elements in an array
// Swaps elements from start and end moving towards middle

#include<stdio.h>

int main(){
    int A[20],i,n,smallest,largest,k;
    // code to input the array
    printf("Input the amount of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
//  code to reverse the array
    for(i=0;i<n/2;i++)
    {
    k=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=k;
    }
//  code to print the array     
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}