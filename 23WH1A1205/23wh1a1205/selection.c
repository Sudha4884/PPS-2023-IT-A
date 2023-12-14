#include<stdio.h>
void selectionSort (int a[],int n);
void main()
{
  int size;
  printf("enter the size of the array");
  scanf("%d",&size);
}
 void selectionSort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
 for(j=0;j<n-1;j++)
{
  if(a[j]>a[j+1])
{
  temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
}
}
}
}
  
