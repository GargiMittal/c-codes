#include<stdio.h>

int main(){
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    if(n%3==0||n%5==0)
        printf("Yes the given number is divisible by 5 or 3\n");
    else
        printf("The given number is not divisible by either 5 or 3\n");
    return 0;
}