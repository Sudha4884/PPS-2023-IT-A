#include<stdio.h>
int binarySearchRecursion(int arr[],int key,int low,int high)
{
if(low> high)
 return-1;
int mid =( low+high)/2;
 if(arr[mid]==key)
 return mid;
if(arr[mid]>key)
 return binarySearchRecursion(arr,key,low,mid-1);
else
 return binarySearchRecursion(arr,key,mid+1,high);
}
void main()
{
int i,size=7,key;
int arr[]={2,3,4,5,6,7,8};

for(i=0;i<size;i++)
{
printf("enter key to be searched");
scanf("%d",&key);

int result = binarySearchRecursion(arr,key,size-1,0);
if(result != -1)
{
printf("key %d found at index %d \n ",key,result);
}
else
{
 printf("key %d not found in the array \n",key);
}
}
}
