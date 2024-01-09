#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s;
    printf("enter 1st side of triangle:");
    scanf("%d",&a);
    printf("enter 2nd side of triangle:");
    scanf("%d",&b);
    printf("enter 3rd side of triangle:");
    scanf("%d",&c);
    s=((float)a+b+c)/2;
    printf("area of the tiangle is:%.3f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}