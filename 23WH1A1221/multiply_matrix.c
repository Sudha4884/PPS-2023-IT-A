#include <stdio.h>
void main()
{
    int row,col,A[3][2],B[3][3],C[2][3],i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&row,&col);
    printf("\n Enter the elements of A: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n  Enter the elements of B: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    printf("Multiplied matrix is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
