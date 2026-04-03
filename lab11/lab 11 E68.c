// Lab 11 - Exercise 68: Reverse String Display
// Program to display reversed string
// Uses strrev() function to reverse and display

#include<stdio.h>
#include<string.h>
void main()
{ //reverse print a string

    char S[20];


 puts("Enter 1st string input:");
 gets(S);

 printf("Reversed string is %s",strrev(S));
}
