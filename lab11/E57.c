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
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            count=count+1;
        }
        i++;
    }
   printf("Numbers of vovels in the string are:%d",count);
    return 0;
}