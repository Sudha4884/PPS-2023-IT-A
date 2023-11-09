#include<stdio.h>
void main()
{
int A[3][3],r,c,i,j;
printf("\n Enter,r,c");
scanf("%d%d,&r,&c);
printf("\n Enter %d no.of elements",r*c);
for(i=0;i<c;i++)
{
for(j=0,j<r,j++)
scanf("%d",&A[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",A[i][j]);
}
printf("\n")
}
}

