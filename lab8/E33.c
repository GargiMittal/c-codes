// Lab 8 - Exercise 33: Sum Until Zero (Do-While Loop)
// Program to sum integers until user enters 0
// Demonstrates do-while loop usage for input validation

#include<stdio.h>

int main(){
    int n,sum=0;
    do{
        printf("Enter number to add:");
        scanf("%d",&n);
        sum=sum+n;
    }while(n!=0);
    printf("sum of the given integers is:%d",sum);
    return 0;
}