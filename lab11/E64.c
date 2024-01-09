#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    int i;
    printf("Enter the string:");
    gets(a);

    printf("\nThe reverse of the string is:%s",strrev(a));

   
    return 0;
}