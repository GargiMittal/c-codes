#include<stdio.h>

int main() {
   int a[3][3], b[3][3], c[3][3], i, j, k;
   int sum = 0;
    printf("Enter 1st matrix:\n");
  	for(i=0;i<3;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("Entwer 2nd matrix:\n");
    	for(i=0;i<3;i++)
	{
		printf("Enter Row %d:\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

   printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }

   //Multiplication Logic
   for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }

   return (0);
}