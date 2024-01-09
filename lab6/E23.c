#include<stdio.h>

int main(){
    int a,b,c,big;
    printf("enter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the greatest number is:%d",big);
    return 0;
}