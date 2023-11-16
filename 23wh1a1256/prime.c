#include<stdio.h>
int main()
{
int n,count,i;
printf("enter n value:");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
if(n%i == 0)
{
printf("%d",i);
    count++;
}
}
if(count==2)
{
printf("prime");
} 
else
{
printf("not a prime");
}
return 0;
}

