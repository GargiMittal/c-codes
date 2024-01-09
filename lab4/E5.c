//Program to find area and circumference of a circle
#include<stdio.h>
#define pi ((float)22/7)
void main()
{
    int r;
    printf("enter the radius of the circle:");
    scanf("%d",&r);
    printf("the area of the circle is:%.3f\n",pi*r*r);
    printf("The circumference of the circle is:%.3f\n",pi*2*r);

}