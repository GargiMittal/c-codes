#include<stdio.h>
#include<string.h>

int main(){
    char a[20],b[10];
    int i;
    printf("Enter 1st string:");
    gets(a);
    printf("Enter 1st string:");
    gets(b);
    
    strcat(a,b);
    printf("\nThe strings are now concated:%s",a);

   
    return 0;
}