#include<stdio.h>
int main()
{ 
int a,b;
printf("\n enter a,b");
scanf("%d %d",&a,&b);
printf("\n chioces are:");
scanf("\n +: add \n -: sub \n %: mod \n *: mul \n enter your choice:");
char choice
scanf("%c" & choice);
switch(choice);
{
case '+' : printf("add is %d", a+b);
         break;
case '-' : printf("sub is %d", a-b);
         break;
case '%' : printf("mod is %d",a%b);
            break;
case '*' : printf("mul is %d", a%b);
          break;
}
return 0;
}
