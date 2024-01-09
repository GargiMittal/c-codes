#include<stdio.h>

int main(){
    int sal;
    char code;
    printf("enter salary:");
    scanf("%d",&sal);
    fflush(stdin);
    printf("Enter the code:");
    scanf("%c",&code);
    
    switch(code)
    {
        case 'x':printf("next month salary=%d increment:none\n",sal);break;
        case 'y':printf("next month salary=%d increment:10%%\n",sal+(sal*10/100));break;
        case 'z':printf("next month salary=%d increment:15%%\n",sal+(sal*15/100));break;
        default:printf("wrong code");
    }
    return 0;
}