#include<stdio.h>
int linearsearchRecursion(int arr[],int k,int n,int index);
int main()
{ 
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array:\n");
for(i=0,i<n,i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the key to be searched:");
scanf("%d"&k);
<F9>

int linearsearchRecursion(int arr[],int k,int n,int index)
{
 if(n==0)
  return-1;
 else
{
  if(k ==arr[n-1])
    return n-1;
  else
    return linearsearchRecursion(arr,k,n,index+1);
}
