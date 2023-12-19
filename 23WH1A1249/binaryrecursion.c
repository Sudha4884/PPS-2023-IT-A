#include<stdio.h>
int binaryRecursion(int [],int key,int low,int high);
{
{
 if(low<=high) {
 int mid=(low+high)/2;
 }
 if(arr[mid]==key){
  return mid;
 }
if(arr[mid]>key){
  return binaryRecursion(arr,key,low,mid-1);
}
return binaryRecursion(arr,key,mid+1,high);
}
 return -1;
}    
int main(){
	int i,size,key;
	printf("\n enter the size of the sorted array");
	scanf("%d",&size);
	int arr[size];
	printf("enter the sorted elements of the array\n");
	for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
     printf("enter the key to search");
     scanf("%d",&key);
     int result=binaryRecursion(arr,key,0,size-1);
     if(result !=-1){
        printf("\n element %d found at index %d",key,result);
     }
     else
       {
         printf("\n element %d not found in the array\n ",key);
        }
    return 0;
  }






















	
