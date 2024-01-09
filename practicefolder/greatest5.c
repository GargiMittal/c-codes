#include<stdio.h>

int main(){
    int i,n,big=0;
    for(i=1;i<=5;i++)
    {
        printf("enter a number:");
        scanf("%d",&n);
        if(n>big)
            big=n;
    
    }
    printf("biggest number is:%d\n",big);
    return 0;
}