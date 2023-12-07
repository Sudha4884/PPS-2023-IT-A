#include<stdio.h>
void printArray(int [],int);
int main()
{
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
printf("entr %d numbers",n);
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 printArray(A,n);
}
void printArray(int x[],int no)
{
int i,size;
size=sizeof(x)/sizeof(x[0]);
printf("\n %d \n",size);
  for(i=0;i<no;i++)
  printf("%d",x[i]);
}
