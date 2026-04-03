// Lab 7 - Exercise 16G: Diamond Pattern
// Program to print a diamond shape using hash symbols
// Upper half: increasing rows, lower half: decreasing rows

#include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
            printf("\t");
        
        for (j=1;j<=i;j++)
            printf("#\t\t");
    printf("\n\n");
    }
    for(i=4;i>=1;i--)
    {
        for(k=1;k<=5-i;k++)
            printf("\t");
        for (j=1;j<=i;j++)
            printf("#\t\t");
        printf("\n\n");
    }
return 0;
}
