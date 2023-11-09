#include<stdio.h>
void main()
{
int a,b,c
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);
printf("enter c :");
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("%d is the greatest",a);
else
printf("%d is the geatest",c);
}
else
{
if(b>c){
printf("%d is the greatest",b);
}
else
printf("%d is the greastest",c);

}
