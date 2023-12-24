#include<stdio.h>
char fun();
void main()
{
 char ch;
 ch = fun();
 printf("ch=%c",ch);
 }
 char fun()
 {
 char c ;
 printf("enter char");
 scanf("%c",&c);
 return c;
 }
