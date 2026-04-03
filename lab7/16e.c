// Lab 7 - Exercise 16E: Alphabet Triangle with Spacing
// Program to print alphabet characters in triangle with extra spacing
// Row i has (5-i) indentation and i alphabet characters

#include<stdio.h>

int main(){
    int i,j,k,l=65;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf("\t");
        }
        for (j=1;j<=i;j++)
        {
            printf("%c\t\t",l++);
        }
    printf("\n\n");
    }
    return 0;
}
