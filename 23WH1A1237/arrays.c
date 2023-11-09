#include <stdio.h>
void main()
{
int a[4][4],i,j,n,m;
printf("enter number of rows and columns");
scanf("%d%d",&m,&n);
printf("enter the elements");
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
 }
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%3d",a[i][j]);
}
printf("\n");

}
}


