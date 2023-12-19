#include<stdio.h>
int main();
{
int a[3][3],i,j,r,c;
printf("\n enter r,c");
scanf("%d%d",&r,&c);
printf("enter %d no of elements",r*c);
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
printf("%d",a[i][j]);
}printf("\n");
return 0;}

