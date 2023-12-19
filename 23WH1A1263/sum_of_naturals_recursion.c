#include<stdio.h>
int findSum(int n)
{
 if(n==0)
{
  return 0;
}
 else
{
  return n+findSum(n-1);
}
}
int main()
{
int numbers;
printf("Enter a positive integer: ");
scanf("%d",&numbers);
int result=findSum(numbers);
printf("the sum of natural numbers upto %d is: %d\n",numbers,result);
return 0;
}
