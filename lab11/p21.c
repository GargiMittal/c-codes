// Lab 11 - Program 21: Character Frequency (Practice)
// Program to find frequency of a character in string
// Practice version of Exercise 58

#include<stdio.h>
#include<string.h>
int main(){
    char ch[10],a;
    int count=0,i;
    printf("Enter the string:");
    gets(ch);
    
    printf("Enter the letter you want to find frequency of:");
    scanf("%c",&a);
    i=0;
    while (ch[i]!='\0')
    {
        if(ch[i]==a)
        {
        count=count+1;
        }
        i++;
    }
    printf("Friquency of %c is :%d",a,count);  
    return 0;
}