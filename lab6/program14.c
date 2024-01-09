#include<stdio.h>
//program to find the sum o 1st 25 prime numbers
int main(){
    int count=1,i,j,sum=0,n;
    
    for (i=2;count<=25;i++)
    {
         n=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                n=0;
                break;
            }
        }
            if(n==1)
            {
            sum=i+sum;
            count=count+1;
            }  
        
    }
    printf("sum=%d",sum);   
    return 0;
}