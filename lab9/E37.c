#include<stdio.h>

int main(){
    int A[20],i,j,n,m,evencount=0,oddcount=0,primecount=0;
    printf("input the amount of numbers you want to check[max20]:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            evencount=evencount+1;
        }
        else
        {
            oddcount=oddcount+1;
        }
        
        if(A[i]!=1){
        m=1;
        for(j=2;j<=A[i]/2;j++)
        {
            if(A[i]%j==0)
            {
                m=0;
                break;
            }
        }
            if(m==1)
            {
            primecount=primecount+1;
            }  
        }
    }
    printf("Even Number count=%d\nOdd Number count=%d\nPrime Number count=%d\n",evencount,oddcount,primecount);
}
