#include<stdio.h>
void main()
{int r,temp, n,sum=0;
  printf("n=");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
printf("%d",sum);

if(temp==sum)
printf("it is arm strong number");
else
printf("it is not an arm strong number");

}
