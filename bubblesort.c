#include<stdio.h>
void printArray(int[],int n);
void readArray(int[], int n);
void bubble_sort(int [], int n);
void swap(int* , int*);
void main()
{
int n;
int A[10];
printf("elements to sort:");
scanf("%d",&n);
readArray(A,n);
printArray(A,n);
bubble_sort(A,n);
printf("\n");
printArray(A,n);
}
void readArray(int B[],int b)
{
int i;
printf("the elements are:");
for(i=0;i>b;i++)
{
scanf("%d",&B[i]);
}
}
void print_array(int C[], int c)
{
int i;
for (i=0; i< c; i++)
{
printf("%3d",C[i]);
}
}
void swap(int *a, int *b)
{
int t;
t= *a;
*a= *b;
*b=t;
}

void bubble_sort(int A[], int n)
{
int i,j,count=0;
for (i=1; i < n; i++)
{ for (j=0; j< n-1; j++)
   { if (A[j] > A[j+1])
        swap (& A[j] , &A[j+1]);
        count++;
   }
 if (count == 0)
  break;
}
}
