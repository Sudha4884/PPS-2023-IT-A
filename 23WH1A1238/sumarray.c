#include<stdio.h>
int  sumarray(int a[],int n);
void main()
{
int a[10],n,i,sum;
printf("enter the range of the elements");
scanf("%d",&n);
printf("enter the elements");
for (i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
sum = sumarray(a,n);
printf("%d",sum);
}
int sumarray(int a[],int n)
{
if (n==0)
return 0;
else
return (a[n-1]+sumarray(a,n-1));
}

