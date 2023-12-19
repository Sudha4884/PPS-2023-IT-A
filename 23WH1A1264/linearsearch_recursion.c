#include<stdio.h>
int linearsearch(int arr[],int key,int size,int index)
{
if(index>= size)
{
 return-1;}
if(arr[index]==key){
 return index;}
else{
 return lienarsearch(arr,key,size,index+1);
}
}
void main()
{
int size,key;
printf("enter the size of the array");
scanf("%d",&size);
int i,arr[size];
printf("enetr the elements of the array");
scanf("%d",&arr[i]);
for( i=0;i<size;i++)
{
printf("enter the key to be searched");
scanf("%d",&key);
int result;
result= linearsearch(arr,key,size,0);
if(result!=0)
{
printf("key %d found at index %d \n ");
}
else
{
printf("key %d is not found in the array");
}
}
}
