#include<stdio.h>
void main()
{
    char A[20];
    int i,flag=0;

    printf("Enter  1st string input:");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        if((A[i]<97||A[i]>122)&&A[i]!=32)
        { printf("%c",A[i]);
            printf("The string is not in lowercase");
            flag=1;
            break;
        }

    }

    if(flag==0)
        printf("The string is in lowercase");
}
