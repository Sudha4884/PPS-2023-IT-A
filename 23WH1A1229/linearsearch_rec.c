#include<stdio.h>
int LinearSearch(int [],int,int);
void main()
{
   int B[100];
   int a;
   int num;
   printf("enter number of elements : ");
   scanf("%d",&num);
   printf("enter %d elements : ",num);
   for(int i = 0;i<num;i++)
      {
        scanf("%d",&B[i]);
      }
   printf("enter the element to be searched : ");
   scanf("%d",&a);
   int b = LinearSearch(B,num,a);
   if(b!=-1)
     printf("element is found at %d",b);
   else
     printf("element is not found");
}
int LinearSearch(int A[],int n,int k)
{
   if (n==0)
     { 
        return -1;
     }
   else if(k == A[n-1])
      {
        return n-1;
      }
   else
      { 
         return LinearSearch(A,n-1,k);
      }
}

