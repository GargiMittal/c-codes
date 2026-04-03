// Lab 9 - Program 18: Sum and Average of 10 Numbers
// Program to calculate sum and average of 10 user-provided numbers
// Stores numbers in array and computes statistics

#include<stdio.h>

int main(){
    int A[10],sum=0,i;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter number %d for sum and avg:",i+1);
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    avg=(float)sum/10;
    printf("The Sum of given numbers is:\t%d\nThe Averge of give numbers is\t%f\n",sum,avg);
    return 0;
}