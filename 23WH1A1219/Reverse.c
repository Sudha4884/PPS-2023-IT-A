#include<stdio.h>
int main()
  {
    int reverse=0,n,remainder;
    printf("Enter an integer ");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reverse = reverse*10+remainder;
        n/=10;
    }
    printf("Reverse number = %d",reverse);
    return 0;
  }
