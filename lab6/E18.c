#include<stdio.h>
//program to find odd or even number
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:printf("%d is even\n",n);break;
        case 1:printf("%d is odd\n",n);break;
        default:printf("wrong input");
    }
    return 0;
}