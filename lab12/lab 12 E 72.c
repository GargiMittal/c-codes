// Lab 12 - Exercise 72: Concatenate Strings with Comma
// Program to concatenate two strings with a comma separator
// Manual string concatenation without using strcat()

#include<stdio.h>
void main()
{
     char A[40],B[20];
    int i=0,n;

    printf("Enter  1st string input:");
    gets(A);

     printf("Enter  2nd string input:");
    gets(B);
   n=strlen(A);
    A[n]=',';

    while(B[i]!=0)
    {
        A[n+1]=B[i];
        n++;
        i++;

    }

    printf("New string obtained after concatenation-:\nA:");
    puts(A);
}
