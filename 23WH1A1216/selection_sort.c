#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);
void selectionsort(int[],int);
void main()
{
int A[10],n;
printf("\n enter n");
scanf("%d",&n);
readarray(A,n);
puts("\n");
printarray(A,n);
selectionsort(A,n);
printarray(A,n);
}
void readarray(int A[],int noe)
{
 int n,i;
 for(i=0;i<noe;i++)
  scanf("%d",&A[i]);
}
void printarray(int A[],int noe)
{
 int i;
for(i=0;i<noe;i++)
printf("%d\n  ",A[i]);
}
void selectionsort( int A[],int n)
{
int i,j,min;
for(i=0;i<n;i++)
{ min=i;
for(j=i+1;j<n;j++)
  { if(A[min]>A[j])
      min = j;
  }
  { if (min = i)
    swap(&A[i],&A[min]);
 }  
}
}
void swap(int *x,int *y)
{
 int t=*x;
*x=*y;
*y=t;
}
