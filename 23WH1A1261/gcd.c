#include<stdio.h>
void gcd( int a, int b)
{
if(b == 0){
return a;
}
else{
return gcd(b,a%b);
  }
}

int main()
{
int num1,num2;
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",num2);
printf("gcd of %d and %d is = %d\n",num1,num2,gcd(num1,num2));
return 0;
}

