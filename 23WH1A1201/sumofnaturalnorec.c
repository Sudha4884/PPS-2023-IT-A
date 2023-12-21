#include<stdio.h>
int range(int);
void main()
{
int a,n,res;
printf("enter any number: ");
scanf("%d",& n);
res= range(n);
printf("\nsum of %d natural numbers is %d\n",n,res);

}
int range(int n)
{
if(n==0)
 return 0;
else if(n==1)
 return 1;
else
 return n+range(n-1);
}
