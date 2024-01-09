#include<stdio.h>
void main()
{
      char A[20],B[20];
    int i=0,n;

    printf("Enter 1st string input:");
    gets(A);

    while(A[i]!=0)
    {
        B[i]=A[i];
        i++;
    }

    printf("Copied string is -: \nB:");
    puts(B);
}
