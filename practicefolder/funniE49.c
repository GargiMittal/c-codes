#include<stdio.h>
void main()
{
	int A[5][5],i,j,k,r,sum=0;

	//program to enter a  lower tringular matrix
	printf("Enter the numbers of rows and columns in the square matrix(max 5):");
	scanf("%d",&r);
    
	for(i=0,k=1;i<r;i++,k++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<k;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	//Program to print a lower triangle matrix
	printf("\nlower tringular Matrix Is:\n");
	for(i=0,k=1;i<r;i++,k++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}	

    //program to sum of lower diognal elements
    
    for(i=0,k=1;i<r;i++,k++)
	{
		for(j=0;j<k;j++)
		{
			sum=sum+A[i][j];
		}
	}			
      printf("Sum of the lower tringular elements is:%d\n",sum);
  
}
