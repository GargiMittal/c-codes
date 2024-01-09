#include<stdio.h>

int main(){
    int n,i;
    double fact;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("Factorial of %d is:%d\n",n,fact);
    return 0;
}