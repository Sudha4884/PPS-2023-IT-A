#include<stdio.h>
void main()
{
int a[5][5],r,c,i,j;
printf("Enter rows and columns");
scanf("%d%d",&r,&c);
printf("\n Enter %d no. of elements ",r*c);
for(i=0;i<r;i++)
{ 
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%2d",a[i][j]);
}
printf("\n");
}
}

