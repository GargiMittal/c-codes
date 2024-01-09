#include<stdio.h>
void main()
{ //strlen alternative

    char S[20];
    int i=0 ;

 puts("Enter 1st string input:");
 gets(S);
 while(S[i]!='\0')
 {
     i++;
 }

 printf("Length of string is %d",i);




}
