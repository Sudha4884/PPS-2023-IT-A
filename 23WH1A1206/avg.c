#include<stdio.h>
void main()
{
int n1,n2,n3,sum,product;
int avg;
printf("Enter three integers");
scanf("%d%d%d",&n1,&n2,&n3);
sum=n1+n2+n3;
product=n1*n2*n3;
avg=(n1+n2+n3)/3;
printf("The sum of the three integers are:%d",sum);
printf("The product of three integers is:%d",product);
printf("The average is:%d",avg);
}
 
