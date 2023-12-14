#include<stdio.h>
void selection(int int elements,int maxsize); 
void main()
{
int i;
printf("enter the elements");
scanf("%d",&maxsize);
 printf("enter elements  one by one");
 for(i=0;i<maxsize;i++)
{
 printf("\nenter elements%i:",i);
 scanf("%d",&elements);
}
  printf("\n array before sorting"):
  for(i=0;i<maxsize;i++)
  printf("%d",elements[i]);
  printf("\n");
  selection(elements,maxsize);
 printf("\n array after sorting");
  for(i=0;i<maxsize;i++)
printf("%d",elements[i]);
}
  void selection(int elements[],int array_size)
{
 int i,n,min,a; 
 for(i=0;i<n-1;i++)
{
 int min=i;
for(j=j+1;j<n;j++)
{
if(a[j]<a[min])
{
 min=j;
}
}
  if(min!=0)
{
 swap(a[i],a[min]);
}

}
}
