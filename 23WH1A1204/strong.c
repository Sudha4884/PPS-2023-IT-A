#include<stdio.h>
int Strong(int);

void main()
{
 
  int num;
  printf("enter a number");
  scanf("%d",&num);
  int a = Strong(num);  
  if ( a==1)
  printf("strong number");
  else
  printf("not strong number"); 



}
  int Strong(int num)
{  
   int fact=1,rem=0;
   int p=0; 
   int b=num;
    while(num!=0)
     {
       rem=num%10;
       fact =1;
       
      for(int i=1;i<=rem;i++)
          {
            fact =fact*i;
          }
          
         p=fact+p;   
          num=num/10;
     }
if(p==b)
return 1;
else
return 0;
}
