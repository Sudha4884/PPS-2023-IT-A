#include<stdio.h>
void readArray(int[],int n);
void printArray(int[],int);
void insertionsort(int[], int);
void main()
{ 
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
readArray(A,n);
puts("\n");
printArray(A,n);
insertionsort(A,n);
printArray(A,n);
}
void readArray(int A[], int noe)
{
int i;
for(i=0;i<noe;i++)
scanf("%d",&A[i]);
}
void printArray(int x[],int noe)
{
int i;
for(i=0;i<noe;i++);
printf("%d",x[i]);
}
void insertionsort(int A[],int n)
{
int i,j,ele;
for(i=0;i<n;i++)
{
j=i-1;
ele=A[i];
while((j>=0)&&(A[j]>ele))
{
A[j+1]=A[j];
j--;
}
A[j+1] =ele;
}
}
