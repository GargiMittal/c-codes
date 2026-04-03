// Lab 11 - Exercise 63: String Length
// Program to find length of a string using strlen() function
// Counts number of characters until null terminator

#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    int i;
    printf("Enter the string:");
    gets(a);

    printf("\nThe length of string is:%d",strlen(a));

   
    return 0;
}