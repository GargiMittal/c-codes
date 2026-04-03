// Lab 7 - Exercise 24: Factorial Calculation
// Program to calculate factorial of a number using loop
// Multiplies all integers from 1 to n

#include<stdio.h>

int main(){
    int n,i;
    double fact=1;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("Factorial of %d is:%lf\n",n,fact);
    return 0;
}