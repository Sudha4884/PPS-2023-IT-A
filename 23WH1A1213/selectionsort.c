#include<stdio.h>
void readArray(int[], int);
void printArray(int[], int n);
void selectionSort(int [], int n);
void main()
{
int A[9],i,n;
printf("\n enter n:");
scanf("%d",&n);
readArray(A,n);
puts("\n");
printArray(A,n);
selectionsort(A,n);
printArray(A,n);
}
void readArray(int A[],int noe)
{
  int i;
  for(i=0;i<noe,i++)
  scanf("%d",&A[i]);
}
void printArray(int x[], int noe)
{
 int i;
  for(i=0;i<noe;i++)
   printf("%d",x[i]);
}
void selectionSort(int A[],int n);
{
  int i,j,min;
   for(i=0;i<n;++)
   {
     min=i;
     for(j=i+1;i<n;i++)
     {
       if(A[min]>A[j])
           min=j;
       if(min!=i)
         swap(A[i] && A[min]);
     }
}


