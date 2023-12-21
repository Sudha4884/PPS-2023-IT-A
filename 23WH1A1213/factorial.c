#include<stdio.h>
int factorialOfNumber(int);
int main()
{
  int n,i,fact=1,f;
  
  printf("\n enter n value");
  scanf("%d",&n);
  f=factorialOfNumber(n);
  printf("\n factorial is %d",f);
}
int factorialOfNumber(int i)
{
  int n,fact=1;
  for(i=0;i<=n;i++);
    {
      fact = fact*i;
    }
     return fact;

}
        




