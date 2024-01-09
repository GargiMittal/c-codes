#include<stdio.h>
void main()
{
    char S[20],B[20];
    int i=0,n,flag=0 ;

 puts("Enter 1st string input:");
 gets(S);

  puts("Enter 2nd string input:");
 gets(B);
 printf("first comes ");
    while(S[i]!='\0'&&B[i]!='\0')
    {

        if((S[i]-B[i])<0)
         {
            puts(S);
            flag=1;
            break;
         }

        else if((S[i]-B[i])>0)
            { puts(B);
            flag=1;
              break;
              }
        else
            i++;


    }

    if (flag==0)
    {
        if(S[i]=='\0')
        puts(S);
        else
        puts(B);
        }


}
