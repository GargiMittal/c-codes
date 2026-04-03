// Lab 10 - Exercise 53: Magic Square Check
// Program to check if a square matrix is a magic square
// Magic square: all rows, columns, and diagonals have equal sum

#include<stdio.h>

int main()
{
	int A[5][5],i,j,k,r,sum=0;
//program to enter a matrix
	printf("Enter the numbers of rows in matrix(max 5):");
	scanf("%d",&r);
// we will take both column and row as same since its a square matrix	
	for(i=0;i<r;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<r;j++)
		{
			scanf("%d",&A[i][j]);
            sum=sum+A[i][j];
		}
	}
	//program to check if matrix is magic square or not
    
 return 0;   
}