#include<stdio.h>
void readArray(int[],int n);
void printArray(int[],int n);
void selectionSort(int[],int n);
void swap(int*,int*);
void main()
{
int A[10],n,i;
printf("\n Enter a number");
scanf("%d",&n);
printf("\n Enter%d elemets",n);
readArray(A,n);
printArray(A,n);
selectionSort(A,n);
printArray(A,n);
}
void readArray(int A[],int n)
{
int i;
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
void selectionSort(int A[],int n)
{
int i,j,min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(A[min]>A[j])
min=j;
}
if(min!=i)
swap(&A[i],&A[min]);
}
}
