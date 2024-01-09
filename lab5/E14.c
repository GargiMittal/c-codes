#include<stdio.h>

int main(){
    char c;
    int n;
    printf("Enter the character:");
    scanf("%c",&c);
    n=(int)c;
    if(n>=65&&n<=90)
        printf("%c is a Upper case Alphabet\n",c);
    else if(n>=97&&n<=122)
        printf("%c is a lower case Alphabet\n",c);
    else if(48<=n&&n<=57)
        printf("%c is a digit\n",c);
    else
        printf("invalid character\n");
    return 0;
}