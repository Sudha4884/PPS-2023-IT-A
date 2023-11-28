//
#include<stdio.h>
int main()
{
  int arr [5],max,min,i;
  for(i=0;i<5;i++)
  { 
   printf(" enter the number");
   scanf("%d", &arr[i]);
  }
  max=arr[0];
  for(i=1;i<5;i++)
  {
   if(arr[i]>max)
   {max=arr[i];}
  }
printf("the greater number is %d",max);

  min=arr[0];
  for(i=1;i<5;i++)
  {
   if(arr[i]<min)
   {min=arr[i];}
  }
printf("the lowest number is %d",min);
}
