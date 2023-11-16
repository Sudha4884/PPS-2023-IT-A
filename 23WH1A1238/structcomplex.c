#include<stdio.h>
#include<stdio.h>
struct complexnum
{
int realnum;
int imagenum;
};
void main()
{
int n;
struct complexnum c[n];
int i;
printf("\n enter n value");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\n enter realnum,coplexnum");
scanf("%d%d",&c[i].realnum,&c[i].imagenum);
}
for (i=0 ; i< n ; i++)
{
printf("\n%d+i%d",c[i].realnum,c[i].imagenum);
}
}

