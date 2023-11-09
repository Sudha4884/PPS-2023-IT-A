#include<stdio.h>
void main()
{
int a[2][2],i,j,r,c;
printf("enter no of rows and columns"); 
scanf("%d,%d",&r,&c);
printf("\n enter %d no of elements",r);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<r;i++)
{
printf("%d", a[i][j]);
}
printf("\n");
}
