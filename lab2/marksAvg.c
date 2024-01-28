//this program will give average of two marks
#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d%d", &a,&b);
    printf("Sum of given numbers is: %d\n",a+b);
    printf("Avg of the given numbers is:%.2f\n",(a+(float)b)/2);
    return 0;
}