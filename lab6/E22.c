#include<stdio.h>

int main(){
    int n;
    printf("Enter marks:");
    scanf("%d",&n);
    n=n/10;
    switch(n)
    {
        case 10:
        case 9:printf("Grade=A\n");break;
        case 8:
        case 7:printf("grade=B\n");break;
        case 6:
        case 5:
        case 4:printf("grade=C\n");break;
        case 3:
        case 2:
        case 1:printf("grade=F");break;
        default:printf("incorrect input");
    }
    
    return 0;
}