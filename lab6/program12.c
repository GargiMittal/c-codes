#include<stdio.h>

int main(){
    int n,i,number,sum=0;
    printf("Enter the number of integers you want to add:");
    scanf("%d",&n);
    for(i=0;i!=n;i++)
       {
        printf("Enter the number:");
        scanf("%d",&number);
        sum=sum+number;
        
    }
    printf("sum is:%d\n",sum);
    
    return 0;
}