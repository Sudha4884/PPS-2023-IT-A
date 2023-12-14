#include<stdio.h>
int ReadArray(int []);
void PrintArray(int [],int );
void SelectionSort(int [], int );
void main()
{
int A[10],n;
n=ReadArray(A);
PrintArray(A,n);
SelectionSort(A,n);
PrintArray(A,n);
}

int ReadArray(int A[])
{
int n,i;
printf("enter n:");
scanf("%d",&n);
printf(" enter %d elements ",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
return n;
}

void PrintArray(int A[],int n)
{
int i;
puts("\n");
for(i=0;i<n;i++)
printf("%d ",A[i]);
}

void Swap(int *x, int *y)
{
int t;
t = *x;
*x=*y;
*y=t;
}

void SelectionSort(int A[], int n)
{
int i,j,min;
for(i=0;i<n;i++)
{
min = i;
for(j=i+1;j<n;j++)
{
if (A[min]>A[j])
min = j;
}
if (min != i)
Swap(&A[i],&A[min]);
}
}

