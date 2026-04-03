// Lab 11 - Exercise 58: Character Frequency in String
// Program to find frequency (count) of a specific character in string
// Allows user to search for any character occurrence

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