// Lab 11 - Exercise 59: Convert String to Uppercase (Using Library Function)
// Program to convert string to uppercase using toupper() library function
// More efficient than manual character manipulation

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[10];
    int i;
    printf("Enter the string:");
    gets(a);
    i=0 ;
    printf("\nThe string in caps is:");
    while(a[i]!='\0')
    {
    putchar(toupper(a[i]));
    i++;
    }  
   
    return 0;
}