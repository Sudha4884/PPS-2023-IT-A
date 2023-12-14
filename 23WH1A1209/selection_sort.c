#include<stdio.h>
void selection(int [], int);
void read_array(int [], int);
void print_array(int [], int);
void swap(int *, int *);

void main()
{
int n;
int A[10];
printf("Enter the no of elements: ");
scanf("%d", &n);

read_array(A,n);
print_array(A,n);
selection(A,n);
printf("\n");
print_array(A,n);
}

void read_array( int B[], int b)
{
int i;
printf("The elements are: ");
for (i=0; i< b; i++)
{
scanf("%d", & B[i]);
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
void swap( int *a, int *b)
{
int t;
t= *a;
*a = *b;
*b=t;
}

void selection(int A[], int a)
{
int i, j, min;
for (i=0; i < a; i++)
 { min = i;
  for (j=i+ 1; j < a; j++)
  { if (A[min] > A[j])
    min= j;
  }
 }
if (min != i)
swap(&A[i], &A[min]);
}
