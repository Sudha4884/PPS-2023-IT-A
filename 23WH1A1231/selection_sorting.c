#include <stdio.h>
void readarray(int [],int);
void printarray(int[],int);
void selectionsort(int [], int);
void main() {
int i,j, A[20],n;
printf("enter n");
scanf("%d", &n);
printf("enter %d numbers", n);
readarray(A,n);
printarray(A,n);
selectionsort(A,n);
printarray(A,n);
}
void selectionsort(int A[],int n)
{
int i,j,min;
for (i = 0; i < n; i++) {
min = i;
for(j = i+1; j<n; j++) {
if(A[min]>A[j])
min = j;
}
if (min != i)
{
swap(&A[i], &A[min]);
}
}
}
void swap (int *x, int*y)
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
