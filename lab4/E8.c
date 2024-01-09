//Program to calculate compound interest
#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t,ci;
    printf("enter the principle amount:");
    scanf("%f",&p);
    printf("enter the Time in year:");
    scanf("%f",&t);
    printf("enter the rate:");
    scanf("%f",&r);
    ci=(p*(pow(( 1 + r / 100),t))-p);
    printf("The Compound Intrest is:%f",ci);
    return 0;
}