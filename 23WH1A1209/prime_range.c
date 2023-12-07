#include<stdio.h>
void prime(int);
void main()
{
int l, u;
printf("Enter the ranges ");
scanf("%d  %d"&l, &u);
prime(l,u);
}

void prime(int s)
{
int i;
for (i=2; i< s; i++)
  {
   if (s % i!=0)
      printf("%d",s);
  }
}
