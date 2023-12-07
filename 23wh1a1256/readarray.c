#include<stdio.h>
void readArray(int [],int);
void printArray(int [],int);
int main()
{
  int A[10],i,n;
  printf("\n enter n");
  scanf("%d",&n);
  readArray(A,n);
  printArray(A,n);
  readArray(A,n);
  printArray(A,n);
}
void readArray(int Arr[],int n)
{
  int i;
  printf("\n enter %d numbers",n);
  for(i=0;i<n;i++)
  scanf("%d",&Arr[i]);
}
void printArray(int x[],int no)
{
  int i;
  for(i=0;i<no;i++)
  printf("%d",x[i]);
}


