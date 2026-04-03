// Lab 11 - Exercise 61: Copy String
// Program to copy one string to another using strcpy() function
// Copies all characters from source to destination string

#include<stdio.h>
#include<string.h>

int main(){
    char a[10],b[10];
    int i;
    printf("Enter the string:");
    gets(a);
    strcpy(b,a);
    printf("\nThe strinf is copied in b=%s",b);

   
    return 0;
}