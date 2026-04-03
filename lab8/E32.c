// Lab 8 - Exercise 32: Armstrong Number Check
// Program to check if a number is Armstrong (narcissistic) number
// Armstrong number: sum of cubes of digits equals the original number

#include<stdio.h>
#include<math.h>
int main(){
    int digit,sum=0,n,a;
    printf("Enter the number to check:");
    scanf("%d",&n);
    a=n;
    while(n>=10)
    {
        digit=n%10;
        n=n-digit;
        n=n/10;
        sum=sum+pow(digit,3);

    }
    sum=sum+pow(n,3);
    if(a==sum)
    printf("%d is an Armstrong number...\n",a);
    else
    printf("%d is not an Armstrong number...\n",a);
    return 0;
}