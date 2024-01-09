#include<stdio.h>
void main()
{
	int A[5][5],B[5][5],C[5][5],D[6][6],i,j,r,c;

	//program to enter a matrix
	printf("Enter the numbers of rows in matrix(max 5):");
	scanf("%d",&r);
	printf("Enter the numbers of columns in matrix:(max 5):");
	scanf("%d",&c);
	printf("Matrix 1:\n");
	for(i=0;i<r;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Matrix 2:\n");
	for(i=0;i<r;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	//Program to print a matrix
	printf("\nMatrix 1  Is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2  Is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",B[i][j]);
		}
		printf("\n");
	}
	//Program to add two matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
								
		}
	}		
	printf("sum is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",C[i][j]);
		}
		printf("\n");
	}
	
	
	//Program to subtract two matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			D[i][j]=A[i][j]-B[i][j];
								
		}
	}
	printf("subtraction is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",D[i][j]);
		}
		printf("\n");
	}
}
	
