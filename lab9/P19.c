#include<stdio.h>

int main(){
    int A[10],max,i;
    
    for(i=0;i<10;i++)
    {
        printf("Enter number %d to find the Largest Number:",i+1);
        scanf("%d",&A[i]);
        if(i==0||max<A[i])
            max=A[i];
    }
    printf("Larges number is:\t%d\n",max);
    return 0;
}