#include <stdio.h>  
void readarray(int [],int);
void printarray(int[],int);
void insertionsort(int [], int);
void main() {  
int i, ele, j, A[20],n;
printf("enter n");
scanf("%d", &n);
printf("enter %d numbers", n);  
readarray(A,n);
printarray(A,n);
insertionsort(A,n);
printarray(A,n);
}
void insertionsort(int A[],int n)
{
int i,j,ele;
for (i = 1; i < n; i++) {  
ele = A[i];  
j = i - 1;  
while (j >= 0 && A[j] > ele) {
A[j + 1] = A[j];
j = j - 1;
}
A[j + 1] = ele;  
}
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
