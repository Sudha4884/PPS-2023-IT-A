#include<stdio.h>
void printArray(int[],int);
void main()
{
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
printf("\n enter %d elements ",n);
 for(i=0;i<n;i++)
  
    scanf("%d",&A[i]);
printArray(A,n);
}
void printArray(int X[10],int no)
{ int i;

  for(i=0;i<no;i++)
printf("%d ",X[i]);

}
