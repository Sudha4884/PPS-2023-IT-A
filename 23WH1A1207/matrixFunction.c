#include<stdio.h>
void main()
{
int A[10][10],r,c;
printf("enter r, c : ");
scanf("%d%d",&r,&c);
printf("enter %d elements ",r*c);

ReadMatrix(A,r,c);
PrintMatrix(A,r,c);
}

void ReadMatrix(int A[][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
}
}

void PrintMatrix(int A[][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%3d",A[i][j]);
}
printf("\n");
}
}
