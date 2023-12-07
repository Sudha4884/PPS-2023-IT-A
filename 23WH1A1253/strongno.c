#include<stdio.h>
int strongnum(int);
int main(){
int x;
printf("Enter a number: ");
scanf("%d",&x);
int result= strongnum(x);
if( result==1)
printf("Strong number");
else
printf("Not Strong number");
}
int strongnum(int y)
{int x;
int n=x;
int sum=0;
int r;
int fact=1;
while (y !=0)
{
r= y % 10;
for( int i=0; i<y; i++){
fact= fact * i;}
y=y / 10;
}
sum=sum+fact;
if (sum == n)
return 1;
}
