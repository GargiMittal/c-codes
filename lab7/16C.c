// Lab 7 - Exercise 16C: Alphabet Triangle Pattern
// Program to print a triangle with alphabet characters (A, B, C...)
// Each row has i letters with incrementing ASCII values

#include<stdio.h>

int main(){
    int i,j,k=65;
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c\t",k++);
        }
    printf("\n\n");
    }
    return 0;
}