#include<stdio.h>
 void main() 
{ 
  int n,i;
  printf("enter n value : ");
  scanf("%d",&n);
  int marks[n],*ptr ;
  ptr = marks;
  for(i=0;i<n;i++)
   { 
     scanf("%d",ptr++);
   }
  ptr= marks; 
  for(i=0;i<n;i++)
  { 
    printf("%d",*ptr);
    printf("adress %p",ptr);
  }
}

   
