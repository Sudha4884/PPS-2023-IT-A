#include<stdio.h>
void readarray(int[],int);
void bubblesort(int[],int);
void swap(int*,int*);
void printarray(int[],int);
void main()
{
int n,i;
int a[n];
printf("enter value of n: ");
scanf("%d",&n);
printf("enter %d elements: ",n);
readarray(a,n);
printarray(a,n);
bubblesort(a,n);
}
void bubblesort(int a[],int num)
{
int i,j;
for(i=1;i<=num-1;i++)
{
 for(j=0;j<num-1;j++)
  {
   if (a[j]>a[j+1])
     swap(&a[j],&a[j+1]);
  }
}
printf("\nnew array\n");
for(i=0;i<num;i++)
 {
  printf("%d\t",a[i]);
 }
}
void swap(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;
}
void readarray(int x[],int num)
{
for(int i=0;i<num;i++)
  scanf("%5d",& x[i]);
}
void printarray(int a[],int num)
{
for(int i=0;i<num;i++)
 printf("%5d",a[i]);
}
