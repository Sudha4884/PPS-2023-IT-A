#include<stdio.h>
void main()
{
int t1=0,t2=1,nextterm,i,n;
printf("Enter n: ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
nextterm = t1 + t2;
printf("  %d",t1);
t1 = t2;
t2 = nextterm;
}
}

