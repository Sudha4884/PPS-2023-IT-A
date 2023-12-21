#include<stdio.h>
void read_array(int [], int);
void print_array(int [], int);
int linear_search(int [], int, int );
void main()
{
int A[10], a, k, res;
printf("Enter number of elements: ");
scanf("%d", &a);
read_array(A,a);
print_array(A,a);
printf("Enter a element to search: ");
scanf("%d", &k);
res= linear_search(A,a,k);
if (res== -1)
  printf("The element is not found");
else
  printf("The elements is at %d position \n", res+1);
}

void read_array(int B[], int b)
{
int i;
for (i =0; i<b; i++)
  scanf("%d", &B[i]);
}

void print_array(int C[], int c)
{
int i;
for (i=0; i< c; i++)
  printf("%d  ", C[i]);
}

int linear_search(int D[], int d, int n)
{

if (d==0)
  return -1;
else
{
 if (n == D[d-1])
    return d-1;
 else 
    return linear_search(D, d-1, n);
}
}
