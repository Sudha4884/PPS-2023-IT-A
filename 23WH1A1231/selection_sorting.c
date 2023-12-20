#include<stdio.h>
void SelectionSort(int [],int n);
void Swap(int *,int *);
void readArray(int [],int );
void main()
{
int n;int A[100];
printf("enter number of elements");
scanf("%d",&n);
printf("enter %d elements",n);
readArray(A,n);
SelectionSort(A,n);

}
void readArray(int B[],int num)
{
for(int i =0;i<num;i++)
{
scanf("%d",&B[i]);

}
}


void SelectionSort(int A[],int num)
{
for(int i =0;i<num;i++)
  {
    int  min = i;
   for(int j = i+1;j<num;j++)
     {
       if(A[min]>A[j])
       min = j;
     }
   if (min != i)
     {
     swap(&A[i],&A[min]);
     }
  }
for(int i =0;i<num;i++)
{
printf("%d",A[i]);

} 
}

void swap(int *x,int *y)
{
int t =0;
t = *x;
*x = *y;
*y = t;

}
