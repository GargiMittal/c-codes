// Lab 3 - Project 1: Conditional Logic with Functions
// Program to demonstrate if-else statements with function calls
// Takes user input and calls appropriate function based on condition

#include<stdio.h>

// declaration
void printbye();
void printhello();
//function call
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);

    if(a==1)
        printhello();
    else
        printbye();
    return 0;
}
//function definition


void printhello(){
    printf("hello\n");

}
void printbye(){
    printf("byee\n");

}