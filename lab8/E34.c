// Lab 8 - Exercise 34: Case Converter (Do-While Loop)
// Program to convert character case repeatedly until '$' is entered
// Allows converting uppercase to lowercase and vice versa

#include<stdio.h>

int main(){
    char n;
    do{
        fflush(stdin);
        printf("\nEnter any character:");
        scanf("%c",&n);
        if(n>=97&&n<=122)
         printf("After changing the case:%c\n",n-32);
        if(n>=65&&n<=90)
         printf("after changing the case:%c\n",n+32);
    
    }while(n!='$');
    
    return 0;
}