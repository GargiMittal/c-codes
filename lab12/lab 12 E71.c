#include<stdio.h>
#include<strings.h>
void main()
{

    char A[20],c;
    int i=0,j,n;

    printf("Enter string input:");
    gets(A);
    puts("Enter character to be deleted:");
    scanf("%c",&c);

    while(A[i]!='\0')
    {if(A[i]==c)
    {   j=i;

        while(A[j]!='\0')
       {
         A[j]=A[j+1];
         j++;
       }

    }
     else
     i++;
    }

    puts(A);




}
