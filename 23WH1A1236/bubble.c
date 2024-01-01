#include<stdio.h>
void BubbleSort(int [],int n);
void Swap(int *,int *);
void readArray(int [],int );
void main()
{
   int n;int A[100];
   printf("enter number of elements : ");
   scanf("%d",&n);
   printf("enter %d elements",n);
   readArray(A,n);
   BubbleSort(A,n);

}


void readArray(int B[],int num)
   {
    for(int i =0;i<num;i++)
     {
       scanf("%d",&B[i]);
      
     }
  }


void BubbleSort(int A[],int no)
{
    for(int i =0;i<no-1;i++)
      {
    
        for(int j = 0;j<no-i-1;j++)
          {
            if(A[j]>A[j+1])
             {
                 swap(&A[j],&A[j+1]);
             }  
          }
 }     
   for(int i =0;i<no;i++)
      {
        printf("\n %4d",A[i]);
      }

}
void swap(int *x,int *y)
{
int t =0;
t = *x;
*x = *y;
*y = t;

}

       
