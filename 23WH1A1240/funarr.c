#include<stdio.h>
void readarr(int [],int );
void printarr(int [],int);
void sumofarray(int [],int);
void linearsrch(int [],int);
void main()
{
  int i,n,A[10];
  printf("enter n: ");
  scanf("%d",&n);
readarr(A,n);
printarr(A,n);
sumofarray(A,n);
linearsrch(A,n);
}
 
void readarr(int arr[],int nor)
{
  int i;
  for(i=0;i<nor;i++)
    scanf("%d",&arr[i]);
}
 void printarr(int x[],int no)
{
  int i;
   for(i=0;i<no;i++)
     printf("\n%d\n",x[i]);
}
 void sumofarray(int y[],int nos)
{
   int i,sum=0;
     for(i=0;i<nos;i++)
   {
      sum=sum+y[i];
   }
  printf("\nsum of array elements=%d",sum);
} 
void linearsrch(int z[],int n)
{       int i, p,count=0;
        printf("\nenter p\n ");
        scanf("%d",&p);
   for(i=0;i<n;i++)
   {   
      if(z[i]==p)
      { 
        count++;
       }
   }
       if(count>0)
        {

        printf("\n%d is present in a given array\n  ",p);
        }
      
      else
     
      {
      printf("p is not in array,at index %d\n",i);
       
      }
   }


   

