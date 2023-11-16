#include<stdio.h>
void main()
{
float bp,da,hra,grpay;
printf("\n enter basic salary of sagar");
scanf("%f",&bp);
da=0.4*bp;
hra=0.2*bp;
grpay=bp+da+hra;
printf("basic salary of sagar = %f\n",bp);
printf("dearness allowance = %f\n",da);
printf("house rent allowance = %f\n",hra);
printf("gross pay of sagar is %f\n",grpay);
return 0;
}
