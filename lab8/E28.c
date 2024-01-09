#include<stdio.h>

int main(){
    int i,n,k,sum=0;
    
    printf("Enter the value of N:");
    scanf("%d",&n);

    for(i=1,k=12;i<=n;i++,k=k+20)
        if(i%2==1)
        sum=sum+k;
        else
        sum=sum-k;
    printf("Sum of the series 12-32+52-72+... is: %d\n",sum);
    return 0;
}   