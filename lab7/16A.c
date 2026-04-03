// Lab 7 - Exercise 16A: Right-Aligned Star Triangle Pattern
// Program to print a right-aligned triangle pattern using asterisks
// Row i contains i stars (1st row=1 star, 2nd row=2 stars, etc.)

#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*\t");
        }
    printf("\n\n");
    }
    return 0;
}