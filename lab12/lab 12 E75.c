// Lab 12 - Exercise 75: Check if String is Uppercase
// Program to verify if a string contains only uppercase letters
// Checks ASCII values for uppercase range (65-90)

#include<stdio.h>
void main()
{
    char A[20];
    int i,flag=0;

    printf("Enter  1st string input:");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        if((A[i]<65||A[i]>90)&&A[i]!=32)
        {
            printf("The string is not in uppercase");
            flag=1;
            break;
        }

    }

    if(flag==0)
        printf("The string is in uppercase");
}

