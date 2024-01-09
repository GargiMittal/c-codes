#include<stdio.h>

int main(){
    int a,b,x,y,lcm,gdc,r=1;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        x=a;y=b;
    }
    else
    {
        y=a;
        x=b;
    }
    while(r!=0)
        {
        r=x%y;
        x=y;
        y=r;
        }
    gdc=x;
    lcm=a*b/gdc;
    printf("LCM Of %d and %d is %d\n",a,b,lcm);
    printf("GDC Of %d and %d is %d\n",a,b,gdc);

    return 0;
}