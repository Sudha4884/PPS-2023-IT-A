#include<stdio.h>
int main()
{
int myArray[]={1,2,3,4,5};
int n = sizeof(myArray)/sizeof(myArray[0]);
int res = somofArray (myArray,n);
printf("sum:%d \n",res);
}
int sumofArray(int arr[],int n)
{
if (n==0)
{
return 0;
}
else
{
return arr[0]+sumofArray(arr+1,n-1);
}
}
