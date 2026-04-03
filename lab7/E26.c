// Lab 7 - Exercise 26: Multiplication Table
// Program to print multiplication table (1-10) for a given number
// Takes user input and displays n*1 to n*10

#include<stdio.h>

int main(){
    int n,i;     
    printf("Enter the number you want table of:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
    return 0;
}