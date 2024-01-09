#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    printf("Enter 1st string:");
    gets(a);
    printf("Enter 2nd string:");
    gets(b);
    puts("velue of a is:%s",&a);
    return 0;
}