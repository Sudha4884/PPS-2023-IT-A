#include<stdio.h>

int main()
{
  int i,n,k;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the key to be searched:");
  scanf("%d",&k);
  int res;
  res = linearsearchRecursive(); 
  if(res != -1)
    printf("key %d found at index %d\n",k,res);
  else
    printf("key %d not found in the array\n",k);
  return 0;
}
int linearsearchRecursive(int arr[],int k,int n,int index)
{
  if(index >= n)
    return -1;
    if(k == arr[index])
       return index;

    return linearsearchRecursive(arr,k,n,index+1);
  
}
