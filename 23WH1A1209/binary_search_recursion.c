#include<stdio.h>
void read_array(int [], int);
void print_array(int [], int);
int binary_search(int [], int, int, int );
void main()
{
int A[10], a, k, res, ln, bn;
printf("Enter number of elements: ");
scanf("%d", &a);
read_array(A,a);
print_array(A,a);
printf("Enter a element to search: ");
scanf("%d", &k);
res= binary_search(A, ln, bn, k);
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

int binary_search(int D[], int low,int high, int k)
{
int mid;
if ( low <= high)
mid = 0;
  if(low <= high)
    {
      mid = (low+high)/2;
      if (k == D[mid])
        return mid;
      else if (D[mid])
        return binary_search(D,low,mid-1,k);
      else  
        return binary_search(D,mid+1,high,k);
}   
else 
   return -1;
}
