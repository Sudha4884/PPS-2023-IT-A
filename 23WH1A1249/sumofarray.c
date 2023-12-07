#include<stdio.h>

void printArray(int[],int);
int main()
{
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
printf("\n enter %d numbers",n);
for(i=0;i<n;i++)
  scanf("%d",&A[i]);
  printArray(A,n);
}
void printArray(int X[],int noe)
  {
   int i,sum=0,a,c;
   for(i=0;i<noe;i++)
   printf("\n%d   ",X[i]);
   for(i=0;i<noe;i++)
   sum=sum+X[i];
   printf("\n sum is %d",sum);
   printf("\n enter the value of a");
   scanf("%d",&a);
   printf("\n value of a is %d",a);
   for(i=0;i<noe;i++)
     {
      if(a==X[i])
       {
         c++;
        }
      if(c>0)
       {
         printf("\n the number is in the given array");
       }   
      else
         printf("\n the number is not in the array ");
     }
  }
