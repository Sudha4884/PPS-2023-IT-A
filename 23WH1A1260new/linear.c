#include<stdio.h>
int linearsearch(int A[], int size, int k, int index);
{
if(index >= size)
return -1;
if(a[index] == k)
return index;
return linearsearch recasive(A, k,size,index+1);
}
int main()
{
int size,k;
printf("ernter the size of the A");
scanf("%d",&size);
int A[size];
printf("enter the elements of the A \n");
for(int i=0; i<size; i++)
{
scanf("%d",&A[i]);
}
printf("enter the k to be searched");
scanf("%d",&k);
int result = linearsearchrecurssive(A,k,size,0);
if(result != -1)
{
printf("k %d found at index %d \n", k,result);
}
else
{
printf("k %d not found in the A \n",k);
}
return 0;
}
