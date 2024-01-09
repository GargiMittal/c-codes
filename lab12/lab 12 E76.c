#include<stdio.h>
void main()
{
    char A[20];
    int i,u=0,l=0;

    printf("Enter  1st string input:");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]>=65&&A[i]<=90)
            u++;
       if(A[i]>=97&&A[i]<=122)
        l++;

    }
     printf("No. of uppercase characters are:%d \nNo. of lowercase characters are:%d ",u,l);
}
