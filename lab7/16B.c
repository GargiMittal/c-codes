// Lab 7 - Exercise 16B: Center-Aligned Star Triangle Pattern
// Program to print a center-aligned triangle pattern using asterisks
// Row i has (5-i) spaces followed by i stars

#include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf("\t");
        }
        for (j=1;j<=i;j++)
        {
            printf("*\t");
        }
    printf("\n\n");
    }
    return 0;
}