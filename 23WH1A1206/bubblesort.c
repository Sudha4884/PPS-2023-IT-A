#include<stdio.h>
int  ReadArray(int []);
void PrintArray(int [],int);
void BubbleSort(int [],int);
void main()
{
int A[10],n;
n=ReadArray(A);
PrintArray(A,n);
BubbleSort(A,n);
printf("\n");
PrintArray(A,n);
}

int ReadArray(int A[])
{
int n,i;
printf("Enter N");
scanf("%d",&n);
printf("ENTER %d ELEMENTS",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
return n;
}


void PrintArray(int A[],int n)
{
int i;
puts("\n");
for(i=0;i<n;i++)
{
printf("%d",A[i]);
}
}

void Swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}

void BubbleSort(int A[],int n)
{
int i,j;
for(i=1;i<=n-1;i++)
{
for(int j=0;j<n-i;j++)
{
if(A[j]>A[j+1])
Swap(&A[j],&A[j+1]);
}
}
}

