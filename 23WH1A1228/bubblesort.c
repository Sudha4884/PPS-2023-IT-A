//bubble sort
#include<stdio.h>
void readArray(int[],int n);
void printArray(int[],int n);
void bubbleSort(int[],int n);
void swap(int*,int*);
void main()
{
int A[10],n,i;
printf("\n Enter a number");
scanf("%d",&n);
printf("\n Enter%d elemets",n);
readArray(A,n);
printArray(A,n);
bubbleSort(A,n);
printArray(A,n);
}
void readArray(int A[],int n)
{int i;
for(i=0;i<n;i++)
scanf("%d",&A[i]);
}
void printArray(int A[],int n)
{
int i;
puts("\n");
for(i=0;i<n;i++)
printf("%d   ",A[i]);
}
void swap(int*a,int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
void bubbleSort(int A[],int n)
{
int i,j,count=0;
for (i=1; i < n; i++)
{ for (j=0; j< n-1; j++)
   { if (A[j] > A[j+1])
        swap (& A[j] , &A[j+1]);
        count++;
   }
 if (count == 0)
  break;
}
}
