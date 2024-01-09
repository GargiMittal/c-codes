#include<stdio.h>
#include<math.h>
int main(){
    int i,n,j;
    float sum=0,x;
    printf("Enter the value of N:");
    scanf("%d",&n);
    printf("Enter the valve of x:");
    scanf("%f",&x);
    for(i=1,j=1;i<=n;i++,j=j+2)
        sum=sum+(pow(x,j)/j);
    printf("Sum of the series x^1/1+x^2/2+x^3/3...is: %f\n",sum);
    return 0;
}   