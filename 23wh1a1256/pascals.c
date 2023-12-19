#include<stdio.h>
int fact(int stop)
{
int i,fact=1;
for(i=1;i<=stop;i++)
{
fact = fact*i;
}
return fact;
}
int main()
{
int a,j,term;
printf("enter number of rows:");
scanf("%d",&a);
for(int i=0;i<=a;i++)
{
for(int j=0;j<=a-i;j++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
term = ((fact(i))/(fact(j)*fact(i-j)));
printf(" %d ",term);
}
printf("\n");
}
}


 

