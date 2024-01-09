#include<stdio.h>
int Harshad(int);
void main()
{
  int num,a;
  printf("enter a number");
  scanf("%d",&num);
  a=Harshad(num);
  if(a==1)
    printf("harshad number");
  else
    printf("not harshad number");


}
int Harshad(int num)
  {
    int sum=0;
    int rem=0;
    int b=num; 
    while(num!=0)
      {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
      }
   if(b%sum==0)
   return 1;
   else
   return 0;
  }
