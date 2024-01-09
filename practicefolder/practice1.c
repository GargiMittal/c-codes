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
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(A[i]>A[j])
            {
                k=A[j];
                A[j]=A[i];
                A[i]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}