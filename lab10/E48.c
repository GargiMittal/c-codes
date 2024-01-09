#include<stdio.h>
void main()
{
	int A[5][5],T[5][5],i,j,r,c,temp;

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


//  program to find transpose
printf("\nTranspose is:\n");
for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d \t",A[j][i]);
		}
		printf("\n");

	}
// Program to turn the same matrix in transpose
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		temp=0;
		if(i<j)
		{
			temp=A[i][j];
			A[i][j]=A[j][i];
			A[j][i]=temp;
		}
	}
}

printf("\nMatrix Is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
}

