#include<stdio.h>

int main(){
    int a,b;
    int sign;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("\nEnter 2nd number:");
    scanf("%d",&b);
    printf("What Operation You want?\n 1 for addirion \n2 for subtraction \n3 for multiplication\n4 for Division:");
    scanf("%d",&sign);
    
    if(sign==1){
        printf("the sum of the given numbers is:%d",a+b);
    }
    else if(sign==2){
        printf("the subtraction of the given numbers is %d",a-b);
    }
    else if(sign==3){
        printf("the multiplication of the given numbers is:%d",a*b);
    }
    else{
        printf("the division of the given numbers is:%f",(float)a/b);
    }
    return 0;
}
