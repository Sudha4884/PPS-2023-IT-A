#include<stdio.h>
int BinarySearch(int [],int,int,int);
void main()
{
   int B[50];
   int b;
   int num;
   printf("enter number of elements : ");
   scanf("%d",&num);
   printf("enter %d elements : ",num);
   for(int i = 0;i<num;i++)
      {
        scanf("%d",&B[i]);
      }
   printf("enter the element to be searched : ");
   scanf("%d",&b);
   int x= BinarySearch(B,0,num-1,b);
   
   if(x!=-1)
     printf("Index: %d",x);
   else
     printf("element is not found");
}
int BinarySearch(int A[],int low,int high,int k)
  {
    int mid = 0;
    if(low <= high)
      {
        mid = (low+high)/2;
      
       if (k == A[mid])
       return mid;
    else if (k<A[mid])
       return BinarySearch(A,low,mid-1,k);
    else  
       return BinarySearch(A,mid+1,high,k);
}   
 else
       return -1;

}
