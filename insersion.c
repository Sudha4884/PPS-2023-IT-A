#include<stdio.h>
void insertion_sort(int [],int );
void main()
{
int num;
int B[100];
printf("enter number of elements");
scanf("%d",&num);
printf("enter %d elements",num);
for (int i = 0;i<num;i++)
  {
    scanf("%d",&B[i]);
  }
insertion_sort(B,num);
}
void insertion_sort(int A[],int n)
   {
      for (int i = 0;i< n;i++)
       {
         int a = A[i];
         int j = i - 1;
         while((j >= 0)&&(A[j] > a))
            {
              A[j+1] = A[j];
              j--;
              
             
         A[j+1] = a;              
}
}
   for(int i =0;i<n;i++)
{
printf("%d\n",A[i]);   
}
}
