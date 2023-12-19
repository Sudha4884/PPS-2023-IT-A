// entering all subjects marks using arrays
#include<stdio.h>
int main()
{
 int i, avgcpe,avgap,avgmath,avgbee;
 int cpe[5],math[5],ap[5],bee[5];
for(i=0;i<5;i++)
{
printf("enter cpe marks : ");
scanf("%d",&cpe[i]);}
for(i=0;i<5;i++)
{
printf("enter maths marks : ");
scanf("%d",&math[i]);
}
for(i=0;i<5;i++)
{
printf("enter ap marks : " );
scanf("%d",&ap[i]);
}
for(i=0;i<5;i++)
{
printf("enter bee marks : " );
scanf("%d",&bee[i]);
}
 avgcpe = (cpe[0]+cpe[1]+cpe[3]+cpe[4]+cpe[5])/5;
 avgmath = (math[0]+math[1]+math[2]+math[3]+math[4])/5;
 avgap = (ap[0]+ap[1]+ap[2]+ap[3]+ap[4]+ap[5])/5;
 avgbee = (bee[0]+bee[1]+bee[2]+bee[3]+bee[4]+bee[5])/5;
 printf("avg of cpe is%d",avgcpe);
 printf("avg of maths is %d",avgmath);
 printf("avg of ap is%d",avgap);
 printf(" avg of bee is %d",avgbee);

return 0;
}
 

