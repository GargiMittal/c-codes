#include<stdio.h>
#include<string.h>
int main(){
    char ch[10];
    int count=0,i;
    printf("Enter the string:");
    gets(ch);
    
    i=0;
    while (ch[i]!='\0')
    {
        count=count+1;
        i++;
    }
    printf("length of given character is %d",count);  
    return 0;
}