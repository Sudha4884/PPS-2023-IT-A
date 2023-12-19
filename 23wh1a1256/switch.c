#include<stdio.h>
int main()
{
int a,b;
printf("\n enter a,b");
scanf("%d %d",&a,&b);
printf("\n choices are:");
scanf("\n +: addition \n -: subtraction \n *: multiplication \n %: modulus \n enter your choice");
char choice;
scanf("%c", & choice);
switch(choice)
{
case '+' : printf("addition is %d",a+b);
           break;
case '-' : printf("subtraction is %d", a-b);
            break;
case '*' : printf("multiplication is %d", a*b);
           break;
case '%' : printf("modulus is %d", a%b);
           break;
}
return 0;
}


