#include<stdio.h>
void main()
{
	int A[5][5],i,j,r,c;

	//program to enter a matrix
	printf("Enter the numbers of rows in matrix(max 5):");
	scanf("%d",&r);
	printf("Enter the numbers of columns in matrix:(max 5):");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	//Program to print a matrix
	printf("\nMatrix Is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}			
}
