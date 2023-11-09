#include<stdio.h>
void main()
{
int A[3][3],r,c,i,j;
printf(" enter the r ,c" );
scanf("%d%d",&r,&c);
printf("Enter no.of elements ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
 }
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%3d",A[i][j]);
}
printf("\n");

}
}

