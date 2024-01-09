#include<stdio.h>

int main(){
    int a,b;
    char c;
    printf(" + for sum\n- for subtraction\n* for multiply\n / for devision\nEnter the operation you want to do:");
    scanf("%c",&c);
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    switch(c)
    {
        case '+':printf("sum is:%d\n",a+b);break;
        case '-':printf("subtraction is :%d\n",a-b);break;
        case '*':printf("multiplication is:%d\n ",a*b);break;
        case '/':printf("division is:%f",(float)a/b);break;
        default:printf("wrong input");
    }
    return 0;
}