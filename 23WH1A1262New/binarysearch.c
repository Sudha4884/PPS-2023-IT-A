#include<stdio.h>
int binarySearchRecurssive(int arr[],int key,int low,int high){
if(low>high)
return-1;
int mid=(low+high)/2;
if(arr[mid]==key)
return mid;
if(arr[mid]>key)
return binarySearchRecurssive(arr,key,low,mid-1);
else
return binarySearchRecurssive(arr,key,mid+1,high);
}
int main()
{
int size,key,i;
int arr[]={2,3,4,5,6};

for( i=0;i<size;i++)
{
printf("enter the key to be searched:");
scanf("%d",&key);
int result=binarySearchRecurssive(arr,key,0,size-1);
if(result !=-1)
{
printf("key %d found at index %d \n ",key,result);
}
else
{
printf("key %d not found in the array \n",key);
}
return 0;

}
}
