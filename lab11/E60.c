// Lab 11 - Exercise 60: Convert String to Lowercase
// Program to convert string to lowercase using tolower() library function
// Converts all uppercase letters to lowercase

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[10];
    int i;
    printf("Enter the string:");
    gets(a);
    i=0 ;
    printf("\nThe string in lowercase is:");
    while(a[i]!='\0')
    {
    putchar(tolower(a[i]));
    i++;
    }  
   
    return 0;
}