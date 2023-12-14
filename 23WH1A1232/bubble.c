#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void bubblesort(int A[], int n);
void main() {
int i,element,j,A[20],n;
printf("enter n");
scanf("%d",&n);
printf("enter %d number",n);
readarray(A,n);
printarray(A,n);
bubblesort(A,n);
printarray(A,n);
}
void bubblesort(int A[],int n)
{
for(int i=1;i<n;i++) 
{
for(int j=1;j<n;j++)
{
if (A[j],A[j+1])
swap(&A[j],&A[j+1]);
}
}
} 

void swap(int*x,int*y)
{
int t = *x;
*x = *y;
*y = t;
}

void readarray(int A[], int n)
{
for (int i=0;i<n;i++)
scanf("%d",&A[i]);
}

void printarray(int A[], int n)
{
for (int i=0;i<n;i++)
printf("%d",A[i]);
}

