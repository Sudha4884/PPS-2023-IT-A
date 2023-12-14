#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void selectionsort(int A[], int n);
void main() {
int i,element,j,A[20],n;
printf("enter n");
scanf("%d",&n);
printf("enter %d number",n);
readarray(A,n);
printarray(A,n);
selectionsort(A,n);
printarray(A,n);
}
void selectionsort(int A[],int n)
{
int i,j,min;
for(i=1;i<n;i++) {
min = i;
for (j = i+1;j<n;j++)
{
if(A[min]>A[j])
min=j;
}
if(min!=i)
{
swap(&A[i],&A[min]);
}
}
}
void swap(int*x,int*y)
{
int t=*x;
*x=*y;
*y=t;
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


