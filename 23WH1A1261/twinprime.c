#include<stdio.h>
void twinprime(int,int);
void main()
{

int a,b;
printf("Enter a value ");
scanf("%d",&a);
printf("Enter b value");
scanf("%d",&b);
return 0;
}
void twinprime(int lb,int ub);
{
int num;
for(num=lb;num<=ub;num++)
if(twinprime(num) && twinprime(num+2))
printf("%d %d",num,num+2);
}
