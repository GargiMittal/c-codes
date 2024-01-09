#include<stdio.h>

int main(){
    int A[20],i,n;
    printf("input the amount of numbers you want[max20]:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}