#include <stdio.h>
void main() {
int x,z;
printf("enter x and z values=  ");
scanf("%d%d",&x,&z);
printf("\n%d",(z>=50)&&(z<=100));
printf("\n%d",(x=56)||(x=80));
printf("\n%d",!(x=56));
printf("\n%d",(x=2)^(z=50)); }
