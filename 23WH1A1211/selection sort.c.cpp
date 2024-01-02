#include<stdio.h>
int  ReadArray(int []);
void PrintArray(int [],int);
void SelectionSort(int [],int);
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


void SelectionSort(int A[],int n)
{
int min;
int temp;
for(int i=0;i<n;i++)
{
min=i;
for(int j=i+1;j<n;j++)
if(A[j]<A[min])
min=j;
temp=A[i];
A[i]=A[min];
A[min]=temp;
}
return;
}
