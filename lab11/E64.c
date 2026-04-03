// Lab 11 - Exercise 64: Reverse String
// Program to reverse a string using strrev() function
// Reverses the order of characters in string

#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    int i;
    printf("Enter the string:");
    gets(a);

    printf("\nThe reverse of the string is:%s",strrev(a));

   
    return 0;
}