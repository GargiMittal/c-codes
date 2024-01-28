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