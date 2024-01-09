#include<stdio.h>
//program to print fibbonacci series
int main(){
    int a=1,b=1,c,i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n+1;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}