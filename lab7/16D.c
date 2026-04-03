// Lab 7 - Exercise 16D: Spaced Star Triangle Pattern
// Program to print a star triangle with extra spacing between stars
// Row i has (5-i) indentation and i stars with larger spacing

#include<stdio.h>

int main(){
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf("\t");
        }
        for (j=1;j<=i;j++)
        {
            printf("*\t\t");
        }
    printf("\n\n");
    }
    return 0;
}
