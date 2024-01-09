#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    float sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+pow(i,2);
    printf("Sum of the series 1^2+2^2+3^2... is: %.1f\n",sum);
    return 0;
}   