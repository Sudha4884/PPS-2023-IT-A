#include<stdio.h>
int BinarySearch(int [],int );
void ReadArray(int [],int);
void main()
{
  int n;int A[100];
  printf("enter number of elements\n");
  scanf("%d",&n);
  printf("enter %d elements\n",n);
  ReadArray(A,n);
for(int i = 0;i<n;i++)
{
printf("%d",A[i]);
} 
int  g = BinarySearch(A,n);
  printf("%d",g);
}


void ReadArray(int B[],int no)
  {
    for (int i =0;i<no;i++)
      {
        scanf("%d",&B[i]);
      }
  }

int BinarySearch(int A[],int num)
   {
      int k;
       printf("enter element to be searched\n");
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
