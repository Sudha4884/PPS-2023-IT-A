#include<stdio.h>
void main()
{
int A[3][3],r,c,i,j;
printf("\n enter r,c");
scanf("%d %d",&r,&c);
printf("\n enter %d no of elements",r*c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++){
scanf("%d",&A[i][j]);
}}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
for(j=0;j<c;j++){printf("%d ", A[i][j]);
}
printf("\n");
}
}
}
