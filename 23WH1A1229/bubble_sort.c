#include <stdio.h>
void readarray(int [],int);
void printarray(int[],int);
void bubblesort(int [], int);
void main() {
int i,j, A[20],n;
printf("enter n");
scanf("%d", &n);
printf("enter %d numbers", n);
readarray(A,n);
printarray(A,n);
bubblesort(A,n);
printarray(A,n);
}
void bubblesort(int A[],int n)
{
for(int i = 1; i<=n-1; i++)
{
for(int j = 0; j < n-i; j++)
{
if (A[j] > A[j+1])
swap(&A[j], &A[j+1]);
} 
}
}
void swap(int *x, int*y)
{
int t = *x;
*x = *y;
*y = t;
}
void readarray(int A[],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&A[i]);
}

void printarray(int A[], int n) {
for (int i = 0; i < n; i++)
printf("%d ", A[i]);
printf("\n");
}

