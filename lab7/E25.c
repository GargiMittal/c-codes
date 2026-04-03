// Lab 7 - Exercise 25: ASCII Character Table
// Program to display ASCII values for all 256 characters
// Prints character and its corresponding ASCII numeric value

#include<stdio.h>

int main(){
    int n;
    for(n=1;n<=256;n++)
    {
        printf("ASCII Value for %c is %d\n",n,n);
    }
    return 0;
}