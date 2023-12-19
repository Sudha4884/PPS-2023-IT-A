#include<stdio.h>
int linearSearchRecursive(int A[],int key,int size,int index)
{
if(index >= size)
return -1;
if(A[index] == key)
return index;
return linearSearchRecursive(A,key,size,index+1);
}
int main()
{
int size,key,i;
printf("Enter the size of the array:");
scanf("%d",&size);
int A[size];
printf("%d",A[i]);
for(i=0;i<size;i++)
{
scanf("%d",&A[i]);
}
printf("Enter the key to be searched:");
scanf("%d",&key);

int result = linearSearchRecursive(A,key,size,0);

if(result!=-1)
{
printf("Key %d found at index %d\n",key,result);
}
else
{
printf("Key %d not found in the array\n",key);
}
return 0;
}
