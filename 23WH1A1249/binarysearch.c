#include<stdio.h>
void printarray(int [],int);
int main()
{
int A[10],res,i,n;
n=readArray(A);
printf("\n");
printArray(A,n);
res=BinarySearch(A,n);
if(res==-1)
  {
    printf("\n element not present in the list");
  }
else
  {
   printf("\n element is present in the list at %d",res);
  }
 return 1;
 }
int readArray(int X[])
  {
    int n,i;
    printf("\n enter n");
    scanf("%d",&n);
    printf("\n enter %d elements",n);
    for(i=0;i<n;i++)
      scanf("%d",&X[i]);
    }
void printArray(int num[],int n)
 {
  int i;
  for(i=0;i<n;i++){
  printf("\n %5d",num[i]);
 }
}
int BinarySearch(int A[],int n)
{
 int low=0,mid,high=n-1,k;
 printf("\n enter the value to search");
 scanf("%d",&k);
 while(low<=high)
 {
  mid=(low+high)/2;
  if(A[mid]==k)
    return mid;
  else if(A[mid]<k)
    low=mid+1;
  else
    high=mid-1;
}
return -1;
}
