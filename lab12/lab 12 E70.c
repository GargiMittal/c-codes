#include<stdio.h>
#include<string.h>
void main()
{ int i,j;
char A[5][10],temp[10] ;


for(i=0;i<5;i++)
{
    printf("Enter input for %d string:",i+1);
    gets(A[i]);

    }


for(i=0;i<4;i++)
{


 for(j=i+1;j<5;j++)

         if(strcmp(A[i],A[j])>0)
        {strcpy(temp,A[i]);
        strcpy(A[i],A[j]);
        strcpy(A[j],temp);
        }
}

printf("Sorted strings are:\n");

for(i=0;i<5;i++)
{
     puts(A[i]);



}



}
