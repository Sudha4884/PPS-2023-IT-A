#include<stdio.h>
void main() 
{
int i,j,n,mat[4][4];
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
   printf("enter matrix elements");
   scanf("%d",&mat[i][j]);
}
}
for(i=0;i<n;i++) {
   for(j=0;j<n;j++)
{
   printf("%4d",mat[i][j]);
}

printf("\n");
}
}
