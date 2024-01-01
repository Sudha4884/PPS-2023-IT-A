#include<stdio.h>
int Palindrome(int);
void main()
{
  int a,num;
  printf("enter a number");
  scanf("%d",&num);
  a=Palindrome(num);
  
  if(a==1)
 { printf("palindrome");
}
  else
 { printf("not palindrome");
 }

}
int Palindrome(int num)
{
  int rev=0;
  int b =num;
  while(num!=0)
  {
  rev = (rev*10)+num%10;
  num=num/10;
  }
  if (rev==b)
 {
  return 1;
 }
  else
 { return 0;
}
}
