// Lab 6 - Exercise 21: Day of Week Converter
// Program to display day name from day number (1=Sunday to 7=Saturday)
// Uses switch-case for day conversion

#include<stdio.h>

int main(){
    int n;
    printf("enter the day number:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("sunday");break;
        case 2:printf("monday");break;
        case 3:printf("tuesday");break;
        case 4:printf("wednesday");break;
        case 5:printf("thursday");break;
        case 6:printf("friday");break;
        case 7:printf("saturday");break;
        default:printf("wrong number");
    }
    return 0;
}