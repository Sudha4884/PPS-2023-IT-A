#include<stdio.h>
int binarySearchRecurssive(int arr[],int key,int low,int high)
{
while(low <= high)
{  
int mid = (low+high)/2;
if(arr[mid] == key)
return mid;
if(arr[mid]>key)
return binarySearchRecurssive(arr,key,low,mid-1);
else
return binarySearchRecurssive(arr,key,mid+1,high);
}
int main()
{
int size,key,i,arr[10];
for(i=0;i<size;i++){
scanf("%d",&arr[i]);}
printf("\nEnter the key to be searched :");
scanf("%d",&key);
int result = binarySearchRecurssive(arr,key,0,size-1);
if(result != -1)
{
printf("Key %d found at index %d\n",key,result);
}
else
{
printf("Key %d not found in the array\n",key);
}
return 0;
}
