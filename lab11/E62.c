// Lab 11 - Exercise 62: Concatenate Two Strings
// Program to concatenate (join) two strings using strcat() function
// Appends second string to the first string

#include<stdio.h>
#include<string.h>

int main(){
    char a[20],b[10];
    int i;
    printf("Enter 1st string:");
    gets(a);
    printf("Enter 1st string:");
    gets(b);
    
    strcat(a,b);
    printf("\nThe strings are now concated:%s",a);

   
    return 0;
}