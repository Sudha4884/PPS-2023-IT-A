#include<stdio.h>
void read_array(int [], int); 
void insertion_sort(int [], int );
void print_array(int [], int );
void main()
{
int n;
int A[10];
printf("Enter the number of elemets");
scanf("%d", &n);
read_array(A, n);
printf("\n");
print_array(A, n);
insertion_sort(A, n);
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
void insertion_sort(int D[], int d)
{
int i,j, ele;
for (i=0; i<d; i++)
{
j=i-1;
ele= D[i];
while(j>=0 && D[j]> ele)
{
D[j+1] = D[j];
j--;
}
D[j+1]= ele;
}
}
