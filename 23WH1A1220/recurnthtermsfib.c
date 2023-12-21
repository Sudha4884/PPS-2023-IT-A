#include<stdio.h>
int nFibo(int);
int main()
{
int n,res;
printf("enter nth term\n");
scanf("%d",&n);
res=nFibo(n);
printf("%d no in finonacci series is %d\n",n,res);
return 0;
}
int nFibo(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return(nFibo(n-1)+nFibo(n-2));
}
}


