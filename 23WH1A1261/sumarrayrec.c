#include<stdio.h>
int recurssiveSum(int arr[],int n)
{
if(n == 0)
{
return 0;
}else
{
return arr[n-1]+recurssiveSum(arr,n-1);
}
}
int main()
{
int size(),array[]={1,2,3,4,5};
int arraysize = size(array)/size(array[0]);
int result = recurssiveSum(array,arraysize);
printf("Sum of array elements:%d\n",result);
return 0;
}

