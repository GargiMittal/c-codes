#include<stdio.h>

int main(){
     int A[20],i,n,smallest,largest;
    printf("input the amount of numbers you want to check[max20]:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
      for(i=0;i<n;i++)
    {
        if(i==0||A[i]<smallest)
        smallest=A[i];
        if(i==0||A[i]>largest)
        largest=A[i];
    }
    printf("Largest number is:\t%d\n",largest);
    printf("Smallest number is:\t%d\n",smallest);
    return 0;
}