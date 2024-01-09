#include<stdio.h>
void main()
{
    // program to count vowels,words and digits

    char A[20];
    int i,n ,word =1, digit=0, vowel=0;

    printf("Enter the input of string:");
    gets(A);

    n=strlen(A);
    for(i=0;i<n;i++)
    { if(A[i]==' ')
       word++;
      if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
       vowel++;
      if(A[i]>=48&&A[i]<=57)
        digit++;


    }

    printf("Total no of words:%d \nTotal no of Vowels:%d \nTotal no of digits :%d",word,vowel,digit);


}
