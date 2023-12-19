#include<stdio.h>
int linearSearchRecurssive(int arr[],int key,int size,int index)
{
 if(index >= size)
  return -1;
 if(arr[index]==key)
  return index;
return linearSearchRecurssive(arr,key,size,index+1);
}
int main()
{
int i,size,key,index;
printf("Enter the size of the array: ");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array: ");

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the key to be searched: ");
scanf("%d",&key);
int result=linearSearchRecurssive(arr,key,size,index);
if (result != -1)
{
printf("key %d found at index %d \n",key,result);
}
else
{
printf("key %d not found in the array \n",key);
}
return 0;
}
