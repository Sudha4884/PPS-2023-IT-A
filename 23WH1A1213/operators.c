#include<stdio.h>
void main()
{
 int a,b;
  printf("\nEnter a,b values:");
  scanf("%d%d", &a,&b);
  printf("\n arthematic operators:");
 printf("%d + %d = %d\n",a,b,a+b);
 printf("%d - %d = %d\n",a,b,a-b);
 printf("%d * %d = %d\n",a,b,a*b);
 printf("%d / %d = %d\n",a,b,a/b);
 printf("%d%%%d = %d\n",a,b,a%b);
  printf("\n relational operators:");
 printf("%d == %d =  %d\n", a,b,a=b);
 printf("%d > %d =  %d\n", a,b,a>b);
 printf("%d < %d = %d\n",a,b,a<b);
 printf("%d >= %d = %d\n",a,b,a>=b);
 printf("%d <= %d = %d\n",a,b,a<=b);
 printf("%d != %d = %d\n",a,b,a!=b);
  printf("\n logical operators:");
 printf("%d && %d = %d\n",a,b,a&&b);
 printf("%d || %d = %d\n",a,b,a||b);
 printf(" !(%d) = %d\n", a,!a);
 printf("!(%d) = %d\n",b,!b);
  printf("\n bitwise operators:"); 
 printf("%d & %d = %d\n",a,b,a&b);
 printf("%d | %d = %d\n",a,b,a|b);
 printf("%d ^ %d = %d\n",a,b,a^b);
 printf("%d >> %d = %d\n",a,b,a>>b);
 printf("%d << %d = %d\n",a,b,a<<b);
 }
