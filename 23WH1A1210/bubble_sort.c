#include<stdio.h>

void bubble_sort(int [], int);
void read_array(int [], int);
void print_array(int [], int);
void swap(int *, int *);
void main()
{
int n;
int A[10];
printf("The no. of elemets are");
scanf("%d", &n);
read_array(A,n);
print_array(A,n);
bubble_sort(A,n);
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
