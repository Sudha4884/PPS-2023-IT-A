#include<stdio.h>
void printArray(int[],int);
int main()
{
 int A[10],i,n;
 printf("\n enter the value of n");
 scanf("%d",&n);
 printf("\n enter %d numbers",n);
 for(i=0;i<n;i++)
    scanf("%d",&A[i]);
 printArray(A,n);
}
void printArray(int X[10],int noe)
{
  int i,sum=0;
  for(i=0;i<noe;i++)
  printf("%d",X[i]);
  for(i=0;i<noe;i++)
  sum=sum+X[i];
  printf("\n the sum is %d",sum);
}

























































































































































}

