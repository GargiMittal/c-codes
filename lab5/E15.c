// Lab 5 - Exercise 15: Positive, Negative, or Zero Check
// Program to check if number is positive, negative, or zero
// Simple comparison using if-else-if-else structure

#include <stdio.h>
// program to check whether a number is positive or negative
int main()
{
    int n;
    printf("Enter the integer:");
    scanf("%d", &n);
    if (n > 0)
        printf("Given Integer is Positive...\n");
    else if (n==0)
        printf("Ginen Integer is 0 i.e. nither positive nor negitave...\n");
    else
        printf("Given Integer is Negative...\n");


    return 0;
}