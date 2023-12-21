#include<stdio.h>
int gcd(int , int);
int main()
{
  int n1,n2;
  printf("Enter n1:");
  scanf("%d",&n1);
  printf("Enter n2:");
  scanf("%d",&n2);
  printf("GCD of %d and %d is: %d\n", n1,n2,gcd(n1,n2));
}
int gcd(int a, int b)
{
  if(b == 0)
    return a;
  else
    return gcd(b, a%b);
}
