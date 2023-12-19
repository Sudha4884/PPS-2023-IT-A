#include<stdio.h>
int findSum(int n)
{
if(n == 0)
  {
    return 0;
  }
else{
  return n+findSum(n-1);
  }
}
int main()
{
int number;
printf("Enter a positive integer:");
scanf("%d",&number);
int result = findSum(number);
printf("The sum of natural number up to %d is:%d\n",number,result);
return 0;
}

