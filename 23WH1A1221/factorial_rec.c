#include<stdio.h>
int re_factorial(int n);
int main(){
int no,res;
printf("\n enter any integer number : ");
scanf("%d",&no);
res = re_factorial(no);
printf("\n factoril of %d is : %d",no, res);
return 0;
}
int re_factorial(int n)
{
if(n==0)
return 1;
else
return n*re_factorial(n-1);
}
