#include<stdio.h>
void printArray(int[],int);
void readArray(int [],int );
void searchElement(int[],int);
void sumOfArray(int[],int);
void main()
{
 int A[10],i,n;
 printf("\n n=");
 scanf("%d",&n);
printf("\n enter %d element",n);
scanf("%d",&A[i]);
readArray( A,n);
printArray(A,n);
searchElement(A,n);
sumOfArray(A,n);
}
void readArray(int x[],int noe)
{
 int i ;
 printf("Enter %d numbers",noe);
 for(i=0;i<noe;i++);
 scanf("%d",&x[i]);
}
void printArray(int x[], int noe)
{
  int i;
  for(i=0;i<noe;i++)
  printf("%d" ,&x[i]);
}
void searchElement(int x[],int noe)  
{
int i,k;
printf("k=");
scanf("%d",&k);
for(i=0;i<noe;i++)
{
if (k == x[i])
{
 printf("%d element is present",k);
}
else 
 printf("%d element is not present ",k);
}
}
void sumOfArray(int x[],int noe)
{
int i, sum=0;
for(i=0;i<noe;i++)
sum=sum+x[i];
printf("sum is %d",sum);
}
