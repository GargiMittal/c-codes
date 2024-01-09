#include<stdio.h>
void main()
{ //string ascii sum

    char S[20];
    int i=0,sum=0 ;

 puts("Enter 1st string input:");
 gets(S);

 while(S[i]!='\0')
 {
     sum+=S[i];
     i++;
 }
 printf("Sum of ASCII values of string input is:%d",sum);

}
