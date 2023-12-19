#include<stdio.h>
int linearRecursive(int arr[],int key,int index,int size)
{
  if(index==size){
   return -1;
  }
 if(arr[index]==key){
  return index;
 }
 return linearRecursive(arr,key,index+1,size);
 }
int main(){
int size,key,i,index;
{
 printf("\n enter the size of the array");
 scanf("%d",&size);
 int arr[size];
 printf("enter the elements of the array\n");
 for(i=0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
printf("\n enter the key to search for");
scanf("%d",&key);
int result=linearRecursive(arr,key,index,size);
if (result != -1){
printf("elements %d found at index %d \n",key,result);
}
else
 printf("element %d not found in the array",key);
}
return 0;
}















































