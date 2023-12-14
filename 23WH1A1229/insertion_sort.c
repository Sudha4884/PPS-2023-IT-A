#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void insertionsort(int A[], int n);
void main() {
int i,element,j,A[20],n;
printf("enter n");
scanf("%d",&n);
printf(" enter %d number",n);
readarray(A,n);
printarray(A,n);
insertionsort(A,n);
printarray(A,n);
}
void insertionsort(int A[],int n)
{
int i,j,element;
for(i=1;i<n;i++) {
element = A[i];
j = i-1;
while(j>=0 && A[j] > element) {
A[j+1] = A[j];
j = j-1;
}
A[j+1] = element;
}
}

void readarray(int A[], int n) 
{
for (int i=0;i<n;i++)
scanf("%d",&A[i]);
}

void printarray(int A[], int n)
{
for (int i=0;i<n;i++)
printf("\n%d",A[i]);
}





