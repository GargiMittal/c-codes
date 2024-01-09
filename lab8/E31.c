#include<stdio.h>

int main(){
    int digit,sum=0,n;
    printf("Enter the integer:");
    scanf("%d",&n);
    while(n>=10)
    {
        digit=n%10;
        sum=sum+digit;
        n=n-digit;
        n=n/10;

    }
    sum=sum+n;
    printf("sum of all Digits of the numbers is:%d\n",sum);
    return 0;
}