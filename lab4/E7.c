// Lab 4 - Exercise 7: Simple Interest Calculation
// Program to calculate simple interest with fixed rate of 8%
// Formula: SI = (Principal * Rate * Time) / 100

//Program to calculate simple interest
#include<stdio.h>
#define r ((int)8)
int main(){
    int p;
    float t;
    printf("Enter the Principle value:");
    scanf("%d",&p);
    printf("Enter the time in year:");
    scanf("%f",&t);
    printf("The Simple interest is:%.3f\n",(p*r*t)/100);
    return 0;
}