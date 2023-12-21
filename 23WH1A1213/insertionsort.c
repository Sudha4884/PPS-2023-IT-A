#include<stdio.h>
void readArray(int[], int);
void printArray(int[], int n);
void insertionSort(int[], int);
void main()
{
int A[9],i,n;
printf("\n enter n:");
scanf("%d",&n);
readArray(A,n);
puts("\n ");
printArray(A,n);
insertionSort(A,n);
printArray(A,n);  
}
void readArray(int A[], int noe)
{
int i;
for(i=0;i<noe;i++)
scanf("%d", &A[i]);
}
void printArray(int x[], int noe)
{
int i;
for(i=0;i<noe;i++)
printf("%d", x[i]);
}
void insertionSort(int A[], int n)
{
int i,j,element;
for(i=0;i<n;i++)
{
j=i-1;
element=A[i];
while(j>=0 && (A[j]>element))
{
A[j+1] = A[j];
j--;
}
A[j+1] = element;
}
}   
