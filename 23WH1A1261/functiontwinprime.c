#include<stdio.h>
void primeNumber(int)
void main(){
 int num;
scanf("%d",&num);
primeNumber(num);
}
void primeNumber(int num)
{
 
int i,count = 0;
for(i=1;i<=num;i++)
    {
 if(num/i==0)
 count++;
}
if(count==2)
printf("\n prime number");
else
printf("Not prime number");
}






