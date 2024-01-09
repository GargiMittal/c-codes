#include<stdio.h>

int main(){
    int n,a=1,b;
    printf("Enter the number:");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d\t",a);
        a=a+1;
    }   
    return 0;
}