#include<stdio.h>
int linearsearch(int arr[],int key,int size,int index){
if(index >= size)
return -1;
if(arr[index]==key)
return index;
return linearsearch(arr, key, size, index);
}
int main()
{
int size, key;
printf("Enter the size of the array:");
scanf("%d", &size);
int arr[size];
printf("Enter the element of the array:");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter to key be searched:");
scanf("%d",&key);
int result = linearsearch(arr, key,size,0);
if(result!=-1)
{
printf("key %d found at index %d \n",key,result);
}
else
{
printf("key %d not found in the array\n",key);
}
return 0;
} 
