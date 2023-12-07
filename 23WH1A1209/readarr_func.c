#include<stdio.h>
void readarray(int [], int);
void printarray(int [], int);
int sumArray(int [], int);
int searchArray(int [], int);

void main()
{
 int a[10];
 int n, res;
 printf("Enter n ");
 scanf("%d", &n);
 readarray(a, n);
 printarray(a, n);
 sumArray(a, n);
 res= searchArray(a, n);
 if (res == 1)
  printf("The element is present ");
 else
  printf("The element is not present");
}

void readarray(int x[], int y)
{
 int i;
 printf("\nEnter the elements ");
  for (i=0; i< y; i++)
   scanf("%d", & x[i]);
}

void printarray(int b[], int z)
{
 int i;
  for (i=0; i<z; i++)
   printf("%d  ",b[i]);
}

int sumArray(int c[], int w)
{
 int i;
 int sum=0;
  for (i=0; i< w; i++)
   { sum= sum+c[i];

   }
 printf("\n%d",sum);
}

int searchArray(int d[], int s)
{
 int i,g;
 printf("\nEnter an element ");
 scanf("%d",g);
 for (i=0; i < s; i++)
  if ( d[i]== g)
    return 1;
} 
