#include<stdio.h>

int main(){
    int i,n;
    float sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+((float)1/i);
    printf("Sum of the series 1+1/2+1/3+...1/n is: %f\n",sum);
    return 0;
}   