#include<stdio.h>
void main()
{
  

}
void readMatrix(int x[][10],int r,int c)
{
int i,j;
printf("\n enter rows and columns")
scanf("%d%d",&r,&c);
printf("\n enter %d elements",r,c)
for(i=0,i<r,i++)
{
for(j=0,j<c,j++)
scanf("%d",&x[i][j]);
}
}
void printMatrix(int x[][10],int r,int c)3
{
int i,j;
for(i

