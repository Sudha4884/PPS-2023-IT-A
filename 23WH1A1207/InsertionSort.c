#include<stdio.h>
void PrintArray(int [],int );
void InsertionSort(int [], int );
void main()
{
int A[10],n;
int i;
printf("enter n:");
scanf("%d",&n);
printf(" enter %d elements ",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);

PrintArray(A,n);
InsertionSort(A,n);
printf("\n");
PrintArray(A,n);
}



void PrintArray(int A[],int n)
{
int i;
for(i=0;i<n;i++)
printf(" %d ",A[i]);
}

void InsertionSort(int A[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
j=i-1;
temp = A[i];
while(j>=0 && (A[j]>temp))
{
A[j+1] = A[j];
j--;
}
A[j+1] = temp;
}
}




