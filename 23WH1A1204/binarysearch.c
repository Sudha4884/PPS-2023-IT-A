#include<stdio.h>
int BinarySearch(int [],int );
void ReadArray(int [],int);
void main()
{
  int n;int A[100];
  printf("enter number of elements");
  scanf("%d",&n);
  printf("enter %d elements",n);
  ReadArray(A,n);
for(int i = 0;i<n;i++)
{
printf("%d",A[i]);
} 
int  a = BinarySearch(A,n);
  printf("%d",a);
}


void ReadArray(int B[],int noe)
  {
    for (int i =0;i<noe;i++)
      {
        scanf("%d",&B[i]);
      }
  }

int BinarySearch(int A[],int num)
   {
      int k;
       printf("enter element to be searched");
       scanf("%d",&k);
       int low = 0;
       int high = num-1;
       while( low <=  high)
          {
             

             int mid = (low+high)/2;
             if(A[mid] == k)
             return mid;
             else if(A[mid] < k)
             low = mid+1;
             else if(A[mid] > k)
             high = mid-1;
            
 } 

 }

