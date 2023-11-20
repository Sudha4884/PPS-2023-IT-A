#include <stdio.h>
void main()
{
    int r,c,A[2][2],B[2][2],C[2][2],i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter elements of A: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements of B: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    printf("Multiplied matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
