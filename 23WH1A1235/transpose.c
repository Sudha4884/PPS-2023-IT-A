#include <stdio.h>
void main()
{
    int r,c,A[2][2],B[2][2],i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter elements of A: ");
    for (i= 0; i < r; i++)
      for (j = 0; j < c; j++)
         scanf("%d", &A[i][j]);
   for (i = 0;i < r;i++)
      for (j = 0; j < c; j++)
         B[j][i] = A[i][j];
   printf("Transpose of the matrix: \n");
   for (i = 0; i< r; i++) {
      for (j = 0; j < c; j++)
         printf("%d ", B[i][j]);
      printf("\n");
   }
}
