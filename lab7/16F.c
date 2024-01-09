#include<stdio.h>

int main(){
    int i,j,k,l=65;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
            printf("\t");
        
        for (j=1;j<=i;j++)
            printf("%c\t\t",l++);
    printf("\n\n");
    }
    
    l--;
    for(i=4;i>=1;i--)
    {
        for(k=1;k<=5-i;k++)
            printf("\t");
        for (j=1;j<=i;j++)
            printf("%c\t\t",l--);
        printf("\n\n");
    }
return 0;
}
