#include<stdio.h>
void max(int [],int);
void min(int [],int);
void dup(int [],int);
void main()
{
  int a[10],i,n;
  printf("enter n value");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
  max(a,n);
  min(a,n);
  dup(a,n);
}
 void max(int x[],int n)
{
  int i,max;
  max=x[0];
  for(i=0;i<n;i++)
  {
    if(max<x[i])
    max=x[i];
  }
  printf("\nmax element = %d",max);
}
void min(int y[],int n)
{
   int i,min;
   min=y[0];
   for(i=0;i<n;i++)
   {
     if(min>y[i])
     min=y[i];
    }
  printf("\nmin element= %d",min);
}   
 void dup(int z[],int n)
{
   int j, i,count=0;
    
   for(i=0;i<n;i++)
   { 
     for (j=i+1;j<n;j++)
     {
     if(z[i]==z[j])
    printf("\n%d duplicate",z[i]);
    count++;
}
      printf("\n%d",count);

}
}     
