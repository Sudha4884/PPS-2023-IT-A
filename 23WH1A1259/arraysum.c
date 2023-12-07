#include<stdio.h>
void readArray(int [],int);
void printArray(int [],int);
void sumArray(int [],int);
void searchArray(int[],int);
int main()
{
   int A[10],i,n;
   printf("\n enter n");
   scanf("%d",&n); 
   readArray(A,n);
   printArray(A,n);
   readArray(A,n);
   printArray(A,n); 
   sumArray(A,n);
   searchArray(A,n);
}
void readArray(int Arr[],int n)
{
   int i;
   printf("\n enter %d numbers",n);
   for(i=0;i<n;i++)
   scanf("%d",&Arr[i]);
}
void printArray(int x[],int no)
{
   int i;
   for(i=0;i<no;i++)
   printf("%d",x[i]);
}
void sumArray(int B[],int b)
{
   int i,sum=0;
   for(i=0;i<b;i++)
   sum=sum+B[i];
   printf("\n sum of elements is %d",sum);
}
void searchArray(int Y[],int y)
{
   int j,ele,f=0;
   printf("\n enter the elements to search:");
   scanf("%d",&ele);
   for(j=0;j<y;j++)
   if(Y[j]==ele)
{
   printf("\n the element %d is present at %d position in the list \n",ele,j+1);
   f=1;
   break;
}
   if(f==0)
   printf("\n the element %d is not present in list \n",ele);
}
