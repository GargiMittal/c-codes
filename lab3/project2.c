// Lab 3 - Project 2: Factorial Calculation Using Functions
// Program to calculate factorial of a number using recursive functions
// Takes user input and returns factorial using function definition

#include<stdio.h>

// declaration
int fact(int a);

//function call
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    printf("factorial is :%d",fact(a));
}
//function definition


int fact(int a){
    int f;
    if(a==1)
        return 1;
    f=a*fact(a-1);
    return f;

}
