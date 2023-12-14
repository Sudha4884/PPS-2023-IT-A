#include<stdio.h>
void readmatrix(int[4][3],int,int);
void printmatrix(int[4][3],int,int);
void main()
{
int row,col;
printf("enter no. of rows nd columns: ");
scanf("%d %d",&row,&col);
int a[row][col];
printf("enter %d elements",row*col);
readmatrix(a,row,col);
printmatrix(a,row,col);

}
void readmatrix(int x[4][3],int r,int c)
{
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
 {
  scanf("%d",& x[i][j]);
 }
}
}
void printmatrix(int x[4][3],int r,int c)
{
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
 {
 printf("%d\t",x[i][j]);
 }
 printf("\n");
}
}
