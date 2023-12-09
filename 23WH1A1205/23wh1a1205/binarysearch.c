#include<stdio.h>
void printArray(int[],int);
void main()
{
int a[10],res,i,n;
n=readArray(a);
printf("\n");
printArray(a,n);
res=BinarySearch(a,n);
if(res=-1)
{
printf("enter not present in the list");
}
else
{
  printf("\nelement is present in the list");
}
return 1;
}
int readArray(int x[])
{
int n,i;
printf("\nenter n");
scanf("%d",&n);
printf("\nenter %d element");
for(i=0;i<n;i++)
scanf("%d",&x[i]);
}
 void printArray(int num[],int n)
{
 int i;
 for(i=0;i<n;i++)
{
 printf("%5d",num[i]);
}
  }
int binarySearch(int a[],int n)
{
 int low=0; mid, high=n-1, k;
  printf("\nenter the value to search");
 scanf("%d",&k);
     while(low<=high)
{
  mid=(low+high)/2;
  if(a[mid]==k)
{
  return mid;
}
if(a[mid]<k)
{
  low=mid+1;
}
if(a[mid]>k)
  high=high-1;
}
return -1;
}

