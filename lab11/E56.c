#include<stdio.h>
#include<string.h>
int main(){
    char ch[10];
    int count=0,i;
    printf("Enter the string:");
    gets(ch);
    
    printf("string in caps: ");
    i=0;
    while (ch[i]!='\0')
    {
        printf("%c",ch[i]-32);
        i++;
    }
   
    return 0;
}