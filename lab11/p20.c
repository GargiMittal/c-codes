// Lab 11 - Program 20: Palindrome String Check
// Program to check if a string is palindrome (reads same forward and backward)
// Compares characters from start and end moving towards middle

#include<stdio.h>
#include<string.h>
int main(){
    char ch[10],n,i,check=1;
    printf("Enter the string:");
    scanf("%s",ch);
    n=strlen(ch);
    for(i=0;i<=n/2;i++)
    {
        if(ch[i]!=ch[n-i-1])
        {
            check=0; 
            break;
        }
    }
    if(check==1){
        printf("the given string is palindrome");
    }
    else{
        printf("the given string is not palindrome");
    }
    return 0;
}