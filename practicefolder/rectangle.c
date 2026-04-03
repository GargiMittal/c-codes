// Practice: Rectangle Area Calculator
// Program to calculate area of rectangle given breadth and height
// Area = breadth × height

#include<stdio.h>

int main()
{
    int b,h;
    printf("enter the bredth of rectangle:");
    scanf("%d",&b);

    printf("\nenter the length of rectangle:");   
    scanf("%d",&h);

    printf("\narea of the rectangle is:%d",b*h);
    return 0;
}