#include<Stdio.h>

 void readArray(int [],int);
 void printArray(int [],int);
void bubbleSort(int [],int);
void main()
{
  int A[10],i,n;
printf("enter n");
scanf("%d",&n)
printf("enter %d elements");
for(i=0;i<n;i++)
printf(A,n);
readArray(A,n);
bubbleSort(A,n);
void printArray(int x[],int no)
{
  int i;
  for(i=0;i<No;i++)
 printf("%d\n",x[i]);
}
void bubbleSort(int y[],int n)
{
  int i,j,temp,a,n;
for(i=0;i<n-1;i++)
{
  for(j=0;j<n-1;j++)
{
  if(a[j]>a[j+1])
{
  temp=a[j];
  a[j]=a[j+1];
 a[j+1]=temp;
}
}
}
