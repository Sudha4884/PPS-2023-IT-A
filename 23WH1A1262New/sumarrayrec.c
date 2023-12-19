#include<stdio.h>
int sum(int arr[],int n)
{
if (n==0)
{
return 0;
}
else {
return arr[n-1]+sum(arr,n-10);
}
}
int main()
{
int array[]={1,2,3,4,5},result;

result =(sum);
printf("sum of array elements :%d\n",result);
return 0;
}
  

